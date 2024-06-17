using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraScript : MonoBehaviour
{

    public Transform target; 
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
              
    }
    private void FixedUpdate()
    {
        Vector3 targetPos = new Vector3(target.position.x, target.position.y + 20, -200);
        transform.position = Vector3.Lerp(transform.position, targetPos, 0.1f);
    }
}
