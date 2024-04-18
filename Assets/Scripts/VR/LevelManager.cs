using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Networking;
using UnityEngine;
using UnityEngine.PlayerLoop;
using UnityEngine.SceneManagement;
using Random = UnityEngine.Random;

namespace VR
{
    //вынести логику спавнинга в другой класс
    public class LevelManager : MonoBehaviour
    {
        [SerializeField] private Timer _timer;
        [SerializeField] private ReportDataCalculator _reportDataCalculator;
        private int LevelId;
        [SerializeField] private Terrain location;
        
        private Vector3 spawnCenter;
        private float radiusX;
        private float radiusZ;
        
        [SerializeField] private List<GameObject> items;
        [SerializeField] private CameraController camera;
        [SerializeField] private GameObject helper;
        [SerializeField] private HelperMoveController helperMoveController;
        [SerializeField] private HelperGrabController _helperGrabController;
        private List<Vector3> itemsPosition;

        private int pickUpCount;
        //сделать несколько наборов

        public int GetLevelId()
        {
            return LevelId;
        }

        private void Start()
        {
            Debug.Log(LevelId);
        }

        private void Awake()
        {
            LevelId = 0;
            switch (LevelId)
            {
                case 0:
                    break;
                case 1:
                    InitLevel();
                    break;
            }
        }

        private void Update()
        {
            switch (LevelId)
            {
                case 0:
                    PassLevel0();
                    break;
                case 1:
                    PassLevel1();
                    break;
            }
        }

        private void InitLevel()
        {
          //  Instantiate(helper, new Vector3(50, 1.92f, 15), Quaternion.identity);
            InitSpawnParams();
            SpawnItems(items);
        }

        private void SpawnItems(List<GameObject> items)
        {
            itemsPosition = new List<Vector3>();
            foreach (var item in items)
            {
                bool isSpawn = false;
                while (!isSpawn)
                {
                    var localScale = item.transform.localScale; 
                    var pos = GetRandomSpawnPoint() + new Vector3(0, localScale.y,0);
                    //var pos = GetRandomSpawnPoint();
                    var colliders = Physics.OverlapBox(pos, localScale / 2, Quaternion.identity).ToList();
                    colliders.Remove(GetComponent<TerrainCollider>());
                    if (colliders.All(obj => obj.GetComponent<Zone>()))
                    {
                        Instantiate(item, pos, Quaternion.identity);
                        itemsPosition.Add(new Vector3(pos.x, 0, pos.z));
                        isSpawn = true;
                    }
                }
            }
        }
        


        private Vector3 GetRandomSpawnPoint()
        {
            Vector3 spawnPos = new Vector3(Random.Range((spawnCenter.x - radiusX), (spawnCenter.x + radiusX)),
                0,
                Random.Range((spawnCenter.z - radiusZ), (spawnCenter.z + radiusZ))
            );
            return spawnPos;
        }

        private void InitSpawnParams()
        {
            var terrainData = location.terrainData;
            var sizeX = terrainData.size.x;
            var sizeZ = terrainData.size.z;
            spawnCenter = new Vector3(sizeX / 2, 0, sizeZ / 2);
            radiusX = .75f * sizeX / 2;
            radiusZ = .75f * sizeZ / 2;
        }

        public List<Vector3> GetItemPositions()
        {
            return itemsPosition;
        }

        void PassLevel0()
        {
            if (_timer.timerStart == 0)
            {
                _reportDataCalculator.SaveToTextFile();
                camera.TakeScreenshot();
                Debug.Log("Pass!");
                SceneManager.LoadScene("MainScene");
              //  LevelId++;
            }
        }

        void PassLevel1()
        {
         //   Debug.Log(items.Count(p => p.GetComponent<Pickable>().IsPicked()));
         
         /*
            if (items.All(p => p.GetComponent<Pickable>().IsPicked()))
            {
                //проигрывание анимации и чего то там
                //задержка
                SceneManager.LoadScene("TestingScene");
         //       LevelId++;
            }
            */
         
         if (_timer.timerStart == 0)
         {
             _reportDataCalculator.SaveToTextFile();
             camera.TakeScreenshot();
             Debug.Log("Pass!");
             SceneManager.LoadScene("TestingScene");
             //  LevelId++;
         }
        }
    }
}