
using UnityEngine;
using UnityEngine.UI; 

public class TimerScript : MonoBehaviour
{
    public float totalTime = 300f; 
    private float remainingTime;
    public Text timerText; 

    void Start()
    {
        remainingTime = totalTime;
    }

    void Update()
    {
        if (remainingTime > 0)
        {
            remainingTime -= Time.deltaTime;
            UpdateTimerDisplay();
        }
        else
        {
            TimerEnded();
        }
    }

    void UpdateTimerDisplay()
    {
        if (timerText != null)
        {
            int minutes = Mathf.FloorToInt(remainingTime / 60);
            int seconds = Mathf.FloorToInt(remainingTime % 60);
            timerText.text = string.Format("{0:00}:{1:00}", minutes, seconds);
        }

    }

    void TimerEnded()
    {
      CharacterAnimationScript cas =  GetComponent<CharacterAnimationScript>();
        cas.die(); 
    }
}