using System;
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
        public int levelId = 1;
        [SerializeField] private Terrain location;
        
        private Vector3 spawnCenter;
        private float radiusX;
        private float radiusZ;
        
        [SerializeField] private List<GameObject> items;
        private List<Vector3> itemsPosition; //сделать несколько наборов
        [SerializeField] private GameObject box;

        private void Start()
        {
            if (levelId == 1)
            {
                InitLevel();   
            }
        }

        private void Update()
        {
            PassLevel1();
        }

        private void InitLevel()
        {
            InitSpawnParams();
            SpawnItems(items);
        }

        private void SpawnItems(List<GameObject> items)
        {
            foreach (var item in items)
            {
                bool isSpawn = false;
                while (!isSpawn)
                {
                    var pos = GetRandomSpawnPoint() + new Vector3(0, item.transform.localScale.y,0);
                    Collider[] hitColliders = Physics.OverlapBox(pos, item.transform.localScale, Quaternion.identity);
                    if (hitColliders == null)
                    {
                        Instantiate(item, pos, Quaternion.identity);
                        itemsPosition.Add(pos);
                        isSpawn = true;
                    }
                    else
                    {
                        if(hitColliders.All(obj => obj.GetComponent<Zone>()))
                        {
                            Instantiate(item, pos, Quaternion.identity);
                            itemsPosition.Add(pos);
                            isSpawn = true;
                        }
                    }
                }
            }
        }

        private Vector3 GetRandomSpawnPoint()
        {
            Vector3 spawnPos = new Vector3(Random.Range((spawnCenter.x - radiusX), (spawnCenter.x + radiusX)),
                spawnCenter.y,
                Random.Range((spawnCenter.z - radiusZ), (spawnCenter.z + radiusZ))
            );
            Debug.Log(spawnPos);
            return spawnPos;
        }

        private void InitSpawnParams()
        {
            var sizeX = location.terrainData.size.x;
            var sizeZ = location.terrainData.size.z;
            spawnCenter = new Vector3(sizeX / 2, 0, sizeZ / 2);
            radiusX = .75f * sizeX / 2;
            radiusZ = .75f * sizeZ / 2;
        }

        public List<Vector3> GetItemPositions()
        {
            return itemsPosition;
        }

        void PassLevel1()
        {
            if (_timer.timerStart == 0)
            {
                SceneManager.LoadScene("WaitingRoomScene");
                _reportDataCalculator.Save();
            }
        }

        void PassLevel2()
        {
            
        }
        //менять переменную level 1 level 2, addcomponent  
    }
}