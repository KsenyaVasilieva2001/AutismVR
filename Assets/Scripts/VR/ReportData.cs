using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace VR
{
    public class ReportDataCalculator: MonoBehaviour
    {
        private const string PlayerPrefsPath = "Path";
        private static Dictionary<Zone, int> zones;
        private PathTracker _tracker;
        private GridSystem _gridSystem;
        //ключ знчение

        void Start()
        {
            _tracker = GetComponent<PathTracker>();
            _gridSystem = GetComponent<GridSystem>();

            zones = _gridSystem.zones.ToDictionary(x => x, x => 0);
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
        
        void Save()
        {
            ReportData reportData = new ReportData
            {
                zones = zones,
                _positionList = _tracker.GetPositionList(),
                pathLength = _tracker.GetPathLength(),
                visitedZones = GetVisitedZones(),
                visitedZonesCount = GetVisitedZonesCount(),
                
                
            };
            string json = JsonUtility.ToJson(reportData);
            PlayerPrefs.SetString(PlayerPrefsPath, json);
            
        }

        void Load()
        {
            string json = PlayerPrefs.GetString(PlayerPrefsPath);
            ReportData reportData = JsonUtility.FromJson<ReportData>(json);
            //_positionList = reportData._positionList;
            //UpdateVisual();
        }
        
        private class ReportData
        {
            public List<Vector3> _positionList;
            public double pathLength;

            public Dictionary<Zone, int> zones;
            public List<Zone> visitedZones;
            public int visitedZonesCount;
            
            public float stateTime;
            public float moveTime;
            
        }
    }
}