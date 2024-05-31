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

               // GetComponent<RigReference>().gameObject.SetActive(false); 
            }
        }
    }
  
}
