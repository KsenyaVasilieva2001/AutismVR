using System;
using System.Collections.Generic;
using System.Linq;
using HelperSystem;
using TMPro;
using UnityEngine;
using VR;
using Random = UnityEngine.Random;

namespace LevelSystem
{
    public class LevelFindObjects : Level
    {
        [SerializeField] private Terrain location;
        [SerializeField] private GameObject helper;
        [SerializeField] private Pickable box;
        private Vector3 _spawnCenter;
        private float _radiusX;
        private float _radiusZ;
        
        public List<ItemSet> itemSets;
        private List<GameObject> _items;
        private List<Vector3> _itemsPosition;
        private int _pickUpCount;

        private TextMeshProUGUI text;
        public void OnItemSetSelected(int index)
        {
            //здесь выбирать по кнопке
            
            _items = itemSets[index].items;
        }
        

        public override void Init()
        {
            GameObject.FindObjectOfType<PoseDetection>().enabled = false;
            OnItemSetSelected(0);
           //text = GameObject.FindWithTag("TextPro").GetComponent<TextMeshProUGUI>();
            helper.GetComponent<HelperMoveController>().enabled = true;
            helper.GetComponent<HelperGrabController>().enabled = true;
            List<Pickable> items = new List<Pickable>();
            items.Add(box);
            helper.GetComponent<HelperGrabController>().SetItemsToPick(items);
            InitSpawnParams();
            Vector3 helperInitPos = new Vector3(45, 2, 20);
            SpawnItems(_items);
            helper.GetComponent<HelperMoveController>()._minPath = GetItemPositions();
            Instantiate(helper, helperInitPos, Quaternion.identity);
        }
        
        public override bool Pass()
        {
            Debug.Log(_items[0].GetComponent<Pickable>().IsPicked);
            Debug.Log(_items.Count(p => p.GetComponent<Pickable>().IsPicked));
            //text.text = _items.Count(p => p.GetComponent<Pickable>().IsPicked()).ToString();
            return _items.All(p => p.GetComponent<Pickable>().IsPicked);
        }
        
        private void SpawnItems(List<GameObject> itemList)
        {
            _itemsPosition = new List<Vector3>();
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
                        Instantiate(item, pos, Quaternion.identity);
                        _itemsPosition.Add(new Vector3(pos.x, 0, pos.z));
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

        public List<Vector3> GetItemPositions()
        {
            return _itemsPosition;
        }

    }
}
