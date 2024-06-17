using UnityEngine;
using System.Collections;
using System;
using UnityEditor.Experimental.GraphView;

public class Turret : MonoBehaviour
{
    public Transform head; // La parte de la torreta que se moverá para apuntar al jugador
    public Transform player; // El jugador
    private LineRenderer lineRenderer; // El LineRenderer para la línea roja
    private bool isPaused = false; // Controla si la torreta está pausada
    private Vector3 direction;
    public CharacterAnimationScript characterAnimation;
    void Start()
    {
        // Obtener el LineRenderer del objeto de la torreta
        lineRenderer = GetComponent<LineRenderer>();
        // Configurar el ancho de la línea
        lineRenderer.startWidth = 1f;
        lineRenderer.endWidth = 0.1f;
        // Configurar el color de la línea
       
        // Configurar el número de posiciones del LineRenderer
        lineRenderer.positionCount = 2;

        // Iniciar la corutina de pausas
        StartCoroutine(PauseRoutine());
    }

    void Update()
    {

        if (isPaused)
        {
            lineRenderer.enabled = false;
            
        }
        else
        {
            lineRenderer.enabled = true;
        }

        if (player != null && head != null)
        {
             direction = player.position - head.position;

            if (direction.magnitude < 200f)
            {

                
                Quaternion lookRotation = Quaternion.LookRotation(direction);

                Vector3 eulerRotation = lookRotation.eulerAngles;
                head.rotation = Quaternion.Slerp(head.rotation, Quaternion.Euler(eulerRotation.x, eulerRotation.y, 0), Time.deltaTime * 5f);

                lineRenderer.SetPosition(0, head.position);
                lineRenderer.SetPosition(1, player.position);
            }
        }
    }

    IEnumerator PauseRoutine()
    {
        while (true)
        {
            yield return new WaitForSeconds(7f);
            if (direction.magnitude < 200f)
                shoot();
            isPaused = true;
            

            yield return new WaitForSeconds(3f);

            isPaused = false;
        }
    }

    private void shoot()
    {
        GetComponent<AudioSource>().Play();
        characterAnimation.damage(20f);
        
    }
}