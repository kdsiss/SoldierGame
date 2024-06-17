using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Unity.VisualScripting;
using UnityEditor.Experimental.GraphView;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class CharacterAnimationScript : MonoBehaviour
{
   
    public Animator animator;
    public Animator animatorTransform;
    public Transform modelTransform;
    public Transform transformTransform;
    public float speed = 0;
    public float runningSpeed = 0; 
    public float jumpSpeed = 0;
    public float climbingSpeed;
    public int maxHealth = 100;

    private LayerMask ladderBottomMask;
    private LayerMask ladderTopMask;

    public Transform leftFoot; 
    public Transform rightFoot;
    public Transform headTop;

    //Prefabs objecte random
    public GameObject prefabEagle;
    public GameObject prefabSOL;
    public GameObject prefabBurger;
    public GameObject prefabGlock;
    public GameObject prefabMinigun;
    public GameObject uiKeyPanel;
    public GameObject uiKeyPanel2;
    public GameObject uiKeyPanel3;
    public Transform rightHand;
    public GameObject uiKeyPrefab;
    public Text hpText;
    private Rigidbody rb;
    private CapsuleCollider capsuleCollider; 
    private float xOrientation = 1;
    private LayerMask groundMask;
    private bool IsInLadder = false;
    private bool IsTopLadder = false;
    private bool IsBottomLadder = false;
    private bool canDoubleJump = false;
    private bool hasDoubleJumped = false;
    private float currentHealth;

    //public HealthBar healthBar;
    private AudioSource source;

    public bool hasKey1 = false;
    public bool hasKey2 = false;
    public bool hasKey3 = false;
    public AudioClip damageSound;
    public AudioClip deathSound;
    bool isDead = false;

    private bool punching; 
    // Start is called before the first frame update
    void Start()
    {
        currentHealth = maxHealth;
        //healthBar.SetMaxHealth(maxHealth);
        source = GetComponent<AudioSource>();
        rb = GetComponent<Rigidbody>();
        groundMask = LayerMask.GetMask("Ground");
        ladderBottomMask = LayerMask.GetMask("LadderBottom");
        ladderTopMask = LayerMask.GetMask("LadderTop");
        capsuleCollider = GetComponent<CapsuleCollider>();
    }


    // Update is called once per frame
    void Update()
    {

        if (isDead)
        {
            return;
        }

        if (animator.GetCurrentAnimatorStateInfo(0).IsName("Climbing"))
        {
            modelTransform.rotation = Quaternion.Euler(0, 180, 0);
            /*rb.velocity = new Vector3(Input.GetAxis("Horizontal") * climbingSpeed * 0, Input.GetAxis("Vertical") * climbingSpeed, 0);*/
            rb.position += Vector3.up * Input.GetAxis("Vertical") * climbingSpeed * Time.deltaTime;
            animator.SetFloat("climbing_y", Math.Abs(Input.GetAxis("Vertical")) + Math.Abs(Input.GetAxis("Horizontal")) + 0.001f);

            LayerMask target = Input.GetAxis("Vertical") > 0 ? ladderTopMask : ladderBottomMask;

            if (Physics.CheckSphere(rightFoot.position, 0.1f, target) || Physics.CheckSphere(leftFoot.position, 0.1f, target))
            {
                rb.isKinematic = false;
                animator.SetBool("isClimbing", false);
            }

        }
        else
        {

            // Gestion escalera

            // nos movemos al estado de climbing
            if ((Input.GetAxis("Vertical") > 0 && IsInLadder && IsBottomLadder) || (Input.GetAxis("Vertical") < 0 && IsInLadder && IsTopLadder))
            {
                rb.isKinematic = true;
                animator.SetBool("isClimbing", true);
            }



            //Moviment
            float x = Input.GetAxisRaw("Horizontal");

            if (x != 0)
            {
                xOrientation = -x;
            }
            bool isRunning = Input.GetButton("Run");

            animator.SetBool("IsRunning", isRunning && x != 0);
            animator.SetBool("IsWalking", x != 0);
            animatorTransform.SetBool("IsWalking", x != 0);

            modelTransform.rotation = Quaternion.Euler(0, xOrientation * 90, 0);
            transformTransform.rotation = Quaternion.Euler(0, -xOrientation * 90, 0); 
            
            rb.velocity = new Vector3((isRunning ? runningSpeed : speed) * x, rb.velocity.y, 0);


            bool isJumping = Input.GetButtonDown("Jump");

            // Check if character is grounded
            bool isGrounded = Physics.CheckSphere(leftFoot.position, 2f, groundMask) || Physics.CheckSphere(rightFoot.position, 2f, groundMask);
            animator.SetBool("isGrounded", isGrounded);
            animatorTransform.SetBool("isGrounded", isGrounded);

            if (isGrounded)
            {
                canDoubleJump = true;
                hasDoubleJumped = false;
            }

            if (isJumping &&  animator.isActiveAndEnabled)
            {
                if (isGrounded)
                {
                    Jump();
                }
                else if (canDoubleJump && !hasDoubleJumped)
                {
                    DoubleJump();
                }
            }

            animator.SetBool("hasJumped", !isGrounded);
            animator.SetFloat("v_y", rb.velocity.y);




            bool hasThrown = Input.GetButtonDown("Fire1");
            if (hasThrown)
            {
                animator.SetTrigger("hasThrown");
                //Instantiate(prefabEagle, this.rightHand.position, Quaternion.identity);
                //BaldEagle baldEagle = prefabEagle.GetComponent<BaldEagle>();
                //baldEagle.Init(xOrientation);
            }
            

            //Gestio del atac fisic
            if (isGrounded == true)
            {
                bool hasPunched = Input.GetButtonDown("Punch");
                if (hasPunched)
                {
                    
                    animator.SetTrigger("hasPunched");
                    animatorTransform.SetTrigger("hasPunched");
                }
                else
                {
                    punching = false; 
                }
            }





        }
        // bool isGrounded = Physics.Raycast(rightFoot.position, Vector3.down, 13f, groundMask);
    }
    public bool getPuching()
    {
        return punching;
    }
    private void OnTriggerEnter(Collider other)
    {
        CheckTriggers(other, true);
    }

    private void OnTriggerExit(Collider other)
    {
        CheckTriggers(other, false);
    }
    private void CheckTriggers(Collider other, bool active)
    {
        if (other.CompareTag("Ladder"))
        {

            IsInLadder = active;

            if (other.gameObject.name.Equals("ladderTop"))
            {
                IsTopLadder = active;
            }
            else if (other.gameObject.name.Equals("ladderBottom"))
            {
                IsBottomLadder = active;
            }
        }
        else if (other.CompareTag("Key") || other.CompareTag("Key2") || other.CompareTag("Key3"))
        {
            //put da ki in de canva
            other.GetComponent<Collider>().enabled = false;
            other.GetComponent<MeshRenderer>().enabled = false;
            Debug.Log("Key1 ");

            if (other.CompareTag("Key"))
            {
                Debug.Log("Key1 grabbed");
                MoveKeyToUI(other.gameObject, 1);
                hasKey1 = true;
            }
            else if (other.CompareTag("Key2"))
            {
                Debug.Log("Key 2 grabbed");
                MoveKeyToUI(other.gameObject, 2);
                hasKey2 = true;
            }
            else if (other.CompareTag("Key3"))
            {
                MoveKeyToUI(other.gameObject, 3);
                hasKey2 = true;

            }

        }
        else if (other.CompareTag("Cactus"))
        {
            damage(5f);
        }
        else if (other.CompareTag("Door"))
        {
            //if toux open da door!
            openDoor(other.gameObject);


        }
    }

    private void openDoor(GameObject doorTouched)
    {

     
    }

    private void MoveKeyToUI(GameObject key, int v)
    {
        //MMMM DA ki ecsist now!!!!
        if (v == 1)
        {
            GameObject uiKey = Instantiate(uiKeyPrefab, uiKeyPanel.transform);
        }
        else if (v == 2)
        {
            GameObject uiKey = Instantiate(uiKeyPrefab, uiKeyPanel2.transform);
        }
        else if (v == 2)
        {
            GameObject uiKey = Instantiate(uiKeyPrefab, uiKeyPanel3.transform);
        }
    }
        private void Jump()
    {
        rb.velocity = new Vector3(rb.velocity.x, jumpSpeed, 0);
        animator.SetTrigger("Jump");
    }

    private void DoubleJump()
    {
        Debug.Log("DoubleJump Triggered");
        rb.velocity = new Vector3(rb.velocity.x, jumpSpeed*2, 0);
        animator.SetTrigger("DoubleJump");
       
        hasDoubleJumped = true;
    }
    public void ThrowAxeEvent ()
    {
        var listGameObjects = new List<GameObject>
        {
            prefabEagle,
            prefabSOL,
            prefabGlock,
            prefabBurger,
            prefabMinigun
        };

        int randomNumber = new System.Random().Next(0, listGameObjects.Count);
        
        GameObject prefabToInstantiate = listGameObjects[randomNumber];

       
        GameObject selectedItem = GameObject.Instantiate(prefabToInstantiate, rightHand.position, Quaternion.identity);
        BaldEagle bananaController = selectedItem.GetComponent<BaldEagle>();
        bananaController.Init(xOrientation);



    }
    private void FixedUpdate()
    {
   
        capsuleCollider.height = headTop.position.y - Mathf.Min(rightFoot.position.y, leftFoot.position.y);
        capsuleCollider.center = new Vector3(0.1f, 0.5f * (headTop.position.y + Mathf.Min(rightFoot.position.y, leftFoot.position.y))- transform.position.y, 0);
    }
    public void JumpEvent ()
    {
        rb.velocity = new Vector3(rb.velocity.x,jumpSpeed,0);
    }
   
    public void damage(float v)
    {
        currentHealth = currentHealth - v;
        Debug.Log("Current Health: " + currentHealth);

        hpText.text = currentHealth.ToString() + "%";
        if (currentHealth <= 0)
        {
            hpText.text = "0%";
            die();
        }

        source.clip = damageSound;
        source.Play();

    }
    void OnCollisionEnter(Collision collision)
    {
        // Si colisiona con algo que no sea el suelo ni el jugador, cambia de dirección
        if (collision.gameObject.CompareTag("Mariachi"))
        {
            Debug.Log("MariachiTrobat");
            if (Input.GetButtonDown("Punch"))
            {

              EnemyScript enemyScript = collision.gameObject.GetComponent<EnemyScript>();
                enemyScript.die();
            }

        }
        else if (collision.gameObject.CompareTag("Cactus"))
        {
            damage(5f);
        }
    }
    public void die()
    {
        if (source != null && deathSound != null)
        {
            StartCoroutine(PlayDieSoundAndLoadScene());
        }
        else
        {
            LoadNextScene("deathScene");
        }
    }

    private IEnumerator PlayDieSoundAndLoadScene()
    {
        isDead = true;
        source.Stop();
        source.clip = deathSound;
        source.Play();
        animator.SetBool("isDead", true);
        animatorTransform.SetBool("isDead", true); 

        yield return new WaitForSeconds(deathSound.length);

        LoadNextScene("deathScene");
    }

    private void LoadNextScene(String nextSceneName)
    {
        if (!string.IsNullOrEmpty(nextSceneName))
        {
            SceneManager.LoadScene(nextSceneName);
        }
        else
        {
            Debug.LogWarning("Next scene name is not set.");
        }
    }
}

