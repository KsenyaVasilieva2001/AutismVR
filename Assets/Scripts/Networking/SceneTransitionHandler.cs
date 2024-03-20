using System;
using Unity.Netcode;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Networking
{
    public class SceneTransitionHandler : MonoBehaviour
    {
        public static SceneTransitionHandler Singleton { get; internal set; }
        [SerializeField] private string defaultServerScene = "StartServerScene";
        [SerializeField] private string defaultClientScene = "StartClientScene";
        private SceneStates _sceneState;
        private int _numberOfClientLoaded;

        [HideInInspector]
        public delegate void SceneStateChangedDelegateHandler(SceneStates newState);
        [HideInInspector]
        public event SceneStateChangedDelegateHandler OnSceneStateChanged;
        
        [HideInInspector]
        public delegate void ClientLoadedSceneDelegateHandler(ulong clientId);
        [HideInInspector]
        public event ClientLoadedSceneDelegateHandler OnClientLoadedScene;
        public enum SceneStates
        {
            Init, //начальная сцена
            Lobby, //зона ожидания
            Game //сцена самой игры
        }
        private void Awake()
        {
            if (Singleton != this && Singleton != null)
            {
                Destroy(Singleton.gameObject);
            }

            SetSceneState(SceneStates.Init);
            Singleton = this;
            DontDestroyOnLoad(this);
        }

        void Start()
        {
            if (_sceneState == SceneStates.Init)
            {
                LoadStartMenu();
            }
        }

        public void RegisterCallback()
        {
            NetworkManager.Singleton.SceneManager.OnLoadComplete += OnLoadComplete;
        }

        private void OnLoadComplete(ulong clientId, string sceneName, LoadSceneMode loadSceneMode)
        {
            _numberOfClientLoaded += 1;
            OnClientLoadedScene?.Invoke(clientId);
        }

        private void SetSceneState(SceneStates sceneState)
        {
            _sceneState = sceneState;
            if (OnSceneStateChanged != null)
            {
                OnSceneStateChanged.Invoke(_sceneState);
            }
        }

        public SceneStates GetCurrentSceneState()
        {
            return _sceneState;
        }

        public bool ClientIsLoaded()
        {
            return _numberOfClientLoaded == 1;
        }

        /*
        private void Update()
        {
            if (NetworkManager.Singleton.NetworkConfig.ConnectionApproval)
            {
                //LoadScene (
            }
        }
        */

        public void SwitchScene(string sceneName)
        {
            Debug.Log("Switch Scene is called");
            if (NetworkManager.Singleton.IsListening)
            {
                _numberOfClientLoaded = 0;
                NetworkManager.Singleton.SceneManager.LoadScene(sceneName, LoadSceneMode.Single);
            }
            else
            {
                SceneManager.LoadSceneAsync(sceneName);
            }
        }

        private void LoadStartMenu()
        {
            if (NetworkManager.Singleton != null && NetworkManager.Singleton.SceneManager != null)
            {
                NetworkManager.Singleton.SceneManager.OnLoadComplete -= OnLoadComplete;
            }

            OnClientLoadedScene = null;
            SetSceneState(SceneStates.Init);
            if (NetworkManager.Singleton.IsClient)
            {
                SceneManager.LoadScene(defaultClientScene);
            }
            else if (NetworkManager.Singleton.IsServer)
            {
                SceneManager.LoadScene(defaultServerScene);
            }
            
        }
    }
}

