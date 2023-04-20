using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DamageInteraction : MonoBehaviour
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
        GameObject newText = Instantiate(textPrefab, this.gameObject.transform.position, Quaternion.identity);
        newText.SetActive(true);
        
        //var text = QuestController.Instance.GetActiveQuest().Dialogue;
        newText.GetComponent<DamageTextController>().SetTextAndMove("Ouch!");
        Destroy(newText.gameObject, textKillTime);

        //Kill target
        Destroy(this.gameObject);

        QuestController.Instance.Invoke("CompleteGoal", 3);

    }
}
