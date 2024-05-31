using FishNet.Managing.Scened;
using FishNet.Object;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class DemoLevelManager : NetworkBehaviour
{
    [SerializeField] Camera instructorCamera;
    [SerializeField] Button loadWaitingRoom;
    [SerializeField] GameObject ui;

    void Start()
    {
        if (IsServerInitialized)
        {
            loadWaitingRoom.gameObject.SetActive(true);
        }
        else
        {
            instructorCamera.gameObject.SetActive(false);
            loadWaitingRoom.gameObject.SetActive(false);
        }
        
        var isServer = NetworkConfigProvider.Instance.Config.IsServer;
        if (!isServer)
        {
            ui.SetActive(false);
        }
    }
    
    public void LoadWaitingRoom()
    {
        SceneLoadData sld = new SceneLoadData("WaitingRoom");
        sld.ReplaceScenes = ReplaceOption.All;
        SceneManager.LoadGlobalScenes(sld);
    }
}
