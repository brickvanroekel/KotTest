using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class TextAppearInteraction : MonoBehaviour
{

    [SerializeField]
    private GameObject textPrefab;

    [SerializeField]
    private float textKillTime;


    Ray ray;
    RaycastHit hit = new RaycastHit();
    // Start is called before the first frame update
    void Start()
    {
        

    }

    // Update is called once per frame
    void Update () { 
        for (int i = 0; i < Input.touchCount; ++i) {
            if (Input.GetTouch(i).phase.Equals(TouchPhase.Began)) {
                // Construct a ray from the current touch coordinates
                ray = Camera.main.ScreenPointToRay(Input.GetTouch(i).position);
                if (Physics.Raycast(ray, out hit)) {
                    hit.transform.gameObject.SendMessage("OnMouseDown");
                }
            }
        }
    }

    public void OnMouseDown() {
        // Set position of text above tapped object
        var currObjPos = this.gameObject.transform.position;
        currObjPos.y += 0.5f;
        var textPos = currObjPos;

        

        // Instatiating the textprefab with right dialogue
        GameObject newText = Instantiate(textPrefab, textPos, Quaternion.identity);
        newText.SetActive(true);
        var text = QuestController.Instance.GetActiveQuest().Dialogue;
        StartCoroutine(newText.GetComponent<TypeWriterController>().SetText(text));

        Destroy(newText.gameObject, textKillTime);

        // setting new quest
        QuestController.Instance.Invoke("CompleteGoal",5);
        //DebugDrawer.instance.HandleLog("", "", LogType.Error);
    }


    IEnumerator CompleteGoalAfterTime(float time)
    {
        yield return new WaitForSeconds(time);
    }
}
