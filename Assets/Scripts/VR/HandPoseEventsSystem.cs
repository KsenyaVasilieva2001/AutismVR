using UnityEngine;

namespace VR
{
    public class HandPoseEventsSystem: MonoBehaviour
    {
        [SerializeField]
        private CharacterController characterController;

        [SerializeField] private float speed = 0.5f;
        [SerializeField]
        private Transform fingerPoint;
        [SerializeField]
        private Transform startPoint;

        private Vector3 hitPoint;

        //нужно находить направление луча контроллера 
        // а можно сделать через включение компонента Dynamic Move Provider - прочитатть про него
        void Start()
        {
            /*
        var cubeRenderer = sphere.GetComponent<Renderer>();
        cubeRenderer.material.SetColor("_Color", Color.red);
        Debug.Log(rayInteractor.rayOriginTransform.transform.position);
        */
        }

        private void Update()
        {
            /*
        RaycastHit hit;
        if (rayInteractor.TryGetCurrent3DRaycastHit(out hit))
        {
            //var cubeRenderer = sphere.GetComponent<Renderer>();
           // cubeRenderer.material.SetColor("_Color", Color.red);
            hitPoint = hit.point; // the coordinate that the ray hits
            */
            
        }
    
       
        public void Move()
        {
            /*
        Vector3 direction = hitPoint - rayInteractor.rayOriginTransform.transform.position;
       Vector3 direction = Vector3.forward;
       Vector3 direction = rayInteractor.rayOriginTransform.transform.position - endPoint.position;
      Vector3 direction = endPoint.position - startPoint.position; //это работает
      */
            characterController.Move(fingerPoint.forward * speed * Time.deltaTime);
        }
        //добавить несколько методов Move, под разные жесты
    }
}
