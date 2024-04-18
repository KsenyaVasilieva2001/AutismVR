using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;

using Newtonsoft.Json;
using SFB;
using UnityEngine;
using VR;

public class FileManager : MonoBehaviour
{
 //   private ExtensionFilter[] _extensionFilters = ExtensionFilter[Exte];

  

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
    
}
