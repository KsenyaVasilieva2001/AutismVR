using System;
using System.Collections.Generic;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

namespace UI
{
    public class ButtonController : MonoBehaviour
    {
        private TextMeshProUGUI _text;
        
        private Color _normalColor = Color.white;
        private Color _highlightColor = Color.HSVToRGB(187, 75, 100);
        private Color _normalTextColor = Color.white;
        private Color _highlightTextColor = Color.HSVToRGB(204, 100, 22);
        private Image _buttonImage;

        [SerializeField] private List<GameObject> objToShow;
        [SerializeField] private List<GameObject> objToHide;
        


        private void Awake()
        {
            _text = GetComponent<Button>().GetComponentInChildren<TextMeshProUGUI>();
            _buttonImage = GetComponent<Button>().image;
        }

        public void DirectionButton()
        {
            foreach (var obj in objToHide)
            {
                obj.SetActive(false);
            }
            foreach (var obj in objToShow)
            {
                obj.SetActive(true);
            }
        }

        public void OnPointerEnter()
        {
            _buttonImage.color = _highlightColor;
            if (_text != null)
            {
                _text.color = _highlightTextColor;
            }
        }
        public void OnPointerExit()
        {
            _buttonImage.color = _normalColor;
            if (_text != null)
            {
                _text.color = _normalTextColor;
            }
        }
    }
}