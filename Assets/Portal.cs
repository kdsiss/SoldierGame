using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class PortalScript : MonoBehaviour
{
    public Transform destinationPortal;
    public bool isPlayerInPortal = false;

    void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player") && !isPlayerInPortal)
        {
            
            other.transform.position = destinationPortal.position;

           
            PortalScript destPortalScript = destinationPortal.GetComponent<PortalScript>();
            GetComponent<AudioSource>().Play(); 
            if (destPortalScript != null)
            {
               
                destPortalScript.isPlayerInPortal = true;
            }
        }
    }

    void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            
            isPlayerInPortal = false;
            
        }
    }
}