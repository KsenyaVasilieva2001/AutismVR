using FishNet.Object;
using UnityEngine;


public class NetworkPlayer : NetworkBehaviour
{
    [SerializeField]
    private GameObject _camera;

    public override void OnStartServer()
    {
#if !UNITY_EDITOR
        ConfigNonOwner();
#endif
    }

    public override void OnStartClient()
    {
        if (IsOwner)
            ConfigOwner();
        else
            ConfigNonOwner();
    }

    private void ConfigOwner()
    {
        _camera.SetActive(true);
        //записывать в demo level камеру, здесь появляется игрок
    }

    private void ConfigNonOwner()
    {
        _camera.SetActive(false);
        //переключение камеры на камеру первого лица
        if (TryGetComponent(out TestPlayerMovement pm))
        {
            pm.enabled = false;
            Destroy(pm);
        }
    }
}
