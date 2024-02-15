using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.XR.Interaction.Toolkit;

public class HandPoseEventsComponent : MonoBehaviour
{
    [SerializeField]
    private CharacterController characterController;
    [SerializeField]
    private float speed;
    [SerializeField]
    private XRRayInteractor rayInteractor;
    private Vector3 hitPoint;
    
    //нужно находить направление луча контроллера 
    // а можно сделать через включение компонента Dynamic Move Provider - прочитатть про него
    void Start()
    {
        
    }

    private void Update()
    {
        RaycastHit hit;
        if (rayInteractor.TryGetCurrent3DRaycastHit(out hit))
        {
            hitPoint = hit.point; // the coordinate that the ray hits
        }
    }

    public void Move()
    {
       // Vector3 direction = rayInteractor.rayOriginTransform.transform.position - hitPoint;
       Vector3 direction = Vector3.forward;
       characterController.Move(direction * speed * Time.deltaTime);
    }

}
