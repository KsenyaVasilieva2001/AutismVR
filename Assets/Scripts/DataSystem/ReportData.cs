using System.Collections.Generic;
using Newtonsoft.Json;
using VR;

public class ReportData
{
    public int ID;

    public bool IsReference;

    [JsonProperty("Зо")]
    public Dictionary<Zone, int> Zones;
            
    [JsonProperty("Посещенные зоны")]
    public List<Zone> VisitedZones;
    
    [JsonProperty("Path length")] public double PathLength; //Длина пути

    [JsonProperty("Visited zones count")] public int VisitedZonesCount; //Количество посещенных зон
            
    [JsonProperty("State time")] public double StateTime; //Время покоя

    [JsonProperty("Move time")] public double MoveTime; //Время движения
        
    [JsonProperty("Reaction time")] public double ReactionTime; //Время, в течение которого ребенок начинает реагировать на задания, данные виртуальным помощником;
    
    [JsonProperty("Run away attempts count")] public double RunAwayAttemptCount;//Количество попыток убежать от взрослого - должно иметь сильное влияние
        
    [JsonProperty("Turn away time")] public double TurnAwayTime; //Сколько камера не повернута к виртуальному помощнику во время озвучки задания
    
    [JsonProperty("Imitation attempt number")] public double ImitationAttemptNum; //С какой попытки начал имитировать взрослого
        
    [JsonProperty("Start imitation time")] public double StartImitationTime;//Сколько времени, прежде чем начать имитировать - start Reaction Time
        
    [JsonProperty("Imitation count")] public double ImitationCount; //Сколько всего верных имитаций было
        
    [JsonProperty("Pick up time")] public double PickUpTime; //Время от подбора игрушки/предмета до попадания в зону коллайдера, в которую должен попасть предмет
        
    [JsonProperty("Attempt count")] public double AttemptCount;// Количество попыток, необходимое ребенку для верного выполнения задания (только для жестов)

    [JsonProperty("Correct answer count")] public double CorrectAnswerCount; //количество правильных ответовm
}