using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class TypeWriterController : MonoBehaviour
{
    private TextMeshProUGUI myText;

    public float delay = 0.1f;
    private string currText = "";


    // Start is called before the first frame update
    private void Start()
    {

    }

    // Update is called once per frame
    private void Update()
    {

    }

    public IEnumerator SetText(string textStr)
    {
        myText = GetComponentInChildren<TextMeshProUGUI>();
        for(int i = 0;i < textStr.Length; i++)
        {
            currText = textStr.Substring(0,i);
            myText.text = currText;
            yield return new WaitForSeconds(delay);
        }
    }
}
