using System;
using System.Collections;
using Unity.XR.PXR;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

namespace VR
{
    public class MovementController : MonoBehaviour
    {
        private float speed = 3.5f;
        private float teleportDelay = 0.5f;
        [SerializeField] private Transform xrPlayer;
        private Camera _camera;
        private bool _isMoving = false;

        private Vector3 _destination;
        private float scale = 2f;
        
        [SerializeField] private Timer _timer;
        
        private float bobbingSpeed = 5f; // Скорость покачивания
        private float bobbingAmount = 0.005f; // Амплитуда покачивания
        private float bobTimer;

        private GameObject heldObject;
        private void Start()
        {
            _camera = Camera.main;
            _timer = FindObjectOfType<Timer>();
        }
        private void Update()
        {
        
            if (IsMove())
            {
                _timer.PlayMoveTimer();
                CameraMove();
            }
        }

        
        private void CameraMove()
        {
            bobTimer += Time.deltaTime * bobbingSpeed;
            float bob = Mathf.Sin(bobTimer) * bobbingAmount;

            Vector3 newPosition = xrPlayer.position;
            newPosition.y += bob;
            xrPlayer.position = newPosition;
        }
        
        public void StartMove()
        {
            _isMoving = true;
        }
        public void EndMove()
        {
            _isMoving = false;
        }

        public bool IsMove()
        {
            return _isMoving;
        }
        
        public void ForwardMove()
        {
          //  var direction = _camera.transform.TransformDirection(Vector3.forward);
          var direction = transform.InverseTransformVector(_camera.transform.forward);
          direction.y = 0;
          direction = direction.normalized;
          xrPlayer.Translate(direction * speed * Time.deltaTime, Space.World);
        }
        public void ThumbLeftMove()
        {
            var direction = -transform.InverseTransformVector(-_camera.transform.right);
            direction.y = 0;
            direction = direction.normalized;
            xrPlayer.Translate(direction * speed * Time.deltaTime, Space.World);
        }
        
        public void ThumbRightMove()
        {
            var direction = -transform.InverseTransformVector(_camera.transform.right);
            direction.y = 0;
            direction = direction.normalized;
            xrPlayer.Translate(direction * speed * Time.deltaTime, Space.World);
        }
        
        public void ThumbBackMove()
        {
            var direction = transform.InverseTransformVector(-_camera.transform.forward);
            direction.y = 0;
            direction = direction.normalized;
            xrPlayer.Translate(direction * speed * Time.deltaTime, Space.World);
        }
    
        private void OnTriggerEnter(Collider other)
        {
            if (other.gameObject.GetComponent<XRGrabInteractable>() && heldObject == null)
            {
                heldObject = other.gameObject;
            }
        }
        
        private void OnTriggerStay(Collider other)
        {
            if (other.gameObject.CompareTag("Finger"))
            {
                if (heldObject == null)
                {
                    Vector3 collisionPoint = other.ClosestPoint(transform.position);
                    Vector3 dir = (collisionPoint - xrPlayer.position).normalized;
                    dir.y = 0;
                    StartCoroutine(TeleportToPoint(dir));
                }
            }
        }

        private void OnTriggerExit(Collider other)
        {
            if (other.gameObject == heldObject)
            {
                heldObject = null;
                // Здесь можно добавить логику освобождения объекта, например, сброс родительского объекта или разрешение движения
            }
        }

        private IEnumerator TeleportToPoint(Vector3 destination)
        {
            yield return new WaitForSeconds(teleportDelay);
            xrPlayer.Translate(destination * speed * Time.deltaTime, Space.World);
        }
        
    }
}