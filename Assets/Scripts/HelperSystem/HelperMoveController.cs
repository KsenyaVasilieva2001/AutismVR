using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using LevelSystem;
using Unity.XR.CoreUtils;
using UnityEngine;
using UnityEngine.AI;
using VR;
using Debug = UnityEngine.Debug;


namespace HelperSystem
{
    public class HelperMoveController : MonoBehaviour
    {
        [SerializeField] private LevelFindObjects level;
        [SerializeField] private HelperGrabController _helperGrabController;
        [SerializeField] private NavMeshAgent agent;
        [SerializeField] private GameObject player;
        private float playerDistance = 5f; //дистанция между игроком и помощником
        public Dictionary<Pickable, Vector3> HelperPath;
        private bool isMovingToItem;
        private Pickable currentItem;

        [SerializeField] private Pickable crocodile; 
        
        
        private float destinationReachedThreshold = 5f;
        private float maxPlayerDistance = 10f;

        private void Start()
        {
            player = FindObjectOfType<XROrigin>().gameObject;
            level = FindObjectOfType<LevelFindObjects>();
            HelperPath = new Dictionary<Pickable, Vector3>(level.GetItemPositions());
            currentItem = HelperPath.Keys.First();
        }

        private void Update()
        {
            agent.isStopped = !CheckDestination(player.transform.position, playerDistance) &&
                              CheckDestination(player.transform.position, maxPlayerDistance);
            PickUpMove();
            if (agent.isStopped)
            {
                SmoothLookAt();
            }
        }

        void PickUpMove()
        {
            Debug.Log("Crocodile:" + crocodile.GetIsPicked());
            Debug.Log(currentItem.name + " is " + currentItem.GetIsPicked());
            
            if (!isMovingToItem || (currentItem != null && currentItem.GetIsPicked()))
            {
                FindNextItem();
            }

            if (currentItem != null)
            {
                var pos = HelperPath[currentItem];
                MoveTo(!CheckDestination(player.transform.position, maxPlayerDistance)
                    ? player.transform.position
                    : pos);

                if (CheckDestination(pos, destinationReachedThreshold))
                {
                    agent.isStopped = true;
                }
            }
        }
        
        private void FindNextItem()
        {
            foreach (var pair in HelperPath)
            {
                if (!pair.Key.GetIsPicked())
                {
                    currentItem = pair.Key;
                    isMovingToItem = true;
                    Debug.Log("Move to " + pair.Key.name);
                    break;
                }
            }
        }
      
        bool CheckDestination(Vector3 target, float distance) {
            float distanceToTarget = Vector3.Distance(transform.position, target);
            return (distanceToTarget < distance);
        }

        void SmoothLookAt()
        {
            Vector3 direction = player.transform.position - transform.position;

            // Нормализуем вектор направления
            direction.Normalize();

            // Вычисляем целевой угол поворота вокруг оси Y
            float targetAngle = Mathf.Atan2(direction.x, direction.z) * Mathf.Rad2Deg;

            // Плавно вращаем объект в сторону целевого угла
            Quaternion targetRotation = Quaternion.AngleAxis(targetAngle, Vector3.up);
            transform.rotation = Quaternion.Lerp(transform.rotation, targetRotation, 5f * Time.deltaTime);
        }
        
        private void MoveTo(Vector3 destination)
        {
          //  agent.isStopped = false; //это я добавила недавно, если что убрать 
            agent.destination = destination;
        }
    }
}