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
        public bool IsPicked;

        [SerializeField] private HelperGrabController _helperGrabController;
        public Rigidbody rb;
        public Rigidbody Rb => rb;
        
        private void Awake()
        {
            levelManager = FindObjectOfType<LevelManager>();
        }

        private void OnCollisionEnter(Collision collision)
        {
            Debug.Log("Item trigger:" + collision.gameObject.name);
            if (collision.gameObject.CompareTag("TargetBox"))
            {
                BeingPick(collision.transform);
                Debug.Log(IsPicked);
            }
        }
     
        public void BeingPick(Transform parent)
        {
            transform.SetParent(parent);
            rb.velocity = Vector3.zero;
            rb.angularVelocity = Vector3.zero;
            transform.localPosition = Vector3.zero;
            transform.localEulerAngles = Vector3.zero;
            IsPicked = true;
        }
        
        public bool GetIsPicked()
        {
            return IsPicked;
        }
    }
}