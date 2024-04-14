using System;
using System.Collections.Generic;
using UnityEngine;

namespace VR
{
    public class Grid
    {
        private const int Y_OFFSET = 10;
        private int width;
        private int height;
        private int[,] grid_arr;
        private int cellCountX;
        private int cellCountY;
        private float cellSize;
        private Transform terrainTransform;

        private TextMesh[,] text_arr;
        private float lineWidth = 10f;
        
        public Grid(Terrain terrain, float cellSize, List<Zone> zones)
        {
            terrainTransform = terrain.transform;
            width = (int) Math.Ceiling(terrain.terrainData.size.x);
            height = (int) Math.Ceiling(terrain.terrainData.size.z);
            grid_arr = new int[width, height];
            cellSize = cellSize;
        }

        private Vector3 GetPosition(int x, int y)
        {
            return new Vector3(x + terrainTransform.position.x, Y_OFFSET,
                y + terrainTransform.position.y) * cellSize;
        }

        public void UpdateValue(int x, int y, int value)
        {
            if (x >= 0 && y >= 0 && x < width && y < height)
            {
                grid_arr[x, y] += value;
                text_arr[x, y].text = grid_arr[x, y].ToString();
            }
        }
        
        public void SetValue(int x, int y, int value)
        {
            if (x >= 0 && y >= 0 && x < width && y < height)
            {
                grid_arr[x, y] = value;
                text_arr[x, y].text = grid_arr[x, y].ToString();
            }
        }

        public void SetValue(Vector3 pos, int value)
        {
            int x, y;
            GetCoordinates(pos, out x, out y);
            SetValue(x,y , value);
        }

        private void GetCoordinates(Vector3 pos, out int x, out int y)
        {
            x = Mathf.FloorToInt(pos.x / cellSize);
            y = Mathf.FloorToInt(pos.z / cellSize);
        }

        public int GetValue(int x, int y)
        {
            if (x >= 0 && y >= 0 && x < width && y < height)
            {
                return grid_arr[x, y];
            }
            else
            {
                return 0;
            }
        }
    }
}