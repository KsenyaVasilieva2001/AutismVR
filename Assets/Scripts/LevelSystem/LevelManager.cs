using System.Collections;
using System.Collections.Generic;
using System.Linq;
using DataSystem;
using FishNet;
using FishNet.Managing.Scened;
using Networking;
using UI;
using UnityEngine;
using SceneManager = UnityEngine.SceneManagement.SceneManager;

namespace LevelSystem
{
    //вынести логику спавнинга в другой класс
    public class LevelManager : MonoBehaviour
    {
        [SerializeField] private List<Level> levels;
        [SerializeField] private UIManager uiManager;
        [SerializeField] private FileManager fileManager;
        [SerializeField] private DemoLevelManager demoLevelManager;
        private int _levelId;
        private Level _currentLevel;
        private int _passCount;
        private bool _sceneIsLoaded;
        
        
        
        
        private void Awake()
        {
            //Этот блок для проверки - не удалять!
            
            /*
            _levelId = 0;
            _currentLevel = levels[_levelId];
            _currentLevel.Init();
            */
            
            //Этот блок для проверки - не удалять!
            
           
            for (int i = 1; i < levels.Count; i++)
            {
                levels[i].IsLocked = true;
            }
            
            
            ChangeLevel(0);
        }

        private void Update()
        {
            //тут если что то не заработает вернуть на !=
            if (SceneManager.GetActiveScene().name == "MenuScene" && _sceneIsLoaded)
            {
                if (_currentLevel.Pass())
                {
                    Debug.Log("Why i am here");
                    if (_currentLevel.LevelIndex == 0)
                    {
                         levels.ForEach(level => level.IsLocked = false);
                    }

                    levels[_levelId].IsPassed = true;

                    //_currentLevel.LoadWaitingRoomScene();
                    demoLevelManager.LoadWaitingRoom();
                    
                }

                
            }

            if (AllIsPassed())
            {
                fileManager.SaveReportData(ReportDataCalculator.Instance.GetReportData());
            }
        }

        public bool AllIsPassed()
        {
            return levels.Count(level => level.IsPassed) == levels.Count;
        }

        public int GetLevelId()
        {
            return _levelId;
        }
        
        public Level GetCurrentLevel()
        {
            return _currentLevel;
        }

        
        public List<Level> GetLevels()
        {
            return levels;
        }
        public void LoadLevel()
        {
          //  StartCoroutine(LoadSceneAsync("MainScene"));
          //  SceneManager.LoadScene("MainScene"); //А ЭТО ЗАЧЕМ
          
          uiManager.ui.SetActive(false);
          LoadLevelScene();
          _currentLevel = levels[_levelId];
         // _currentLevel.Init();
          _sceneIsLoaded = true;
        }
        
        private IEnumerator LoadSceneAsync(string sceneName)
        {
            AsyncOperation asyncLoad = SceneManager.LoadSceneAsync(sceneName);

            // Ждем, пока сцена не загрузится
            while (!asyncLoad.isDone)
            {
                yield return null;
            }
            _currentLevel = levels[_levelId];
            _currentLevel.Init();
            _sceneIsLoaded = true;
            Debug.Log("Scene '" + sceneName + "' fully loaded.");
            Debug.Log(_currentLevel);
        }
       
        
        public void ChangeLevel(int change)
        {
            _levelId += change;
            if (_levelId < 0) _levelId = levels.Count - 1;
            else if (_levelId > levels.Count - 1) _levelId = 0;
            
            if(uiManager != null) uiManager.DisplayLevel(levels[_levelId]);
        }
        

        public void LoadLevelScene()
        {
            SceneLoadData sld = new SceneLoadData("MainScene");
            sld.ReplaceScenes = ReplaceOption.All;
            InstanceFinder.SceneManager.LoadGlobalScenes(sld);
        }
    }
}