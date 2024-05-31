using System;
using System.Collections;
//using Unity.Netcode;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Networking
{
    public class SceneTransitionHandler : MonoBehaviour
    {
        public void SwitchScene(string sceneName)
        {
            StartCoroutine(LoadSceneAsync(sceneName));
        }
        
        private IEnumerator LoadSceneAsync(string sceneName)
        {
            AsyncOperation asyncLoad = SceneManager.LoadSceneAsync(sceneName);
            
            while (!asyncLoad.isDone)
            {
                yield return null;
            }

            Debug.Log("Scene '" + sceneName + "' fully loaded.");
        }
    }
}

