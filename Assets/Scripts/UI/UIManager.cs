using System.IO;
using LevelSystem;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace UI
{
    public class UIManager : MonoBehaviour {
        
        [SerializeField] private TextMeshProUGUI levelDescription;
        [SerializeField] private Image levelImage;
        [SerializeField] private TextMeshProUGUI levelTitle;
        [SerializeField] private Button openButton;
        [SerializeField] private Button playButton;
        [SerializeField] private Button reportButton;
        [SerializeField] private GameObject locked;
        public RawImage mapImage;

        public void DisplayReport(LevelManager levelManager)
        {
            reportButton.interactable = levelManager.AllIsPassed();
        }  
        
        public void DisplayLevel(Level level)
        {
            levelDescription.text = level.LevelDescription;
            levelImage.sprite = level.LevelImage;
            levelTitle.text = level.LevelTitle;
            
            locked.SetActive(level.IsLocked);
            openButton.interactable = !level.IsLocked;

            if (level.IsLocked)
            {
                levelImage.color = Color.white;
            }
            else
            {
                levelImage.color = Color.gray;
            }
        }
        
        

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
}
