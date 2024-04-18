using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using Unity.VisualScripting;
using UnityEditor;
using UnityEngine;
using UnityEngine.AI;
using Object = UnityEngine.Object;

namespace VR
{
    public class HelperGrabController : MonoBehaviour
    {
        [SerializeField] public List<Pickable> itemsToPick;
        private Pickable pickedItem;
        [SerializeField] private Transform slot; //чтобы держать объекты
        private LevelManager _levelManager;
        private void Start()
        {
            //СДЕЛАТЬ СКРИПТАБЛ OBJECT
            
            /*
            itemsToPick = AssetDatabase.LoadAllAssetsAtPath("Assets/Prefabs/interactive")
                .Where(p => p.GetComponent<Pickable>().GetLevelNum() == _levelManager.GetLevelId()) as List<Pickable>;
            Object[] g = AssetDatabase.LoadAllAssetsAtPath("Assets/Prefabs/interactive");
            */
            
            _levelManager = FindObjectOfType<LevelManager>();
            if (_levelManager.GetLevelId() == 1)
            {
                //подписка на событие!

           //     Instantiate(itemsToPick[0], this.transform.position, Quaternion.identity);
                Pick(itemsToPick[0]);
            }
        }
        
        public void Pick(Pickable item)
        {
            pickedItem = item;
            item.rb.isKinematic = true;
            item.transform.SetParent(slot); // ТУТ ОШИБКИ!
            item.BeingPick();
        }
        
        public void Drop(Pickable item)
        {
            pickedItem = null;
            item.transform.SetParent(null);
            item.rb.isKinematic = false;
         //   item.Rb.AddForce(item.transform.forward * 2, ForceMode.VelocityChange);
        }

        public List<Pickable> GetItems()
        {
            return itemsToPick;
        }
    }
}