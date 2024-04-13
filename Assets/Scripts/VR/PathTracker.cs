using System;
using System.Collections.Generic;
using UnityEngine;

namespace VR
{
    public class PathTracker : MonoBehaviour
    {
        [SerializeField] private Transform trackingTransform;
        [SerializeField] private LineRenderer lineRenderer;
        private List<Vector3> _positionList;
        private float _timeInterval; 
        private float _timeIntervalMax = .2f; //отслеживаем позицию 5 раз в секунду, а не 60 как fps
        private float _minDistance = .5f;
        private float y_offset = 50f;
        private float pathLength;
        

        void Awake()
        {
            _positionList = new List<Vector3>(); 
        }

        void Start()
        {
            _positionList.Add(trackingTransform.position);
            UpdateVisual();
        }
        
        void Update()
        {
            _timeInterval -= Time.deltaTime;
            if (_timeInterval <= 0f)
            {
                _timeInterval += _timeIntervalMax;

                Vector3 lastPosition = _positionList[^1];
                Vector3 newPosition = trackingTransform.position;

                if (Vector3.Distance(lastPosition, newPosition) > _minDistance)
                {
                    _positionList.Add(trackingTransform.position);
                    UpdateVisual();
                }
            }
            Debug.Log(GetPathLength());
        }

        void UpdateVisual()
        {
            lineRenderer.positionCount = _positionList.Count;
            Vector3[] positionArray = _positionList.ToArray();
            for (int i = 0; i < positionArray.Length; i++)
            {
                positionArray[i].y = y_offset;
            }
            lineRenderer.SetPositions(_positionList.ToArray());
        }

        /*
        void Save()
        {
            SavePath savePath = new SavePath
            {
                _positionList = _positionList,
                pathLength = GetPathLength()
            };
            string json = JsonUtility.ToJson(savePath);
            PlayerPrefs.SetString(PlayerPrefsPath, json);
            
        }

        void Load()
        {
            string json = PlayerPrefs.GetString(PlayerPrefsPath);
            SavePath savePath = JsonUtility.FromJson<SavePath>(json);
            _positionList = savePath._positionList;
            UpdateVisual();
        }
        */

        public float GetPathLength()
        {
            Vector3[] positionArray = new Vector3[lineRenderer.positionCount];
            lineRenderer.GetPositions(positionArray);
            for (int i = 0; i < positionArray.Length - 1; i++)
            {
                pathLength += Vector3.Distance(positionArray[i+1],positionArray[i]);
            }

            return pathLength;
        }

        public List<Vector3> GetPositionList()
        {
            return _positionList;
        }

        /*
        private class SavePath
        {
            public List<Vector3> _positionList;
            public double pathLength;
        }
        */
        
    }
}
