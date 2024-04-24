using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NetworkConfigProvider : MonoBehaviour
{
    public static NetworkConfigProvider Instance { get; private set; }

    [SerializeField]
    private NetworkConfig networkConfig;

    public NetworkConfig Config => networkConfig;

    void Awake()
    {
        if (Instance != null)
            Destroy(this);
        else
            Instance = this;
    }

}
