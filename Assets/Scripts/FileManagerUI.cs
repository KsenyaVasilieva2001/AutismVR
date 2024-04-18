using System.IO;
using UnityEngine;
using UnityEngine.UI;

public class FileManagerUI : MonoBehaviour {
   
    public RawImage mapImage; 

    public void DrawMap()
    {
       // byte[] imageBytes = Resources.Load<TextAsset>(Settings.FILE_PATH + "/" + Settings.MAP_FILE_NAME).bytes;
       byte[] imageBytes = File.ReadAllBytes(Settings.FILE_PATH + "/" + Settings.MAP_FILE_NAME);
       Debug.Log(imageBytes.Length);
        // Create a new Texture2D object from the byte array
        Texture2D imageTexture = new Texture2D(500, 400);
        imageTexture.LoadImage(imageBytes);

        // Assign the texture to the RawImage component
        mapImage.texture = imageTexture;   
    }
        
}
