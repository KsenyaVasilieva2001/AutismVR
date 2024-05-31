using FishNet;
using FishNet.Managing.Scened;
using FishNet.Transporting;
using System;
using System.Collections;
using System.Collections.Generic;
using LevelSystem;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

public class WaitingRoomManager : MonoBehaviour
{
    [SerializeField] Camera instructorCamera;
    [SerializeField] Button lvlButton;
    [SerializeField] private LevelManager levelManager;
    [SerializeField] private GameObject ui;
    [SerializeField] private GameObject buttons;

    private void Start()
    {
        var isServer = NetworkConfigProvider.Instance.Config.IsServer;

        if (isServer)
        {
            InstanceFinder.ServerManager.StartConnection();
            instructorCamera = Camera.main;
            ui.SetActive(true);
        }
        else
        {
            ui.SetActive(false);
           // lvlButton.gameObject.SetActive(false);

            //если клиента тестить в юнити без сервера (всё ниже закомментить)
            //InstanceFinder.ServerManager.StartConnection();
            //InstanceFinder.ClientManager.StartConnection();

            //тут можно показать заставку, пока грузится

            //var ip = PlayerPrefs.GetString("IpAddress");
            //var ip = "192.168.0.129";
            var ip = "127.0.0.1";
            if (string.IsNullOrEmpty(ip))
            {
                LoadSettingsScene();
                return;
            }

            InstanceFinder.ClientManager.StartConnection(ip);
        }
    }

    private void OnEnable()
    {
        Debug.Log("In WR:" + NetworkConfigProvider.Instance!=null);
        if (!NetworkConfigProvider.Instance.Config.IsServer)
        {
            var client = InstanceFinder.ClientManager;
            client.OnClientConnectionState += ClientManager_OnClientConnectionState;
            client.OnClientTimeOut += Client_OnClientTimeOut;
        }
    }

    private void OnDisable()
    {
        if (!NetworkConfigProvider.Instance.Config.IsServer)
        {
            var client = InstanceFinder.ClientManager;
            if (client)
            {
                client.OnClientConnectionState -= ClientManager_OnClientConnectionState;
                client.OnClientTimeOut -= Client_OnClientTimeOut;
            }
        }
    }

    private void ClientManager_OnClientConnectionState(ClientConnectionStateArgs args)
    {
        if (args.ConnectionState == LocalConnectionState.Started)
        {
            //тут можно убрать заставку
            buttons.SetActive(true);
            Debug.Log("Connection success");
        }

        if (args.ConnectionState == LocalConnectionState.Stopping || args.ConnectionState == LocalConnectionState.Stopped)
        {
            LoadSettingsScene();
            Debug.Log("Connection stopped");
        }
    }

    private void Client_OnClientTimeOut()
    {
        LoadSettingsScene();
        Debug.Log("Connection timeout");
    }

    private void LoadSettingsScene()
        => UnityEngine.SceneManagement.SceneManager.LoadScene("ConnectionSettings");


    public void LoadLevel()
    {
        SceneLoadData sld = new SceneLoadData("MainScene");
        sld.ReplaceScenes = ReplaceOption.All;
        InstanceFinder.SceneManager.LoadGlobalScenes(sld);
    }
    
    
}
