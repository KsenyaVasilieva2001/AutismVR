using System;
using System.Collections.Generic;
using System.Linq;
using HelperSystem;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using VR;
using Random = UnityEngine.Random;

namespace LevelSystem
{
    public class LevelFindObjects : Level
    {
        [SerializeField] private Terrain location;
        [SerializeField] private GameObject helper;
        private HelperMoveController helperMove;
        [SerializeField] private Pickable box;
        private Vector3 _spawnCenter;
        private float _radiusX;
        private float _radiusZ;
        
        public List<ItemSet> itemSets;
        private List<Pickable> _items;
        private List<Pickable> _itemsInstances;
        private Dictionary<Pickable, Vector3> _itemsPositionDict;
        private int _pickUpCount;

        private TextMeshProUGUI text;
        public void OnItemSetSelected(int index)
        {
            //здесь выбирать по кнопке
            _items = itemSets[index].items;
        }
        

        public override void Init()
        {
            if (SceneManager.GetActiveScene().name != "MenuScene 2")
            {
                location = FindObjectOfType<Terrain>();
            }

            FindObjectOfType<GridSystem>().enabled = false;
            FindObjectOfType<PoseDetection>().enabled = false;
            
            OnItemSetSelected(0);
          
            helper.GetComponent<HelperMoveController>().enabled = true;
            helper.GetComponent<HelperGrabController>().enabled = true;
            helper.GetComponent<HelperMoveController>().HelperPath = new Dictionary<Pickable, Vector3>();
            List<Pickable> items = new List<Pickable>();
            //items.Add(box);
            //helper.GetComponent<HelperGrabController>().SetItemsToPick(items);
            InitSpawnParams();
            //Vector3 helperInitPos = new Vector3(45, 2, 20);
           Vector3 helperInitPos = new Vector3(45, 2, 20);
            SpawnItems(_items);
            Instantiate(helper, helperInitPos, Quaternion.identity);
        }
        
        public override bool Pass()
        {
            Debug.Log("In pass:" + _itemsInstances.Count(p => p.GetComponent<Pickable>().GetIsPicked()));
            return _itemsInstances.All(p => p.GetComponent<Pickable>().GetIsPicked());
        }
        
        private void SpawnItems(List<Pickable> itemList)
        {
            _itemsPositionDict = new Dictionary<Pickable, Vector3>();
            _itemsInstances = new List<Pickable>();
            foreach (var item in itemList)
            {
                bool isSpawn = false;
                while (!isSpawn)
                {
                    var localScale = item.transform.localScale; 
                    var pos = GetRandomSpawnPoint() + new Vector3(0, localScale.y,0);
                    var colliders = Physics.OverlapBox(pos, localScale / 2, Quaternion.identity).ToList();
                    colliders.Remove(GetComponent<TerrainCollider>());
                    if (colliders.All(obj => obj.GetComponent<Zone>()))
                    {
                        var item_instance = Instantiate(item, pos, Quaternion.identity);
                        
                        _itemsPositionDict[item_instance] = new Vector3(pos.x, 0, pos.z);
                        _itemsInstances.Add(item_instance);
                        isSpawn = true;
                    }
                }
            }
        }
        
        private Vector3 GetRandomSpawnPoint()
        {
            Vector3 spawnPos = new Vector3(Random.Range((_spawnCenter.x - _radiusX), (_spawnCenter.x + _radiusX)),
                0,
                Random.Range((_spawnCenter.z - _radiusZ), (_spawnCenter.z + _radiusZ))
            );
            return spawnPos;
        }

        private void InitSpawnParams()
        {
            var terrainData = location.terrainData;
            var sizeX = terrainData.size.x;
            var sizeZ = terrainData.size.z;
            _spawnCenter = new Vector3(sizeX / 2, 0, sizeZ / 2);
            _radiusX = .75f * sizeX / 2;
            _radiusZ = .75f * sizeZ / 2;
        }

        public Dictionary<Pickable, Vector3> GetItemPositions()
        {
            return _itemsPositionDict;
        }

    }
}
