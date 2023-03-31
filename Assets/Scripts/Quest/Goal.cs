using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Goal : MonoBehaviour
{
    public string Name { get; private set; }
    public string Description;
    public QuestController QuestController { get; private set; }

    private void Start()
    {
        Name = this.gameObject.name;
    }

    public void setQuestController(QuestController questController)
    {
        this.QuestController = questController;
    }

    public void CompleteGoal()
    {
        QuestController.Instance.CompleteGoal();
    }
}
