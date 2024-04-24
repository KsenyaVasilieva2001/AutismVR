using System.Collections.Generic;
using System.Xml.Serialization;
using Unity.VisualScripting;
using UnityEngine;

namespace DataSystem
{
    [System.Serializable]
    [XmlRoot("criterias")]
    public class CriteriaList
    {
        [XmlElement("criteria")]
        public Criteria[] Criteria { get; set; }
    }

    [System.Serializable]
    public class Criteria
    {
        [XmlElement("name")]
        public string Name { get; set; }

        [XmlElement("rated")]
        public bool IsRated { get; set; }

        [XmlElement("param")]
        public string[] ParamsName { get; set; }

        [XmlArray("scores")]
        [XmlArrayItem("score")]
        public CriteriaScore[] CriteriaScores { get; set; }
    }

    [System.Serializable]
    public class CriteriaScore
    {
        [XmlElement("description")]
        public string Description { get; set; }

        [XmlElement("value")]
        public int ScoreValue { get; set; }
    }
    
    
    /*
    [System.Serializable]
    [XmlRoot("criterias")]
    public class CriteriaList
    {
        [XmlArrayItem("criteria")]
        public Criteria[] Criteria { get; set; }
    }
    
    
    [System.Serializable]
    public class Criteria
    {
        [XmlElement("name")] public string Name { get; set; }

        [XmlElement("rated")] public bool IsRated { get; set; }

        [XmlArray("params")]
        [XmlArrayItem("param")]
        public string[] ParamsName { get; set; }
        
        [XmlArray("scores")]
        [XmlArrayItem("score")]
        public CriteriaScore[] CriteriaScores { get; set; }
    }

    [System.Serializable]
    public class CriteriaScore
    {
        [XmlElement("description")] public string Description { get; set; }

        [XmlElement("score")] public int ScoreValue { get; set; }
    }
    */
    
}

/*
    public float CalculateCriterion(string criterionName)
        {
            float total = 0;
            float weightSum = 0;

            /*
        foreach (Parameter parameter in data.parameters)
        {
            if (parameter.name.StartsWith(criterionName))
            {
                float referenceValue = referenceValues[parameter.name];
                float value = Mathf.Clamp01(parameter.value / referenceValue);
                total += value * parameter.weight;
                weightSum += parameter.weight;
            }
        }
        

            return total / weightSum * 4;
        }
    }
}
*/


