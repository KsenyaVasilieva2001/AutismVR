using System;
using UnityEditor;
using UnityEngine;

namespace VR
{
    public class Pickable : MonoBehaviour
    {
        [SerializeField] private Collider targetCollider;
        [SerializeField] private int levelNum;
            // [SerializeField] private Transform attachTo;
        private bool isPicked;

        [SerializeField] private HelperGrabController _helperGrabController;
        public Rigidbody rb;
        public Rigidbody Rb => rb;
        
        //set сделать проперти если не null
        //то, куда нужно положить объект
        private void Awake()
        {
            rb = GetComponent<Rigidbody>();
        }
        
        public int GetLevelNum()
        {
            return levelNum;
        }
        private void OnTriggerEnter(Collider other)
        {
            if (other == targetCollider)
            {
                if (targetCollider.bounds.Contains(targetCollider.ClosestPoint(transform.position)))
                {
                    Debug.Log("BUN!");
                    transform.parent = targetCollider.gameObject.transform;
                    BeingPick();
                    if (levelNum == 1)
                    {
                        //подписка на событие!
                        _helperGrabController.Pick(_helperGrabController.itemsToPick[0]);
                    }
                };
            }
        }

        public void BeingPick()
        {
            rb.velocity = Vector3.zero;
            rb.angularVelocity = Vector3.zero;
            transform.localPosition = Vector3.zero;
            transform.localEulerAngles = Vector3.zero;
            isPicked = true;
        }
        public bool IsPicked()
        {
            return isPicked;
        }
    }
}