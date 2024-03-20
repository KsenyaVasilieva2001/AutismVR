
using TMPro;
using Unity.XR.PXR;
using UnityEngine;
using UnityEngine.XR;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.XR.Interaction.Toolkit.Samples.Hands;

/*
namespace VR
{
    public class HandTrackingGrabber : XRDirectInteractor
    {
        private PXR_Hand _hand;
        [SerializeField] private float pinchThreshold = 0.7f;
        private bool _isPinching = false;
        public TMP_Text debugText;
        public TMP_Text pinch;

        protected override void Start()
        {
            base.Start();
            _hand = GetComponentInParent<PXR_Hand>();
        }

        // Update is called once per frame
        protected void Update()
        {
            var pinch_str = _hand.PinchStrength.ToString();
            pinch.text = pinch_str;
            CheckPinchStrength();
            OnHandGrabEnable();
            OnHandGrabDisable();
        }

        void CheckPinchStrength()
        {
            float pinchStrength = _hand.PinchStrength;
            if (pinchStrength > pinchThreshold && !_isPinching)
            {
                _isPinching = true;
                debugText.text = _isPinching.ToString();
            }
            else if (pinchStrength < pinchThreshold && _isPinching)
            {
                _isPinching = false;
                debugText.text = _isPinching.ToString();
            }
        }

        void OnHandGrabEnable()
        {
            if (_isPinching)
            {
                OnEnable();
                debugText.text = "On Enable is called";
            }
        }
        void OnHandGrabDisable()
        {
            if (!_isPinching)
            {
                OnDisable();
                debugText.text = "On disable is called";
            }
        }
    }
}
*/

