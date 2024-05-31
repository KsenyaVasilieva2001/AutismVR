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

   public void ShowMessage(string text)
   {
      _messageText.text = text;
   }
}
