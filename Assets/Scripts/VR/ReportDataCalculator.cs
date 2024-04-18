using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using Newtonsoft.Json;
using Unity.VisualScripting;
using UnityEngine;

namespace VR
{
    public class ReportDataCalculator: MonoBehaviour
    {
        private const string PlayerPrefsPath = "Path";
        private static Dictionary<Zone, int> zones;
        [SerializeField] private PathTracker _tracker;
        [SerializeField] private GridSystem _gridSystem;
        [SerializeField] private Timer _timer;
        
        void Start()
        {
            zones = _gridSystem.zones.ToDictionary(x => x, x => 0);
            
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
            zones[zone] += 1;
        }

        public static List<Zone> GetVisitedZones()
        {
            IEnumerable<Zone> zonesList = zones.Where(kvp => kvp.Value != 0)
                .Select(kvp => kvp.Key);
            return zonesList.ToList();
        }
        
        public static List<Zone> GetUnVisitedZones()
        {
            IEnumerable<Zone> zonesList = zones.Where(kvp => kvp.Value == 0)
                .Select(kvp => kvp.Key);
            return zonesList.ToList();
        }

        public int GetVisitedZonesCount()
        {
            return GetVisitedZones().Count;
        }

        public double GetMoveTime()
        {
            return Math.Round(_timer.timerMoveStart, 2);
        }

        public double GetStateTime()
        {
            return Math.Round(_timer.total - _timer.timerStart - _timer.timerMoveStart, 2);
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
                
                zones = zones,
            //    _positionList = _tracker.GetPositionList(),
                pathLength = _tracker.GetPathLength(),visitedZones = GetVisitedZones(),
                visitedZonesCount = GetVisitedZonesCount(),
                stateTime = GetStateTime(),
                moveTime = GetMoveTime()
            };

            return reportData;
        }
        
        public void SaveToTextFile()
        {
            var ReportData = GetReportData();
            string template = ": {0.Path}\nЗона: {0.Zone}";
            string path = Settings.FILE_PATH + "/" + Settings.REPORT_FILE_NAME;
            if (!File.Exists(path))
            {
                File.WriteAllText(path,JsonConvert.SerializeObject(GetReportData()));
            }
        }

        

        void Load()
        {
            string json = PlayerPrefs.GetString(PlayerPrefsPath);
            ReportData reportData = JsonUtility.FromJson<ReportData>(json);
            //_positionList = reportData._positionList;
            //UpdateVisual();
        }

        public class ReportData
        {
           // public List<Vector3> _positionList;
            [JsonProperty("Длина пути")]
            public double pathLength;

            [JsonProperty("Зоны")]
            public Dictionary<Zone, int> zones;
            
            [JsonProperty("Посещенные зоны")]
            public List<Zone> visitedZones;
            
            [JsonProperty("Количество посещенных зон")]
            public int visitedZonesCount;
            
            [JsonProperty("Время покоя")]
            public double stateTime;

            [JsonProperty("Время движения")] public double moveTime;
        }
    }
}