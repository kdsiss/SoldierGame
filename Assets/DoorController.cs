using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DoorController : MonoBehaviour
{
    public Animator myDoor = null;
    private bool openTrigger = false;
    private void Start()
    {
       
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            GameObject c = other.gameObject;
            CharacterAnimationScript cas = c.GetComponent<CharacterAnimationScript>();
            if (cas != null)
            {
                if (cas.hasKey1 == true)
                {
                    openTrigger = true;
                    Debug.Log("Trying to open door.");
                    if (myDoor.CompareTag("HATCH"))
                    {
                        Debug.Log("Hatch found");
                        if (cas.hasKey2 == true)
                        {
                            Debug.Log("Hatch found");
                            myDoor.SetBool("opendoor", true);
                            AudioSource aus = c.GetComponent<AudioSource>();
                            if (aus != null)
                            {
                                aus.Play();
                            }
                            gameObject.SetActive(false);
                        }
                        else
                        {
                            openTrigger = false;
                        }
                    }
                }
                else
                {
                    openTrigger = false;
                }

                if (openTrigger && !myDoor.CompareTag("HATCH"))
                {
                    myDoor.SetBool("opendoor", true);
                    gameObject.SetActive(false);
                }
            }
        }

    }
}