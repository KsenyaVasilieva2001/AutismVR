using UnityEngine;

namespace VR
{
    public class Zone : MonoBehaviour
    {
        [SerializeField] private int start_x; //номер стартовой клетки
        [SerializeField] private int start_y;
        [SerializeField] private int num_x; //число клеток по x
        [SerializeField] private int num_y;
        private BoxCollider collider;
        void Start()
        {
            
        }

        void AddCollider()
        {
            if (collider == null)
            {
                collider = gameObject.AddComponent<BoxCollider>();
                collider.size = new Vector3();
            }
        }
    }
}
