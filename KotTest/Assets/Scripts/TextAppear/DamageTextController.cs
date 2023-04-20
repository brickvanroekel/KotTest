using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class DamageTextController : MonoBehaviour
{
    private TextMeshProUGUI myText;

    [SerializeField]
    private float moveAmt;

    [SerializeField]
    private float moveSpeed;

    private Vector3[] moveDirs;
    private Vector3 thisMoveDir;

    private bool canMove = false;

    // Start is called before the first frame update
    private void Start()
    {
        moveDirs = new Vector3[]{
            transform.up
        };
        thisMoveDir = moveDirs[Random.Range(0, moveDirs.Length)];

    }

    // Update is called once per frame
    private void Update()
    {
        if(canMove) transform.position = Vector3.MoveTowards(transform.position, transform.position + thisMoveDir, moveAmt * (moveSpeed*Time.deltaTime));
    }
    
    public void SetTextAndMove(string textStr){
        myText = GetComponentInChildren<TextMeshProUGUI>();
        myText.text = textStr;
        canMove = true;
    }
}
