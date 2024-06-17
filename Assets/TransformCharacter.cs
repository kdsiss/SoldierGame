using System.Collections;
using UnityEngine;

public class TransformCharacter : MonoBehaviour
{
    public GameObject originalModel; 
    public GameObject transformedModel; 
    private bool isTransformed = false; 

    void Start()
    {
        originalModel.SetActive(true);
        transformedModel.SetActive(false);
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.R))
        {
            TransformCharacterModel();
        }



        void TransformCharacterModel()
        {
           
            
            
                originalModel.SetActive(false);
                transformedModel.SetActive(true);
                isTransformed = true;
                StartCoroutine(RevertTransformationAfterTime(10f));

            
        }

       
    }
    IEnumerator RevertTransformationAfterTime(float time)
    {
        yield return new WaitForSeconds(time);
        // Regresa al modelo original después del tiempo especificado
        if (isTransformed)
        {
            transformedModel.SetActive(false);
            originalModel.SetActive(true);
            isTransformed = false;
        }
    }

}
