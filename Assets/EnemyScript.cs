using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyScript : MonoBehaviour
{
    public float speed = 2f; 
    public LayerMask groundLayer; 
    public LayerMask playerLayer; 
    public float damageCooldown = 2.0f; 
    private float lastDamageTime = -10f;
    public CharacterAnimationScript characterAnimationScript;

    private Rigidbody rb;
    private Transform transform;
    private int sign = 1;

    public AudioClip acDie; 

    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    void FixedUpdate()
    {
        // Mueve al enemigo en su dirección actual
        rb.velocity = Vector3.right * speed * sign;
    }

    void OnCollisionEnter(Collision collision)
    {
        // Si colisiona con algo que no sea el suelo ni el jugador, cambia de dirección
        if (!IsGroundOrPlayer(collision.gameObject))
        {
            ChangeDirection();
        }
    }

    bool IsGroundOrPlayer(GameObject obj)
    {
        if (obj.layer == groundLayer)
        {
            return true;
        }
        else
        {
            if (obj.tag.Equals("Player"))
            {
                float currentTime = Time.time;
                if (currentTime - lastDamageTime >= damageCooldown)
                {

                    
                     characterAnimationScript.damage(10);
                   
                    lastDamageTime = currentTime;
                }
                 return true;
            }
            else if (obj.tag.Equals("Punch"))
            {
                die(); return true;
            }
            else
            {
                return false;
            }
        }
    }

    void ChangeDirection()
    {
        // Cambia de dirección al azar (180 grados)
       if (sign == 1)
        {
            sign = -1; 
        }
       else
        {
            sign = 1; 
        }
    }

    internal IEnumerable<WaitForSeconds> die()
    {
        
        GetComponent<AudioSource>().Stop();
        GetComponent<AudioSource>().clip = acDie;
        GetComponent<AudioSource>().Play();

        yield return new WaitForSeconds(acDie.length);

        Destroy(gameObject);

    }
}
