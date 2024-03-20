using Unity.Netcode;
using UnityEngine;

namespace Networking
{
    public class NetworkPlayerController : NetworkBehaviour
    {
        public static NetworkPlayerController Instance = null;
        [SerializeField] private Transform root;
        [SerializeField] private Transform leftHand;
        [SerializeField] private Transform rightHand;

        public Renderer[] meshToDisable;
        
        void Start () {
            if (Instance == null) { // Экземпляр менеджера был найден
                Instance = this; // Задаем ссылку на экземпляр объекта
            } else if(Instance == this){ // Экземпляр объекта уже существует на сцене
                Destroy(gameObject); // Удаляем объект
            }
            // Теперь нам нужно указать, чтобы объект не уничтожался
            // при переходе на другую сцену игры
            DontDestroyOnLoad(gameObject);

            // И запускаем собственно инициализатор
            Init();
        }
        /*
        public override void OnNetworkSpawn()
        {
            base.OnNetworkSpawn();
            if (IsOwner)
            {
                foreach (var item in meshToDisable)
                {
                    item.enabled = false;
                }
            }
        }
        */

        private void Init()
        {
            if (IsOwner)
            {
                root.position = RigReference.Singleton.root.position;
                root.rotation = RigReference.Singleton.root.rotation;
            
                leftHand.position = RigReference.Singleton.leftHand.position;
                leftHand.rotation = RigReference.Singleton.leftHand.rotation;
            
                rightHand.position = RigReference.Singleton.rightHand.position;
                rightHand.rotation = RigReference.Singleton.rightHand.rotation;

               // GetComponent<RigReference>().gameObject.SetActive(false); //видимо при запуске сцены надо снова вклчючать объект
            }
        }
    }
    // Сделать менеджер DOL с синглтон на network manager и xr origin, unload scene, asunc, создавать самой игрока и ntw mfnager  в ddol
}
