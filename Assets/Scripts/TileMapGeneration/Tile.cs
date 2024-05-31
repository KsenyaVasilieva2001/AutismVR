using System.Collections.Generic;
using UnityEngine;

namespace TileMapGeneration
{
    [System.Serializable] //а зачем надо это...
    public class Tile
    {
        [SerializeField] private GameObject tilePrefab; 
        [SerializeField] private TileType type = TileType.None; 
        public Vector2Int position;
        public Map map;
        
        public Tile(Map map, Vector2Int position)
        {
            this.map = map;
            this.position = position;
        }

        public void InstantiatePrefab(Map map, Vector3 localPosition)
        {
            GameObject obj = Object.Instantiate(tilePrefab, map.transform, true);
            obj.transform.localPosition = localPosition;
        }
       
    }
}
  