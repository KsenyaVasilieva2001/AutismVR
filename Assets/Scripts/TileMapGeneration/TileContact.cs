using System.Collections.Generic;
using UnityEngine;

namespace TileMapGeneration
{
    [System.Serializable]
    public class TileContact
    {
        [SerializeField] private Tile tile;
        public Vector2 rotation;
        [SerializeField] private List<TileContact> notSuitableContact; // с кем нельзя соединяться
        [SerializeField] private Dictionary<Vector2, List<TileContact>> _suitableContact; //контакты для данного поворота

        public bool IsMatchingTiles(TileContact tileContact)
        {
            return !notSuitableContact.Contains(tileContact) &&
                   !tileContact.notSuitableContact.Contains(this);
        }

        /*  public (TileContact first_contact, TileContact second_contact) GetContacts(Vector2 rotation, )
        {
            //пока не знаю нафиг надо, типа возвращает возможные контакты для текущего контакта
        }
        */
    }
    
    /*
     * необходимо по данному организованному списку правил сформировать suitable и not suitable contacts
     */
    
}