using UnityEngine;

namespace VR
{
    public class CameraController : MonoBehaviour
    {
        [SerializeField] float intensity = 10.0f; 
        [SerializeField] float amplitude = 5.0f;
        [SerializeField] private MovementController xrPlayer;
        private Vector3 _nextSwayVector;
        private Vector3 _nextSwayPosition;
        private Vector3 _startLocalPosition;

        void Start()
        {
            _nextSwayVector = Vector3.up * amplitude;
            _nextSwayPosition = transform.localPosition + _nextSwayVector;
            _startLocalPosition = transform.localPosition;
        }

        void Update()
        {
            if (xrPlayer.IsMove()) // Если игрок движется
            {
                transform.localPosition = Vector3.MoveTowards(transform.localPosition, _nextSwayPosition, intensity * Time.deltaTime);
                if (Vector3.SqrMagnitude(transform.localPosition - _nextSwayPosition) < 0.01f)
                {
                    _nextSwayVector = -_nextSwayVector;

                    _nextSwayPosition = _startLocalPosition + _nextSwayVector;
                }
            }
            else
                transform.localPosition = Vector3.MoveTowards(transform.localPosition, _startLocalPosition, intensity * Time.deltaTime);
        }
    }
}