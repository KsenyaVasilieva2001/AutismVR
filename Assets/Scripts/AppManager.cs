using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AppManager : MonoBehaviour
{
    #if UNITY_EDITOR
    void Start()
    {
        Application.targetFrameRate = 72;
    }
    
    #endif

}
