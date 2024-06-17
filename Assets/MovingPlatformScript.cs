using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovingPlatformScript : MonoBehaviour
{
    public Transform[] points;
    public float speed;

    private int currentPoint = 0;
    private Rigidbody rb;
    public Vector3 v;

    private GameObject player;

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        currentPoint = 0;
        this.transform.position = points[currentPoint].position;
        gotoNextPoint();
    }

    private void gotoNextPoint()
    {
        Vector3 direction = getTarget() - getCurrent();
        v = direction.normalized * speed;
    }

    // Update is called once per frame
    void Update()
    {
        this.transform.position += v * Time.deltaTime;
        if (player != null)
        {
            player.transform.position += v * Time.deltaTime;
        }
        if ((this.transform.position - getTarget()).magnitude < 0.4f)
        {
            currentPoint = (currentPoint + 1) % points.Length; // Use modulo operator to cycle points correctly
            gotoNextPoint();
        }
    }

    Vector3 getTarget()
    {
        return points[(currentPoint + 1) % points.Length].position;
    }

    Vector3 getCurrent()
    {
        return points[currentPoint].position;
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Player"))
        {
            player = collision.gameObject;
        }
    }

    private void OnCollisionExit(Collision collision)
    {
        if (collision.gameObject.CompareTag("Player"))
        {
            player = null;
        }
    }
}