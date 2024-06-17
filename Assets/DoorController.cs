using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DoorController : MonoBehaviour
{
    [SerializeField] private Animator myDoor = null;
    [SerializeField] private bool openTrigger = false;

    private void OnTriggerEnter(Collider other)
    {
         if (other.CompareTag("Player"))
        {
            GameObject c = other.gameObject;
           CharacterAnimationScript cas = c.GetComponent<CharacterAnimationScript>();
            if (cas.hasKey1 == true)
            {
                openTrigger = true;
                if (myDoor.name.Equals("HATCH"))
                {
                    if (cas.hasKey2 == true)
                    {
                        myDoor.SetBool("opendoor", true);
                        gameObject.SetActive(false);
                    }
                    else
                    {
                        openTrigger = false;
                    }
                }
            }
            if (openTrigger)
                {
                    myDoor.SetBool("opendoor", true);
                    gameObject.SetActive(false);
                }
            }
            
    }

}