using System;
using System.Linq;
using HelperSystem;
using LevelSystem;
using TMPro;
using UnityEditor;
using UnityEngine;

namespace VR
{
    public class Pickable : MonoBehaviour
    {
        [SerializeField] private Collider targetCollider;

        [SerializeField] private LevelManager levelManager;

        //public TextMeshProUGUI text;
            // [SerializeField] private Transform attachTo;
        public bool IsPicked;

        [SerializeField] private HelperGrabController _helperGrabController;
        public Rigidbody rb;
        public Rigidbody Rb => rb;
        
        //то, куда нужно положить объект
        private void Awake()
        {
            levelManager = FindObjectOfType<LevelManager>();
            //text = GameObject.FindWithTag("Text").GetComponent<TextMeshProUGUI>();
        }
   
        /*
        private void OnTriggerEnter(Collider other)
        {
            Debug.Log(targetCollider.name);
           // if (other == targetCollider)
           if (other.name == "Box_bottom" && !CompareTag("TargetBox")) ;
            {
                // if (targetCollider.bounds.Contains(targetCollider.ClosestPoint(transform.position)))
                {
                    transform.SetParent(targetCollider.gameObject.transform);
                    BeingPick();
                    Debug.Log("OI JAEGERRRR");
                   //text.text = "JAEGERRRRR";
                    var levelFindObjects = levelManager.GetLevels().Where(
                        level => level.name.Equals("LevelFindObjects")).ToList()[0];
                    if (levelManager.GetLevelId() == levelFindObjects.GetLevelIndex())
                    {
                        _helperGrabController.Pick(_helperGrabController.GetItemsToPick()[0]);
                    }
                    Debug.Log(IsPicked);
                };
            }
        }*/

        public void BeingPick()
        {
            rb.velocity = Vector3.zero;
            rb.angularVelocity = Vector3.zero;
            transform.localPosition = Vector3.zero;
            transform.localEulerAngles = Vector3.zero;
            IsPicked = true;
        }
    }
}