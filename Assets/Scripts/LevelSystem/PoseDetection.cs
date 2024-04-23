using System;
using System.Collections.Generic;
using Unity.XR.PXR;
using UnityEngine;

namespace LevelSystem
{
    public class PoseDetection : MonoBehaviour
    {
        [SerializeField] private LevelGesture LevelGesture;
        private string poseName;

        private void Awake()
        {
            poseName = gameObject.name;
        }

        private void OnTriggerEnter(Collider other)
        {
            if (other.gameObject.CompareTag("Finger"))
            {
                PoseInvoked("OkayPoseGenerator");
                LevelGesture.PoseCheck();
            }
        }
        
        public void PoseInvoked()
        {
            LevelGesture.SetCurrentPoseName(poseName);
        }
        
        public void PoseInvoked(string customName)
        {
            LevelGesture.SetCurrentPoseName(customName);
        }
        
    }
}