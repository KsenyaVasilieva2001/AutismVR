using System;
using TMPro;
using Unity.Netcode;
using Unity.Netcode.Transports.UTP;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

namespace Networking
{
    public class NetworkManagerUI : MonoBehaviour
    {
       // [SerializeField] private TMP_Text message;
        private UnityTransport _unityTransport;
        [SerializeField] private string lobbyServerScene = "LevelMenuScene";
        [SerializeField] private string lobbyClientScene = "WaitingRoomScene";

        public void Start()
        { 
            _unityTransport = NetworkManager.Singleton.GetComponent<UnityTransport>();
        }

        public void StartServer()
        {
            NetworkManager.Singleton.StartServer();
            StartGame();
        }

        public void StartClient()
        {
            NetworkManager.Singleton.StartClient();
            JoinGame();
            // SceneManager.LoadScene("WaitingRoomVRScene", LoadSceneMode.Single);
        }

        public void StartGame()
        {
            /*
            if (NetworkManager.Singleton.StartServer())
            {
                SceneTransitionHandler.Singleton.RegisterCallback();
                SceneTransitionHandler.Singleton.SwitchScene(lobbyServerScene);
            }
            */
        }

        public void JoinGame()
        {
            /*
            if (NetworkManager.Singleton.StartClient())
            {
                Debug.Log("Client is started");
                SceneTransitionHandler.Singleton.RegisterCallback();
                SceneTransitionHandler.Singleton.SwitchScene(lobbyClientScene);
            }
            */
        }

        public void LeaveRoom()
        {
            //https://forum.unity.com/threads/how-to-switch-scene-on-clients-machine-when-host-leaves.1289144/
        }
        
        /*
        public void ShowServerMessage()
        {
            message.ShowMessage("Сервер успешно запущен");
        }
        */

    }
}
