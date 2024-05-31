using System.Collections.Generic;
using UnityEngine;

namespace TileMapGeneration
{
    [System.Serializable]
    public class TileContact
    {
        [SerializeField] private Tile tile;
        public Vector2 rotation;
        [SerializeField] private List<TileContact> notSuitableContact;
        [SerializeField] private Dictionary<Vector2, List<TileContact>> _suitableContact;

        public bool IsMatchingTiles(TileContact tileContact)
        {
            return !notSuitableContact.Contains(tileContact) &&
                   !tileContact.notSuitableContact.Contains(this);
        }
    }
}