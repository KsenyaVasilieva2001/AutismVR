using System;
using System.Collections.Generic;
using System.IO;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using SFB;
using UnityEngine;

namespace DataSystem
{
    public class FileManager : MonoBehaviour
    {
        private string _reportFilePath;
        private string _refFilePath;
        private List<ReportData> _dataList;

        public void Awake()
        {
            _reportFilePath = Settings.FILE_PATH + "/" + Settings.REPORT_FILE_NAME;
            _refFilePath = Settings.FILE_PATH + "/" + Settings.REPORT_FILE_NAME;
        }

        public void OpenFile()
        {
        
        }

        public void SaveReport()
        {
            string path = StandaloneFileBrowser.SaveFilePanel("Сохранить", "", Settings.REPORT_FILE_NAME, "txt");
            if (!string.IsNullOrEmpty(path))
            {
                File.WriteAllText(path, LoadTextFile(Settings.REPORT_FILE_NAME));
            }
        }

        public void SaveMap()
        {
            string path = StandaloneFileBrowser.SaveFilePanel("Сохранить", "", Settings.MAP_FILE_NAME, "png");
            if (!string.IsNullOrEmpty(path))
            {
                File.WriteAllBytes(path, LoadImage(Settings.MAP_FILE_NAME));
            }
        }
    
        public string LoadTextFile(string name)
        {
            string path = Settings.FILE_PATH + "/" + name;
            if (File.Exists(path))
            {
                return File.ReadAllText(path);
            }
            else
            {
                Debug.LogError("File not found");
                return "";
            }
        }
    
    
        public byte[] LoadImage(string name)
        {
            byte[] image = new byte[] {};
            string path = Settings.FILE_PATH + "/" + name;
            if (File.Exists(path))
            {
                image = File.ReadAllBytes(path);
            }
            return image;
        }

        public void SaveReportData(ReportData reportData)
        {
            // Проверить, существует ли файл
            if (File.Exists(_reportFilePath))
            {
                // Считать данные из файла
                string jsonString = File.ReadAllText(_reportFilePath);
                _dataList = JsonConvert.DeserializeObject<List<ReportData>>(jsonString);
            }
            else
            {
                // Создать новый список, если файла не существует
                _dataList = new List<ReportData>();
            }
            _dataList.Add(reportData);
            
            // Преобразовать список обратно в JSON-строку
            string newJsonString = JsonConvert.SerializeObject(_dataList, Formatting.Indented);
            
            // Записать полученную JSON-строку в файл
            File.WriteAllText(_reportFilePath, newJsonString);

            // Пересчитать средние значения
            ReferenceData newReferenceData = ReportDataCalculator.CalculateReferenceData(_dataList);
            
            // Преобразовать средние значения в JSON-строку
            string averageJsonString = JsonConvert.SerializeObject(newReferenceData, Formatting.Indented);
            
            // Записать средние значения в файл
            File.WriteAllText(_refFilePath, averageJsonString);
        }
    }
}
