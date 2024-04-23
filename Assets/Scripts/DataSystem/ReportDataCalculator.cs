using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Xml.Serialization;
using Newtonsoft.Json;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.SocialPlatforms.Impl;
using VR;
using Timer = VR.Timer;

namespace DataSystem
{
    public class ReportDataCalculator: MonoBehaviour
    {
        private const string PlayerPrefsPath = "Path";
        private static Dictionary<Zone, int> _zones;
        [SerializeField] private PathTracker tracker;
        [SerializeField] private GridSystem gridSystem;
        [SerializeField] private Timer timer;
        
        private Dictionary<string, float> _referenceValues;
        private Dictionary<string, float> _currValues;
        private Dictionary<float,string> _values; //процент curr values от reference values
        private List<double> _weights;
        private int Result { get; set; }
        public bool IsRated { get; set; }
        
        
        public List<Criteria> LoadCriteriaXML()
        { 
            XmlSerializer serializer = new XmlSerializer(typeof(Criteria));
            StringReader reader = new StringReader(Resources.Load<TextAsset>("Criteria.xml").text);
            CriteriaList criteriaList = (CriteriaList)serializer.Deserialize(reader);
            reader.Close();
            return criteriaList.Criteria.ToList();
            /*
            
            // Теперь вы можете использовать данные из criteria
            Debug.Log("Name: " + criteriaList.;
            Debug.Log("Description: " + criteria.Description);

            foreach (Score score in criteria.Scores)
            {
                Debug.Log("Score Value: " + score.Value);
                Debug.Log("Score Description: " + score.Description);
            }
            */
        }
        
        //XmlDocument doc = new XmlDocument();
        //TextAsset myXmlAsset = Resources.Load<TextAsset>("myXml");
        //doc.LoadXml(myXmlAsset.text);
        
        
        public List<float> GetValues()
        {
            return new List<float>();
        }
        
        
        public static ReportDataCalculator Instance;

        private void Awake()
        {
            if (Instance != null && Instance != this)
            {
                Destroy(this.gameObject);
            }
            else
            {
                Instance = this;
                DontDestroyOnLoad(gameObject);
            }
        }
        
        void Start()
        {
            _zones = gridSystem.zones.ToDictionary(x => x, x => 0);
            
            //УБРАТЬ ЭТО С СТАРТА ПОТОМ
            
          //  SaveToTextFile(Settings.REPORT_FILE_NAME);
            
            /*
            string savedData = LoadTextFile(path);
            Debug.Log(savedData);
            */
        }

        public static void UpdateVisitedZones(Zone zone)
        {
            // visitedZones.Add(zone);
            _zones[zone] += 1;
        }

        public static List<Zone> GetVisitedZones()
        {
            IEnumerable<Zone> zonesList = _zones.Where(kvp => kvp.Value != 0)
                .Select(kvp => kvp.Key);
            return zonesList.ToList();
        }
        
        public static List<Zone> GetUnVisitedZones()
        {
            IEnumerable<Zone> zonesList = _zones.Where(kvp => kvp.Value == 0)
                .Select(kvp => kvp.Key);
            return zonesList.ToList();
        }

        public int GetVisitedZonesCount()
        {
            return GetVisitedZones().Count;
        }

        public double GetMoveTime()
        {
            return Math.Round(timer.timerMoveStart, 2);
        }

        public double GetStateTime()
        {
            return Math.Round(timer.total - timer.timerStart - timer.timerMoveStart, 2);
        }
        
        public void SaveToJsonFile()
        {
            string json = JsonUtility.ToJson(GetReportData());
            PlayerPrefs.SetString(PlayerPrefsPath, json);
            
        }

        public ReportData GetReportData()
        {
            ReportData reportData = new ReportData
            {
                Zones = _zones,
                PathLength = tracker.GetPathLength(),VisitedZones = GetVisitedZones(),
                VisitedZonesCount = GetVisitedZonesCount(),
                StateTime = GetStateTime(),
                MoveTime = GetMoveTime()
            };
            return reportData;
        }


        public static ReferenceData CalculateReferenceData(List<ReportData> dataList)
        {
            ReferenceData refData = new ReferenceData();
            PropertyInfo[] properties = typeof(ReportData).GetProperties();
            foreach (PropertyInfo property in properties) 
            { 
                if (typeof(ReferenceData).GetProperty(property.ToString())!=null)
                {
                    var propertyList = dataList.Select(data => (double) property.GetValue(data)).ToList();
                    var checkedData = RemoveInaccuracy((List<double>) propertyList);
                    property.SetValue(refData, checkedData.Average());
                }
                //Console.WriteLine($"{property.Name}: {value}");
            }
            return refData;
        }
        
        
        public static List<double> RemoveInaccuracy(List<double> list)
        {
            if (list.Count <= 3)
            {
                return list;
            }
            else
            {
                while (true)
                {
                    var average = list.Average();
                    var stdDeviation = StdDeviation(list.ToArray(), false);
                    var min = list.Min();
                    var max = list.Max();
                    var tau1 = (average - min) / stdDeviation;
                    var tauN = (max - average) / stdDeviation;
                    float tauCritical;
                    if (list.Count < 40)
                    {
                        tauCritical = (float) ((2.4 + ((list.Count) / 57.0)) - (4.0 / (list.Count)));
                    }
                    else
                    {
                        tauCritical = 3.0f;
                    }
                    if ((tau1 <= tauCritical) && (tauN <= tauCritical))
                    {
                        return list;
                    }
                    if (tau1 >= tauN)
                    {
                        int minIndex = list.IndexOf(min);
                        list.RemoveAt(minIndex);
                    }
                    else
                    {
                        int maxElemIndex = list.IndexOf(max);
                        list.RemoveAt(maxElemIndex);
                    }
                }
            }
        }
        
        public static double StdDeviation(double[] data, bool isShifted = false)
        {
            var average = data.Average();
            double squaresSum = 0.0;
            foreach (var x in data)
            {
                double s = x - average;
                squaresSum += s * s;
            }
            int n = data.Length - 1;
            if (isShifted)
            {
                n++;
            }
            return Math.Sqrt(squaresSum / n);
        }
        
        public void SaveToTextFile()
        {
            var ReportData = GetReportData();
            string template = ": {0.Path}\nЗона: {0.Zone}";
            string path = Settings.FILE_PATH + "/" + Settings.REPORT_FILE_NAME;
            Debug.Log(path);
            if (!File.Exists(path))
            {
                File.WriteAllText(path,JsonConvert.SerializeObject(GetReportData()));
            }
        }
    }
}