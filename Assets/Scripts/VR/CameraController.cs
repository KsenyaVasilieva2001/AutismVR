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
            //https://blog.yarsalabs.com/creating-sprite-from-camera-view-in-unity/
            
            File.WriteAllBytes(Settings.FILE_PATH + "/" + Settings.MAP_FILE_NAME, bytes);

            Debug.Log("Screenshot saved to: ");

            // Clean up
            RenderTexture.active = null;
            Destroy(renderTexture);
            Destroy(texture);
        }
    }
}