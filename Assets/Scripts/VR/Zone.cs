using System;
using DataSystem;
using UnityEngine;

namespace VR
{
    public class Zone : MonoBehaviour
    {
        private const float Y_OFFSET = 10f;
        [SerializeField] private int start_x; //номер стартовой клетки
        [SerializeField] private int start_y;
        [SerializeField] private int num_x; //число клеток по x
        [SerializeField] private int num_y;
        private BoxCollider collider;

        public void Awake()
        {
            collider = GetComponent<BoxCollider>();
        }

        public void InstantiateCollider(float cellSize)
        {
            if (collider == null)
            {
                collider = gameObject.AddComponent<BoxCollider>();
                collider.size = new Vector3(num_x*cellSize, Y_OFFSET, num_y*cellSize);
                collider.center = new Vector3(start_x * cellSize + num_x * cellSize / 2, Y_OFFSET / 2,
                    start_y * cellSize + num_y * cellSize / 2);
                collider.isTrigger = true;
            }
        }

        private void OnTriggerEnter(Collider other)
        {
            if (other.CompareTag("Player"))
            {
                ReportDataCalculator.UpdateVisitedZones(this);
            }
        }
    }
} 
