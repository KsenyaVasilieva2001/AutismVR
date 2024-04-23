using System;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.SceneManagement;

namespace LevelSystem
{
    public class Level : MonoBehaviour
    {
        [SerializeField] private string levelDescription;
        [SerializeField] private Sprite levelImage;
        [SerializeField] private string levelTitle;
        [SerializeField] private int levelIndex;

        public bool IsLocked { get; set; }
        public bool IsPassed { get; set; }
        
        public string LevelDescription => levelDescription;

        public Sprite LevelImage => levelImage;

        public string LevelTitle => levelTitle;

        public int LevelIndex => levelIndex;


        /*
        public int MyVariable
        {
            get { return myVariable; }
            set { myVariable = value; }
        }
        */


        public int GetLevelIndex()
        {
            return levelIndex;
        }
        public virtual void Init()
        {
            
        }

        public virtual bool Pass()
        {
            return false;
        }
        
        public void LoadWaitingRoomScene()
        {
            SceneManager.LoadScene("MenuScene"); 
        }
        
        //Load Scene
    }
}