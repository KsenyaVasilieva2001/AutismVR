using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NetworkConfigProvider : MonoBehaviour
{
   // public static NetworkConfigProvider Instance { get; private set; }

   public static NetworkConfigProvider Instance
   {
       get
       {
           if (_instance == null)
           {
               _instance = FindObjectOfType<NetworkConfigProvider>();
           }
           return _instance;
       }
   }
    private static NetworkConfigProvider _instance;
    [SerializeField]
    private NetworkConfig networkConfig;

    public NetworkConfig Config => networkConfig;

}