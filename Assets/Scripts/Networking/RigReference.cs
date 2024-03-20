using UnityEngine;

namespace Networking
{
   public class RigReference : MonoBehaviour
   {
      public static RigReference Singleton;
      public Transform root;
      public Transform leftHand;
      public Transform rightHand;

      private void Awake()
      {
         if (Singleton != this && Singleton != null)
         {
            Destroy(Singleton.gameObject);
         }
         Singleton = this;
         DontDestroyOnLoad(this);
      }
   
   }
}
