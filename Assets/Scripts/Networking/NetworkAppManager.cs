using System;
using Unity.Netcode;
using Unity.Networking.Transport;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Networking;


namespace Networking
{
    public class NetworkAppManager : NetworkManager
    {
        void Update()
        {
            if (!Singleton.NetworkConfig.PlayerPrefab)
            {
                SpawnPlayer();
            }
        }

        public void OnClientConnect()
        {
            //запуск трансляции 
        }
        
        /*
        public void OnClientSceneChanged(NetworkConnection conn)
        {
            SceneManager.LoadScene("DesktopClientOnline", LoadSceneMode.Additive);
           // ClientScene.Ready(conn);
            //ClientScene.AddPlayer(conn, 0);
        }

        public void OnServerSceneChanged(string sceneName)
        {
            SceneManager.LoadScene("ServerOnline", LoadSceneMode.Additive);
        }
        */

        private void SpawnPlayer()
        {
            var instance = Instantiate(NetworkManager.Singleton.NetworkConfig.PlayerPrefab); 
            var instanceNetworkObject = instance.GetComponent<NetworkObject>();
            instanceNetworkObject.Spawn();
        }
    }
}