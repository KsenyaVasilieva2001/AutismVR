using System;
using Unity.XR.PXR;
using UnityEngine;

namespace VR
{
    public class HandTrackingMovementController: MovementController
    {
        /*
        public void ForwardMove()
        {
            /*
            var direction = handRight.handJoints[(int) HandJoint.JointThumbTip].forward;
            characterController.Move(direction * speed * Time.deltaTime);
            
            var direction = player.transform.forward;
            CharacterController.Move(direction * speed * Time.deltaTime);
        }

        public void ThumbLeftMove()
        {
            var direction = -player.transform.right;
            CharacterController.Move(direction * speed * Time.deltaTime);
        }
        
        public void ThumbRightMove()
        {
            var direction = player.transform.right;
            CharacterController.Move(direction * speed * Time.deltaTime);
        }
        
        public void ThumbBackMove()
        {
            var direction = -player.transform.forward;
            CharacterController.Move(direction * speed * Time.deltaTime);
        }
        */
    }
    //еще раз взять transform camera 
    //должен быть только один character controller и rigid body 
    //убрать физику и character controller, перемещать без него
    //заново взять префаб xr origin 
    //брать forward у камеры (родитель камеры) двигать origin, 
}

