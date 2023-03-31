using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class LookAtPlayer : MonoBehaviour
{
    //public GameObject playerCamera;
   
    
    private void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        transform.LookAt(Camera.main.transform);

    }
}
