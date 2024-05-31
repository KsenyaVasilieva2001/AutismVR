using System;
using System.Collections;
using Unity.XR.PXR;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

namespace VR
{
    public class MovementController : MonoBehaviour
    {
        private float speed = 2.5f;
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
        [SerializeField] private PXR_Hand leftHand;
        [SerializeField] private PXR_Hand rightHand;
        
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
              CameraMove();
         
        }
        public void ThumbLeftMove()
        {
            var direction = -transform.InverseTransformVector(-_camera.transform.right);
            direction.y = 0;
            direction = direction.normalized;
            if (MoveIsAllowed())
            {
                xrPlayer.Translate(direction * speed * Time.deltaTime, Space.World);
                CameraMove();
            }
        }
        
        public void ThumbRightMove()
        {
            var direction = -transform.InverseTransformVector(_camera.transform.right);
            direction.y = 0;
            direction = direction.normalized;
            if (MoveIsAllowed())
            {
                xrPlayer.Translate(direction * speed * Time.deltaTime, Space.World);
                CameraMove();
            }
        }
        
        public void ThumbBackMove()
        {
            var direction = transform.InverseTransformVector(-_camera.transform.forward);
            direction.y = 0;
            direction = direction.normalized;
          
                xrPlayer.Translate(direction * speed * Time.deltaTime, Space.World);
                CameraMove();
            
           // xrPlayer.Translate(direction * speed * Time.deltaTime, Space.World);
        }

        public bool MoveIsAllowed()
        {
            float angle = 30f;
            
            Vector3 leftHandCameraVector3 = leftHand.transform.position - xrPlayer.position;
            Vector3 rightHandCameraVector3 = rightHand.transform.position - xrPlayer.position;
            
            float leftHandAngle = Vector3.Angle(leftHandCameraVector3, xrPlayer.forward);
            float rightHandAngle = Vector3.Angle(rightHandCameraVector3, xrPlayer.forward);

          /*  return ((leftHandCameraVector3.magnitude > 0.25f && (Math.Abs(leftHandAngle) < angle))
                    || rightHandCameraVector3.magnitude > 0.25f && (Math.Abs(rightHandAngle) < angle));
                    */
          return (Math.Abs(leftHandAngle) < angle) || (Math.Abs(rightHandAngle) < angle);

        }
        
        private void OnTriggerEnter(Collider other)
        {
            if (GetComponent<MovementController>().enabled)
            {
                if (other.gameObject.GetComponent<XRGrabInteractable>() && heldObject == null)
                {
                    heldObject = other.gameObject;
                }
            }
        }
        
        private void OnTriggerStay(Collider other)
        {
            if (GetComponent<MovementController>().enabled)
            {
                if (!other.gameObject.GetComponent<Pickable>())
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
            }
        }

        private void OnTriggerExit(Collider other)
        {
            if (GetComponent<MovementController>().enabled)
            {
                if (other.gameObject == heldObject)
                {
                    heldObject = null;
                    // Здесь можно добавить логику освобождения объекта, например, сброс родительского объекта или разрешение движения
                }
            }
        }
    

        private IEnumerator TeleportToPoint(Vector3 destination)
        {
            yield return new WaitForSeconds(teleportDelay);
            xrPlayer.Translate(destination * speed * Time.deltaTime, Space.World);
        }
        
    }
}