using System.Collections.Generic;
using System.Drawing;
using UnityEngine;

namespace TileMapGeneration
{
    [System.Serializable] //а зачем надо это...
    public class Map : MonoBehaviour
    {
        public List<Tile> tiles;
        public Tile[,] tileMatrix;
        public GameObject startTile; //где инстанциируется игрок

        public Vector3 startMapPos;
        //TODO: переместить эту переменную в другой класс - выбирается рандомный тайл с дорогой 
        public int size_x;
        public int size_y; 


        void Init()
        {
            tileMatrix = new Tile[size_x, size_y];
            for (int i = 0; i < size_x; i++) 
            {
                for (int j = 0; j < size_y; j++)
                {
                    //  tileMatrix[i, j] = new Tile(this, new Vector2Int(i, j), new List<MapModuleState>(mapModules));
                }
            }

        }

        void CreateMap()
        {
            
        }

        void GenerateBuildings()
        {
            for (int i = 0; i < size_x; i++)
            {
                tileMatrix[0, i] = new Tile(this, new Vector2Int(0, i));
                //как-то надо выбрать из всех тайлов с типом дом и рандомно выбрать префаб для каждого

            }
        }
        
        
    }
}