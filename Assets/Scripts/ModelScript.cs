using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModelScript : MonoBehaviour
{
    public CharacterAnimationScript characterAnimationScript;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void JumpEvent()
    {
        characterAnimationScript.JumpEvent(); 
    }
    public void ThrowAxeEvent()
    {
        characterAnimationScript.ThrowAxeEvent();
    }
}
    