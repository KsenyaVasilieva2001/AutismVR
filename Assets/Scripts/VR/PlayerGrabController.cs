using UnityEngine;

namespace VR
{
    public class PlayerGrabController : MonoBehaviour
    {
        [SerializeField] private GameObject movementSystem;
        void OnTriggerEnter(Collider other)
        {
            if (other.gameObject.GetComponent<Pickable>())
            {
                MovementController targetComponent = GetComponent<MovementController>();
                if (targetComponent != null)
                {
                    targetComponent.enabled = false;
                }
                movementSystem.SetActive(false);
            }
        }

        void OnTriggerExit(Collider other)
        {
            if (other.gameObject.GetComponent<Pickable>())
            { 
                MovementController targetComponent = GetComponent<MovementController>();
                if (targetComponent != null)
                {
                    targetComponent.enabled = false;
                }
                movementSystem.SetActive(true);
            }
            
        }
    }
}