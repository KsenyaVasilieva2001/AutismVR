using System.Collections.Generic;
using System.Linq;
using LevelSystem;
using Unity.XR.CoreUtils;
using UnityEngine;
using UnityEngine.AI;
using VR;

namespace HelperSystem
{
    public class HelperMoveController : MonoBehaviour
    {
        [SerializeField] private LevelManager levelManager;
        [SerializeField] private HelperGrabController _helperGrabController;
        [SerializeField] private NavMeshAgent agent;
        [SerializeField] private GameObject player;
        private float playerDistance = 5f; //дистанция между игроком и помощником
        public List<Vector3> _minPath;

        public List<Vector3> MINPath
        {
            get => _minPath;
            set => _minPath = value;
        }

        private float destinationReachedThreshold = 5f;
        private float maxPlayerDistance = 10f;

        private void Start()
        {
            player = FindObjectOfType<XROrigin>().gameObject;
        }

        private void Update()
        {
            agent.isStopped = !CheckDestination(player.transform.position, playerDistance) &&
                              CheckDestination(player.transform.position, maxPlayerDistance);
            PickUpMove();
        }

        private void PickUpMove()
        {
            foreach (var pos in _minPath)
            {
                MoveTo(!CheckDestination(player.transform.position, maxPlayerDistance)
                    ? player.transform.position
                    : pos);
                //Добавить LookAt
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
    }
}