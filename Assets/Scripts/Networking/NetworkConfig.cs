using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "NewNetworkConfig", menuName = "Game/NetworkConfig")]

public class NetworkConfig : ScriptableObject
{
    [field: SerializeField]
    public bool IsServer { get; private set; }
}
