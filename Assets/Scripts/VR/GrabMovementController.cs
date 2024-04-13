using System;
using Unity.VisualScripting;
using UnityEngine;

namespace VR
{
    public class GrabMovementController : MovementController
    {
        /*
        private Vector3 _destination;
        [SerializeField] private float scale = 4f;


        private void OnCollisionEnter(Collision other)
        {
            if (other.gameObject.CompareTag("Finger"))
            {
                _destination = other.contacts[0].point;
                var localDirection = _destination - player.transform.position;
                localDirection = new Vector3(localDirection.x * scale, 0, localDirection.z * scale);
                    // localDirection = new Vector3(localDirection.x * scale, player.transform.position.y, localDirection.z * scale);
               //добавить интерполяцию? 
                CharacterController.Move( localDirection * speed * Time.deltaTime);
                StartMove();
            }
        }
        //через update обновлять destination на текущую позицию
        //доп переменная
        //если она пустая, = destination
        //или
        //если != destination 
        //находить их разницу
        //и также двигать руку
        //двигать уже в update, передавать из oncolenter dest

        private void OnCollisionExit(Collision other)
        {
            EndMove();
        }
        */
    }
}
