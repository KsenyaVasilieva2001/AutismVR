using FishNet;
using FishNet.Managing;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ConnectionSettingsManager : MonoBehaviour
{
    [SerializeField] TMP_InputField ipAddress;

    public void Start()
    {
        var networkManager = FindObjectOfType<NetworkManager>();
        if (networkManager)
        {
            InstanceFinder.ClientManager.StopConnection();
            Destroy(networkManager.gameObject);
        }
    }

    public void SaveSettings()
    {
        var ip = ipAddress.text;

        PlayerPrefs.SetString("IpAddress", ip);
        SceneManager.LoadScene("WaitingRoom");
    }
}
