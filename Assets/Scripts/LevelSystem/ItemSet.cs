using System.Collections.Generic;
using UnityEngine;
using VR;

namespace LevelSystem
{
    [System.Serializable]
    public class ItemSet
    {
        public string setName;
        public List<Pickable> items;
    }
}