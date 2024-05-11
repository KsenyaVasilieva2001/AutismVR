using System.Collections;
using System.Collections.Generic;
using System.Linq;
using LevelSystem;
using UnityEngine;
using UnityEngine.SceneManagement;
using VR;

public class PlayerManager : MonoBehaviour
{
    [SerializeField] private GameObject poses;
    [SerializeField] private GameObject movementSystem;    
    void Awake()
    {
        
    }

    void Update()
    {
        if (SceneManager.GetActiveScene().name != "MenuScene")
        {
            poses.SetActive(false);
            movementSystem.SetActive(false);
            FindObjectsOfType<MovementController>().All(a => a.enabled = false);
            FindObjectsOfType<PoseDetection>().All(a => a.enabled = false);
        }
    }
}
