using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;


public class MessageBox : MonoBehaviour
{
   //[SerializeField] private GameObject messageObj;
   private TextMeshPro _messageText;

   private void Awake()
   {
      _messageText = GetComponentInChildren<TextMeshPro>();
   }

   private void Start()
   {
     // messageObj.SetActive(false);
   }

   public void ShowMessage(string text)
   {
     // messageObj.SetActive(true);
      _messageText.text = text;
   }
}
