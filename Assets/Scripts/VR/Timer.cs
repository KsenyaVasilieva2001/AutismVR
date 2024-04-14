﻿using System;
using TMPro;
using UnityEngine;

namespace VR
{
    public class Timer : MonoBehaviour
    {
        //public TextMeshPro timerText;
        public float total = 300f;
        public float timerStart;
        public float timerMoveStart;

        private void Start()
        {
            timerStart = total;
            //  timerText.text = timerStart.ToString("F2");
        }

        private void Update()
        {
            if (timerStart < 0.001)
            {
                timerStart = 0f;
            }
            else
            {
                timerStart -= Time.deltaTime;
            }
            //  timerText.text = Mathf.Round(timerStart).ToString("F2");
        }

        public void PlayTimer()
        {
            timerMoveStart += Time.deltaTime;
        }
    }
}