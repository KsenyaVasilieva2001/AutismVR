using UnityEngine;

namespace UI
{
    public class TranslationWindow : MonoBehaviour
    {
        [SerializeField] private GameObject translationCanvas;

        public void ShowWindow()
        {
            translationCanvas.SetActive(true);
        }
    }
}
