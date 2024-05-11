using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using Unity.VisualScripting;
using Unity.XR.PXR;
using UnityEngine;
using UnityEngine.PlayerLoop;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using VR;

namespace LevelSystem
{
    public class LevelGesture : Level
    {
        [SerializeField] private GameObject helper;
        [SerializeField] private GameObject player;
        [SerializeField] private GameObject cubeDetector;

        public AudioSource audioSource;
        public AudioClip[] gestureAudios;
        
        public float activationDistance = 5f;
        private bool isAudioPlaying = false;
        
        private int currentGestureIndex;
        private bool isResponding;
        private bool poseIsInvoke;
        [SerializeField] private List<PXR_HandPose> poses;
        private bool isPassed = false;
        private string currentPoseName;
        
        public override void Init()
        {
            currentGestureIndex = 0;
            isResponding = false;
            player.GetComponentInChildren<MovementController>().enabled = false;
            Vector3 helperInitPos = new Vector3(50, 2, 22);
            Instantiate(helper, helperInitPos, Quaternion.identity);
            Instantiate(cubeDetector, helperInitPos + new Vector3(5,0,5), Quaternion.identity);
            GameObject.FindWithTag("MovementSystem").SetActive(false);
            foreach (var obj in GameObject.FindGameObjectsWithTag("Finger"))
            {
                obj.GetComponent<MovementController>().enabled = false;
               // obj.GetComponent<SphereCollider>().enabled = false;
            }
            
            // StartCoroutine(PlayAudio());
            ShowNextGesture();
            Debug.Log(poses[0].name);
        }

        /*
        private void PassMove()
        {
            float distance = Vector3.Distance(player.transform.position, helper.transform.position);

            //if (distance <= activationDistance && !isAudioPlaying)
            if (distance <= activationDistance)
            {
              //  StartCoroutine(PlayAudio());
                cubeDetector.GetComponent<Renderer>().sharedMaterial.color = Color.yellow;
                player.GetComponentInChildren<MovementController>().enabled = false;
                ShowNextGesture();
            }
            /*
            else if (distance > activationDistance && isAudioPlaying)
            {
                audioSource.Stop();
                isAudioPlaying = false;
            }
            
        }
        */


        IEnumerator PlayAudio()
        {
            audioSource.Play();
            isAudioPlaying = true;

            yield return new WaitForSeconds(audioSource.clip.length);
        }
        

        private void ShowNextGesture()
        {
            //npcAnimator.SetInteger("Gesture", currentGestureIndex);
            //audioSource.clip = gestureAudios[currentGestureIndex];
            //audioSource.Play();
           // throw new System.NotImplementedException();
        }

        public override bool Pass()
        {
            return isPassed;
        }
        
        public void PoseCheck()
        {
            
            /*
            if (!isResponding)
            {
                isResponding = true;
            }
            */
            StartCoroutine(RespondToGesture());
        }
        
        private IEnumerator RespondToGesture()
        {
            yield return new WaitForSeconds(1f);

            bool poseIsPassed = false;
            if (poses[currentGestureIndex].name.Equals(currentPoseName))
            {
                cubeDetector.GetComponent<Renderer>().sharedMaterial.color = Color.green;
                helper.GetComponent<Renderer>().sharedMaterial.color = Color.green;
                currentGestureIndex++;
                poseIsPassed = true;
                if (currentGestureIndex < poses.Count)
                {
                    ShowNextGesture();
                }
                else
                {
                    isPassed = true;
                }
            }
            //poseIsInvoke = false;
            if (!poseIsPassed)
            {
              //  cubeDetector.GetComponent<Renderer>().sharedMaterial.color = Color.red;
            }
            //poseIsInvoke = false;

            /*
            responseTime = Time.time - startTime;
            attemptCount++;
            isResponding = false;
            */
        }

        public void HandleHandStartInvoked()
        {
            poseIsInvoke = true;
        }
     
        public void SetCurrentPoseName(string poseName)
        {
            currentPoseName = poseName;
        }
    }
    
}