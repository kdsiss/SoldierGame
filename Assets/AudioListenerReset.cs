using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class AudioListenerReset : MonoBehaviour
{
    private AudioListener audioListener;

    void Start()
    {
        audioListener = GetComponent<AudioListener>();
        if (audioListener != null)
        {
            StartCoroutine(ResetAudioListener());
        }
    }

    IEnumerator ResetAudioListener()
    {
        yield return new WaitForEndOfFrame();
        audioListener.enabled = false;
        yield return new WaitForEndOfFrame();
        audioListener.enabled = true;
    }
}