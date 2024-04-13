using System;
using System.Collections.Generic;
using UnityEngine;

namespace VR
{
    public class GridSystem: MonoBehaviour
    {
        private Terrain terrain;
        public Grid grid;
        [SerializeField] private float cellSize;
        public List<Zone> zones;

        public void InstantiateZone()
        {
            // instantiate collider
        }
        
        //OnCollisionEnter : GetXY Set Value
        private void Awake()
        {
            terrain = FindObjectOfType<Terrain>();
        }

        private void Start()
        {
            grid = new Grid(terrain, cellSize, zones); //выбирать подмассивы клеток
        }
    }
}