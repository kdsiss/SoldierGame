using System.Collections;
using UnityEngine;

using System.Collections;
using UnityEngine;
using UnityEditor.Experimental.GraphView;
using static UnityEngine.Tilemaps.Tilemap;

public class BaldEagle : MonoBehaviour
{
    public float speed = 5f;
    public float rotationSpeed;
    public Vector3 rotationAxis = Vector3.up;
    public float destroyTime = 5.0f;  // Tiempo antes de destruir el objeto
    public float stopTime = 2.0f;  // Tiempo antes de comenzar a detener el movimiento
   
    
    private Rigidbody rb;
   

    // Start is called before the first frame update
    void Start()
    {
   
    }

    public void Init(float sign)
    {
        rb = GetComponent<Rigidbody>();
        rb.velocity = Vector3.right * speed * -sign;
        transform.Rotate(new Vector3(0, rotationSpeed, -rotationSpeed));
    }
    
    void Update()
    {
       
    }

    
}
