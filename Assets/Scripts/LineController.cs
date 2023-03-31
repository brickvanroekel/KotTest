using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LineController : MonoBehaviour
{
    private LineRenderer lineRenderer;
    public List<Transform> points = new List<Transform>();
    public Transform lastPoints;
    Ray ray;
    RaycastHit hit = new RaycastHit();
    void Awake()
    {
        lineRenderer = GetComponent<LineRenderer>();
    }

    private void makeLine(Transform finalPoint)
    {
        if(lastPoints == null)
        {
            lastPoints = finalPoint;
            points.Add(lastPoints);
        }
        else
        {
            points.Add(finalPoint);
            lineRenderer.enabled= true;
            SetupLine();
        }
    }

    private void SetupLine()
    {
        int pointLength = points.Count;
        lineRenderer.positionCount = pointLength;
        for (int i = 0; i < pointLength; i++)
        {
            lineRenderer.SetPosition(i, points[i].position);
        }
    }

    private void Update()
    {
        for (int i = 0; i < Input.touchCount; ++i)
        {
            if (Input.GetTouch(i).phase.Equals(TouchPhase.Began))
            {
                // Construct a ray from the current touch coordinates
                ray = Camera.main.ScreenPointToRay(Input.GetTouch(i).position);
                if (Physics.Raycast(ray, out hit))
                {
                    makeLine(hit.collider.transform);
                    hit.transform.gameObject.SendMessage("OnMouseDown");
                }
            }
        }
    }
}
