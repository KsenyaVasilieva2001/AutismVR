//using Unity.Netcode;
using UnityEngine;

namespace Networking
{
    public class NetworkPlayerController : MonoBehaviour
    {
        public static NetworkPlayerController Instance = null;
        [SerializeField] private Transform root;
        [SerializeField] private Transform leftHand;
        [SerializeField] private Transform rightHand;
        public Renderer[] meshToDisable;
        
        void Start () {
            //if (Instance == null) { 
            //    Instance = this; 
            //} else if(Instance == this){ 
            //    Destroy(gameObject); 
            //}
            //DontDestroyOnLoad(gameObject);
            //Init();
        }
       

        private void Init()
        {
            //if (IsOwner)
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
