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
    }

    private void ConfigNonOwner()
    {
        _camera.SetActive(false);
        if (TryGetComponent(out TestPlayerMovement pm))
        {
            pm.enabled = false;
            Destroy(pm);
        }
    }
}
