using Unity.XR.PXR;
using UnityEngine;

namespace VR
{
    //переименовать в movement controller или что то такое
    public class HandPoseEventsSystem: MonoBehaviour
    {
        [SerializeField]
        private CharacterController characterController;

        [SerializeField] private float speed = 0.1f;
        [SerializeField]
        private Transform fingerPoint;
        //[SerializeField]
       // private Transform handRight;
        [SerializeField]
        private Transform handLeft;
        [SerializeField]
        private PXR_Hand handRight;
        public float gravity = -9.81f;
        //определить какая рука сефчас работает

        public void ThumbUpForwardMove()
        {
            var direction = handRight.handJoints[(int) HandJoint.JointThumbTip].right;
            direction *= speed;
            direction.y -= gravity;
            characterController.Move(direction * Time.deltaTime);
        }
        
        public void ThumbUpMove()
        {
            var direction = handRight.handJoints[(int) HandJoint.JointThumbTip].forward;
            characterController.Move(direction * speed * Time.deltaTime);
        }
        
        public void FistMove()
        {
            Debug.Log("Fist Move!");
            var direction = handRight.handJoints[(int) HandJoint.JointPalm].forward;
            characterController.Move(direction * speed * Time.deltaTime);
        }

        public void GrabMove()
        {
            
        }
       
    }
}
