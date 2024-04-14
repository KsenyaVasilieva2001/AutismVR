using System;
using System.Collections.Generic;
using System.Linq;
using Unity.XR.CoreUtils;
using UnityEngine;
using UnityEngine.AI;

namespace VR
{
    public class HelperController : MonoBehaviour
    {
        [SerializeField] private GameObject box;
        [SerializeField] private LevelManager levelManager;
        [SerializeField] private NavMeshAgent agent;
        [SerializeField] private GameObject player;
        private float distance = 10f; //дистанция между игроком и помощником
        private List<Vector3> minPath;

        private float destinationReachedTreshold = 5f;
        
        
        private void Start()
        {
            minPath = GetMinPath(levelManager.GetItemPositions());
        }

        private void Update()
        {
            if (levelManager.levelId == 1)
            {
                agent.isStopped = !IsPlayerFollow();
                PickUpMove();
            }
        }

        private void PickUpMove()
        {
            foreach (var pos in minPath)
            {
                MoveTo(pos);
                if (CheckDestinationReached(pos))
                {
                    agent.isStopped = true;
                }
                //проверка что предмет собран
            }
        }

        private bool IsPlayerFollow()
        {
            Collider[] hitColliders = Physics.OverlapSphere(transform.position, distance);
            var playerCollider = hitColliders.Where(p => p.CompareTag("Player"));
            return (playerCollider != null);
        }
        
        bool CheckDestinationReached(Vector3 target) {
            float distanceToTarget = Vector3.Distance(transform.position, target);
            return (distanceToTarget < destinationReachedTreshold);
        }
        
        private void MoveTo(Vector3 destination)
        {
            agent.destination = destination;
        }
        private List<Vector3> GetMinPath(List<Vector3> positions)
        {
            //TODO : алгоритм Краскала
            List<Vector3> minPathList = new List<Vector3>();
            minPathList.Add(transform.position);
            return positions;
        }
    }
}