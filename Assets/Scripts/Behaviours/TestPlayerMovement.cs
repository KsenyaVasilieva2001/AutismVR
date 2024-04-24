using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestPlayerMovement : MonoBehaviour
{
    [SerializeField]
    private float _moveRate;

    void Update()
    {
        float hor = Input.GetAxisRaw("Horizontal");
        float ver = Input.GetAxisRaw("Vertical");

        Move(hor, ver);
    }

    private void Move(float hor, float ver)
    {
        float gravity = -10f * Time.deltaTime;
        //If ray hits floor then cancel gravity.
        Ray ray = new Ray(transform.position + new Vector3(0f, 0.05f, 0f), -Vector3.up);
        if (Physics.Raycast(ray, 10f + -gravity))
            gravity = 0f;

        /* Moving. */
        Vector3 direction = new Vector3(
            0f,
            gravity,
            ver * _moveRate * Time.deltaTime);

        transform.position += transform.TransformDirection(direction);
        transform.Rotate(new Vector3(0f, hor * 100f * Time.deltaTime, 0f));
    }
}
