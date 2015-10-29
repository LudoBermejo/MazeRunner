using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class EndLevel : MonoBehaviour {

	public Button againBtn;
	
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame 
	void Update () {
		
	}
	
	void OnCollisionEnter (Collision col)
	{
		Debug.Log (col.gameObject);
		if(col.gameObject.tag == "Player")
		{
			
			againBtn.enabled = false;
			againBtn.GetComponentInChildren<CanvasRenderer>().SetAlpha(0);
			againBtn.GetComponentInChildren<Text>().color = Color.clear;
		}
	}
}
