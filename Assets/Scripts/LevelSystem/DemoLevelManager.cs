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

    void Start()
    {
        if (IsServerInitialized)
        {
            instructorCamera.gameObject.SetActive(true);
            loadWaitingRoom.gameObject.SetActive(true);
        }
        else
        {
            instructorCamera.gameObject.SetActive(false);
            loadWaitingRoom.gameObject.SetActive(false);
        }
    }
    
    public void LoadWaitingRoom()
    {
        SceneLoadData sld = new SceneLoadData("WaitingRoom");
        sld.ReplaceScenes = ReplaceOption.All;
        SceneManager.LoadGlobalScenes(sld);
    }
}
