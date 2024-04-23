using UnityEngine;

namespace DefaultNamespace
{
    public class SingletonManager : MonoBehaviour
    {
        private static SingletonManager _instance;

        private void Awake()
        {
            if (_instance != null && _instance != this)
            {
                Destroy(this.gameObject);
            }
            else
            {
                _instance = this;
                DontDestroyOnLoad(gameObject);
            }
        }
    }
}