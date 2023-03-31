using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class QuestController : MonoBehaviour
{
    public List<Quest> QuestList;
    public List<Goal> GoalList;
    public int currentQuestIndex = 0;

    public static QuestController Instance;

    private void Start()
    {
        QuestController.Instance = this;
        /*for (int i = 0;i < GoalList.Count; i++) {
            GoalList[i].setQuestController(this);
        }*/
        setGoalsActive();
    }

    private void setGoalsActive()
    {
        for (int i = 0; i < GoalList.Count; i++)
        {
            GoalList[i].gameObject.SetActive(this.QuestList[currentQuestIndex].Goal.Name.ToString().Equals(GoalList[i].Name));
        }
    }

    public void CompleteGoal()
    {
        currentQuestIndex++;
        SetNextGoalActive();
    }

    private void SetNextGoalActive()
    {
        GoalList[currentQuestIndex].gameObject.SetActive(true);
    }

    public Quest GetActiveQuest()
    {
        return this.QuestList[currentQuestIndex];
    }

    public Goal GetCurrentGoal()
    {
        return this.GoalList[currentQuestIndex];
    }
}
