using FishNet;
using FishNet.Managing.Scened;
using FishNet.Transporting;
using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

public class WaitingRoomManager : MonoBehaviour
{
    [SerializeField] Camera instructorCamera;
    [SerializeField] Button lvlButton;

    private void Start()
    {
        var isServer = NetworkConfigProvider.Instance.Config.IsServer;

        if (isServer)
        {
            instructorCamera.gameObject.SetActive(true);
            InstanceFinder.ServerManager.StartConnection();
            lvlButton.gameObject.SetActive(true);
        }
        else
        {
            lvlButton.gameObject.SetActive(false);

            //если клиента тестить в юнити без сервера (всё ниже закомментить)
            //InstanceFinder.ServerManager.StartConnection();
            //InstanceFinder.ClientManager.StartConnection();

            //тут можно показать заставку, пока грузится

            var ip = PlayerPrefs.GetString("IpAddress");
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
        SceneLoadData sld = new SceneLoadData("DemoLevel");
        sld.ReplaceScenes = ReplaceOption.All;
        InstanceFinder.SceneManager.LoadGlobalScenes(sld);
    }
}
