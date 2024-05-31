using FishNet.Object;
using UnityEngine;


public class NetworkPlayer : NetworkBehaviour
{
    [SerializeField]
    private GameObject _camera;
    [SerializeField]
    private GameObject instructorCamera;
    
    
    public override void OnStartServer()
    {
#if !UNITY_EDITOR
        ConfigNonOwner();
#endif
    }

    public override void OnStartClient()
    {
      // instructorCamera = GameObject.FindWithTag("InstructorCamera");
      
        if (IsOwner)
            ConfigOwner();
        else
            ConfigNonOwner();
            
    }

    private void ConfigOwner()
    {
        _camera.SetActive(true);
        Debug.Log("Config Owner!!");
        //instructorCamera.SetActive(false);
        //записывать в demo level камеру, здесь появляется игрок
    }

    private void ConfigNonOwner()
    {
        _camera.SetActive(true);
        //переключение камеры на камеру первого лица
        //instructorCamera.SetActive(false);
        if (TryGetComponent(out TestPlayerMovement pm))
        {
            pm.enabled = false;
            Destroy(pm);
        }
    }
}
