using System;
using UnityEngine;

namespace VR
{
    public class MovementController : MonoBehaviour
    {
        [SerializeField] private float speed = 5f;
        [SerializeField] private Transform xrPlayer;
        private Camera _camera;
        private bool _isMoving = false;

        private Vector3 _destination;
        [SerializeField] private float scale = 4f;
        
        private Vector3 _nextSwayVector;
        private Vector3 _nextSwayPosition;
        private Vector3 _startLocalPosition;
        [SerializeField] float intensity = 10.0f; 
        [SerializeField] float amplitude = 5.0f;
        
        private void Start()
        {
            _camera = FindObjectOfType<Camera>();
           
           _nextSwayVector = xrPlayer.up * amplitude;
           _nextSwayPosition = xrPlayer.localPosition + _nextSwayVector;
           _startLocalPosition = xrPlayer.localPosition;
        }
        private void Update()
        {
            if (_isMoving)
            {
              //CameraMove();
               //если пересек клетку update value в grid
            }
            
        }

        
        private void CameraMove()
        {
            /*
            var sin = cameraHeight * Mathf.Sin(cameraSpeed);
            xrPlayer.position = Vector3.up * sin;
            */
            
            xrPlayer.localPosition = Vector3.MoveTowards(xrPlayer.localPosition, _nextSwayPosition, intensity * Time.deltaTime);
            if (Vector3.SqrMagnitude(xrPlayer.localPosition - _nextSwayPosition) < 0.01f)
            {
                _nextSwayVector = -_nextSwayVector;

                _nextSwayPosition = _startLocalPosition + _nextSwayVector;
            }
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
            var direction = transform.InverseTransformVector(-_camera.transform.right);
            direction.y = 0;
            direction = direction.normalized;
            xrPlayer.Translate(direction * speed * Time.deltaTime, Space.World);
        }
        
        public void ThumbRightMove()
        {
            var direction = transform.InverseTransformVector(_camera.transform.right);
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
        
        
        private void OnCollisionEnter(Collision other)
        {
            if (other.gameObject.CompareTag("Finger"))
            {
                _destination = other.contacts[0].point;
                StartMove();
            }
        }

        private void OnCollisionStay(Collision other)
        {
            if (other.gameObject.CompareTag("Finger"))
            { 
                var dir = -(other.contacts[0].point - _destination);
                var position = xrPlayer.position;
                var pos = position + dir * scale;
                pos.y = 0;
               /* position = Vector3.Lerp(position, pos, Time.deltaTime * speed);
                xrPlayer.position = position;
                */
               xrPlayer.Translate(pos * scale * speed * Time.deltaTime, Space.World);
            }
        }

        private void OnCollisionExit(Collision other)
        {
            EndMove();
        }
    }
}