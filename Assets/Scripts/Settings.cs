using UnityEngine;

public static class Settings
{
    public static readonly string FILE_PATH = Application.persistentDataPath;
    public static readonly string REPORT_FILE_NAME = "report.json";
    public static readonly string REFERENCE_FILE_NAME = "reference.json";
    public static readonly string MAP_FILE_NAME = "map";
    
    public static bool IS_REFERENCE = true; //режим сбора данных для репрезентативной выборки
}
