using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using DataSystem;
using LevelSystem;
using TMPro;
using Unity.VisualScripting;
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

        [SerializeField] private List<Toggle> toggles;
        [SerializeField] private TextMeshProUGUI criteriaText;
        [SerializeField] private TextMeshProUGUI criteriaName;
        private int _currCriteriaNum = -1;
        [SerializeField] private Button forwardCriteriaButton;
        [SerializeField] private Button backCriteriaButton;
        [SerializeField] private Button reportDisplayButton;
        private List<Criteria> _criteriaList;

        private void Start()
        {
            _criteriaList = ReportDataCalculator.Instance.LoadCriteriaXML();
            _criteriaList = _criteriaList.Where(c => c.IsRated).ToList();
            Debug.Log(_criteriaList.Count);
        }

        private void Update()
        {
            if (_currCriteriaNum < _criteriaList.Capacity - 1)
            {
                {
                    forwardCriteriaButton.gameObject.SetActive(true);
                    reportDisplayButton.gameObject.SetActive(false);
                }
            }
            else if(_currCriteriaNum == _criteriaList.Capacity - 1)
            {
                forwardCriteriaButton.gameObject.SetActive(false); 
                reportDisplayButton.gameObject.SetActive(true);
            }
        }

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
        

        public void DisplayAllCriteria(int change)
        {
            _currCriteriaNum += change;
            Debug.Log(_currCriteriaNum);
            if (_currCriteriaNum <= -1)
            {
                backCriteriaButton.interactable = false;
            }
            else
            {
                if (_currCriteriaNum < _criteriaList.Capacity - 1)
                {
                    if (_criteriaList[_currCriteriaNum].IsRated)
                    {
                        DisplayCriteria(_criteriaList[_currCriteriaNum]);
                       // forwardCriteriaButton.gameObject.SetActive(true);
                        //reportDisplayButton.gameObject.SetActive(false); 
                    }
                }
                /*
                else if(_currCriteriaNum == _criteriaList.Capacity - 1)
                {
                    forwardCriteriaButton.gameObject.SetActive(false); 
                    reportDisplayButton.gameObject.SetActive(true);
                }
                */
            }
        }

        private void DisplayCriteria(Criteria criteria)
        {
            StringBuilder sb = new StringBuilder();
            criteriaName.text = criteria.Name;
            foreach (var score in criteria.CriteriaScores)
            {
                sb.Append(score.ScoreValue + " " + score.Description + "\n");
            }
            criteriaText.text = sb.ToString();
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
