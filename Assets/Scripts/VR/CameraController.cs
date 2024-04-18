using System.IO;
using UnityEngine;

namespace VR
{
    public class CameraController : MonoBehaviour
    {
        public void TakeScreenshot()
        {
            // Create a render texture
            RenderTexture renderTexture = new RenderTexture(Screen.width, Screen.height, 24);

            // Set the render texture as the active render target
            RenderTexture.active = renderTexture;

            // Render the camera view to the render texture
            GetComponent<Camera>().Render();

            // Create a new texture and read the render texture pixels into it
            Texture2D texture = new Texture2D(Screen.width, Screen.height, TextureFormat.RGB24, false);
            texture.ReadPixels(new Rect(0, 0, Screen.width, Screen.height), 0, 0);
            texture.Apply();

            // Convert the texture to bytes
            byte[] bytes = texture.EncodeToPNG();

            // Save the bytes to a file
            
            File.WriteAllBytes(Settings.FILE_PATH + "/" + Settings.MAP_FILE_NAME, bytes);

            Debug.Log("Screenshot saved to: ");

            // Clean up
            RenderTexture.active = null;
            Destroy(renderTexture);
            Destroy(texture);
        }
        /*
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
        */
        
        
    } 
    
}