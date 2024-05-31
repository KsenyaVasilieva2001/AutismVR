using UnityEngine;
using System.Collections.Generic;

public class ZoneCollider : MonoBehaviour
{
    public List<Transform> objectsInZone; // список объектов, принадлежащих зоне
    public float margin = 0.1f; // отступ границ коллайдера от объектов

    private PolygonCollider2D collider; // коллайдер зоны
    private List<Vector2> points = new List<Vector2>(); // список точек, определяющих границы зоны

    void Start()
    {
        collider = GetComponent<PolygonCollider2D>(); // получаем коллайдер зоны
        CalculateColliderBounds(); // вычисляем границы коллайдера зоны
    }

    void CalculateColliderBounds()
    {
        points.Clear(); // очищаем список точек

        // определяем минимальные и максимальные координаты объектов в зоне
        float minX = float.MaxValue;
        float maxX = float.MinValue;
        float minZ = float.MaxValue;
        float maxZ = float.MinValue;

        foreach (Transform obj in objectsInZone)
        {
            Vector3 objPosition = obj.position;
            minX = Mathf.Min(minX, objPosition.x);
            maxX = Mathf.Max(maxX, objPosition.x);
            minZ = Mathf.Min(minZ, objPosition.z);
            maxZ = Mathf.Max(maxZ, objPosition.z);
        }

        // создаем набор точек, определяющих границы зоны
        Vector2 bottomLeft = new Vector2(minX - margin, minZ - margin);
        Vector2 bottomRight = new Vector2(maxX + margin, minZ - margin);
        Vector2 topRight = new Vector2(maxX + margin, maxZ + margin);
        Vector2 topLeft = new Vector2(minX - margin, maxZ + margin);

        points.Add(bottomLeft);
        points.Add(bottomRight);
        points.Add(topRight);
        points.Add(topLeft);

        // добавляем дополнительные точки, если зона имеет непрямоугольную форму
        // ...

        // задаем созданный список точек в качестве границы коллайдера зоны
        collider.pathCount = 1;
        collider.SetPath(0, points.ToArray());
    }
}
