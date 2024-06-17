using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DialogueScript : MonoBehaviour
{
    public Text dialogueText; // El objeto de texto para mostrar el diálogo
    public GameObject dialoguePanel; // El panel de diálogo
    public string[] sentences; // Las oraciones del diálogo

    private Queue<string> sentenceQueue; // Cola para las oraciones del diálogo

    void Start()
    {
        sentenceQueue = new Queue<string>();


        // Inicializar el array si no está inicializado en el Inspector
        if (sentences == null || sentences.Length == 0)
        {
            sentences = new string[5];
        }

        sentences[0] = "Oh no! it seems like the Mexicans have caught you!";
        sentences[1] = "They want to force you to listen to tumbled corrids (corridos tumbados) for the rest of your life!";
        sentences[2] = "Wait... What is that over there?.. A Key!";
        sentences[3] = "You can double jump by pressing space twice.";
        sentences[4] = "Be free! And go back to the US of A!!";

        // Verificar que el array se llenó correctamente
        for (int i = 0; i < sentences.Length; i++)
        {
            Debug.Log($"Sentence {i}: {sentences[i]}");
        }

        dialoguePanel.SetActive(false);

        StartDialogue();
    }

    public void StartDialogue()
    {
        dialoguePanel.SetActive(true);
        sentenceQueue.Clear();

        foreach (string sentence in sentences)
        {
            sentenceQueue.Enqueue(sentence);
        }

        DisplayNextSentence();
    }

    public void DisplayNextSentence()
    {
        if (sentenceQueue.Count == 0)
        {
            EndDialogue();
            return;
        }

        string sentence = sentenceQueue.Dequeue();
        StopAllCoroutines();
        StartCoroutine(TypeSentence(sentence));
    }

    IEnumerator TypeSentence(string sentence)
    {
        dialogueText.text = "";
        foreach (char letter in sentence.ToCharArray())
        {
            dialogueText.text += letter;
            yield return new WaitForSeconds(0.05f);
        }
    }

    void EndDialogue()
    {
        dialoguePanel.SetActive(false);
    }
}