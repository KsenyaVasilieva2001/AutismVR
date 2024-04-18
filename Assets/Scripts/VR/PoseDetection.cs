using System.Collections;
using System.Collections.Generic;
using Unity.XR.PXR;
using UnityEngine;

public class GestureController : MonoBehaviour
{
    public Animator npcAnimator;
    public Animator playerAnimator;
    public AudioClip[] gestureAudios;
    public AudioSource audioSource;
    public int[] gestureSequence;
    public float responseTime;
    public int attemptCount;
    private int currentGestureIndex;
    private bool isResponding;
    //Сравнивать конфиги - если правильно, то зеленый кубик, если нет - то красный
    private List<PXR_HandPoseConfig> _configs;


    private void Start()
    {
        currentGestureIndex = 0;
        isResponding = false;
        ShowNextGesture();
    }

    private void ShowNextGesture()
    {
        int gestureIndex = gestureSequence[currentGestureIndex];
        npcAnimator.SetInteger("Gesture", gestureIndex);
        audioSource.clip = gestureAudios[gestureIndex];
        audioSource.Play();
    }

    public void OnGestureDetected(int gestureIndex)
    {
        if (!isResponding)
        {
            isResponding = true;
            StartCoroutine(RespondToGesture(gestureIndex));
        }
    }

    private IEnumerator RespondToGesture(int gestureIndex)
    {
        float startTime = Time.time;
        playerAnimator.SetInteger("Gesture", gestureIndex);

        yield return new WaitForSeconds(1f);

        if (gestureIndex == gestureSequence[currentGestureIndex])
        {
            Debug.Log("Correct gesture!");
            currentGestureIndex++;
            if (currentGestureIndex < gestureSequence.Length)
            {
                ShowNextGesture();
            }
            else
            {
                Debug.Log("All gestures completed!");
                // Load menu scene here
            }
        }
        else
        {
            Debug.Log("Incorrect gesture!");
            currentGestureIndex--;
            // Play incorrect audio here
        }

        responseTime = Time.time - startTime;
        attemptCount++;
        isResponding = false;
    }
}