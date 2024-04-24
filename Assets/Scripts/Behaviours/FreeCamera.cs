using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Camera))]
public class FreeCamera : MonoBehaviour
{
    [SerializeField] float speed;

    private Camera freeCamera;

    void Start()
    {
        freeCamera = GetComponent<Camera>();
    }

    void Update()
    {
        if (Input.GetKey(KeyCode.W))
            MoveCamera(Vector3.forward);
        else if (Input.GetKey(KeyCode.S))
            MoveCamera(-Vector3.forward);
        else if (Input.GetKey(KeyCode.D))
            MoveCamera(Vector3.right);
        else if (Input.GetKey(KeyCode.A))
            MoveCamera(-Vector3.right);
    }

    private void MoveCamera(Vector3 dir)
    {
        freeCamera.transform.position += speed * Time.deltaTime * dir;
    }
}
