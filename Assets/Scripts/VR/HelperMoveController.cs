using System;
using System.Collections.Generic;
using System.Linq;
using Unity.VisualScripting;
using Unity.XR.CoreUtils;
using UnityEngine;
using UnityEngine.AI;

namespace VR
{
    public class HelperMoveController : MonoBehaviour
    {
        [SerializeField] private LevelManager levelManager;
        [SerializeField] private HelperGrabController _helperGrabController;
        [SerializeField] private NavMeshAgent agent;
        [SerializeField] private GameObject player;
        private float playerDistance = 5f; //дистанция между игроком и помощником
        private List<Vector3> minPath;

        private float destinationReachedThreshold = 5f;
        private float maxPlayerDistance = 25f;

        private void Awake()
        {
            levelManager = FindObjectOfType<LevelManager>();
            player = FindObjectOfType<XROrigin>().gameObject;
        }

        private void Start()
        {
            minPath = GetMinPath(levelManager.GetItemPositions());
            levelManager = FindObjectOfType<LevelManager>();
            player = FindObjectOfType<XROrigin>().gameObject;
        }

        private void Update()
        {
            if (levelManager.GetLevelId() == 1)
            {
                agent.isStopped = !CheckDestination(player.transform.position, playerDistance) &&
                                  CheckDestination(player.transform.position, maxPlayerDistance);
                PickUpMove();
            }
        }

        private void PickUpMove()
        {
            foreach (var pos in minPath)
            {
                MoveTo(!CheckDestination(player.transform.position, maxPlayerDistance)
                    ? player.transform.position
                    : pos);
                //Добавить LookAt
                //поменять на делегата? 
                if (CheckDestination(pos, destinationReachedThreshold))
                {
                    agent.isStopped = true;
                    _helperGrabController.Drop(_helperGrabController.GetItems()[0]);
                }
            }
        }
        
        bool CheckDestination(Vector3 target, float distance) {
            float distanceToTarget = Vector3.Distance(transform.position, target);
            return (distanceToTarget < distance);
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