using UnityEngine;

namespace VR
{
    public class QuestSystem : MonoBehaviour
    {
        public static event System.Action<QuestSystem> PassedEvent;
        public static event System.Action<QuestSystem> GotEvent;
        public void Start() { }
        public void Destroy() { }

        public void OnPassedEvent()
        {
            PassedEvent?.Invoke(this);
        }

        public void OnGotEvent()
        {
            GotEvent?.Invoke(this);
        }
    }
}
