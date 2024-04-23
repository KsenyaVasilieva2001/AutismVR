using System;
using System.Collections.Generic;
using System.Linq;
using LevelSystem;
using UnityEngine;
using VR;

namespace HelperSystem
{
    public class HelperGrabController : MonoBehaviour
    {
        [SerializeField] private List<Pickable> itemsToPick;
        [SerializeField] private LevelManager levelManager;
        private Pickable _pickedItem;
        private Pickable pickedInstance;
        [SerializeField] private Transform slot; //чтобы держать объекты


        private void Awake()
        {
            
        }

        public void SetItemsToPick(List<Pickable> items)
        {
            itemsToPick = items;
        }
        
        public List<Pickable> GetItemsToPick()
        {
            return itemsToPick;
        }

        private void Start()
        {
            levelManager = FindObjectOfType<LevelManager>();
            var levelFindObjects = levelManager.GetLevels().Where(
                level => level.name.Equals("LevelFindObjects")).ToList()[0];
            if (levelManager.GetLevelId() == levelFindObjects.GetLevelIndex())
            {
                pickedInstance = Instantiate(itemsToPick[0], slot.position, Quaternion.identity);
               // Pick(itemsToPick[0]);
               itemsToPick[0] = pickedInstance;
               Pick(pickedInstance);
            }
          
        }
        
        public void Pick(Pickable item)
        {
            _pickedItem = item;
            item.Rb.isKinematic = true;
            item.transform.SetParent(slot, worldPositionStays: true);
            item.BeingPick();
        }


        public void Drop(Pickable item)
        {
            _pickedItem = null;
            item.transform.SetParent(null);
            item.Rb.isKinematic = false;
           // item.GetComponent<Collider>().isTrigger = true;
            //item.Rb.AddForce(item.transform.forward * 2, ForceMode.VelocityChange);
        }

        public List<Pickable> GetItems()
        {
            return itemsToPick;
        }
    }
}