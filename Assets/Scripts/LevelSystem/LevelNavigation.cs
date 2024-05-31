using System;
using DataSystem;
using UnityEngine;
using VR;

namespace LevelSystem
{
    public class LevelNavigation : Level
    {
        [SerializeField] private Timer timer;
        [SerializeField] private ReportDataCalculator reportDataCalculator;
        [SerializeField] private CameraController cameraTop;
        private bool _isPassed;
        
        public override void Init()
        {
            Debug.Log("Init!");
            cameraTop = FindObjectOfType<CameraController>();
        }

        public override bool Pass()
        {
            if (timer.timerStart == 0)
            {
                reportDataCalculator.SaveToTextFile();
                cameraTop.TakeScreenshot();
                _isPassed = true;
            }
            return _isPassed;
        }
    }
}