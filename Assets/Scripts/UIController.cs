using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class UIController : MonoBehaviour {

	public Button againBtn;
	public Text timer;

	// Use this for initialization
	void Start () {
		againBtn.enabled = false;
		againBtn.GetComponentInChildren<CanvasRenderer>().SetAlpha(0);
		againBtn.GetComponentInChildren<Text>().color = Color.clear;

	}
	
	// Update is called once per frame
	void Update () {
		timer.text = Time.realtimeSinceStartup.ToString("#.00");
	}

	void OnTriggerEnter(Collider other) {
		againBtn.enabled = true;
		againBtn.GetComponentInChildren<CanvasRenderer>().SetAlpha(1);
		againBtn.GetComponentInChildren<Text>().color = Color.black;

	}

	public void onClickReplay() {
		againBtn.enabled = false;
		againBtn.GetComponentInChildren<CanvasRenderer>().SetAlpha(0);
		againBtn.GetComponentInChildren<Text>().color = Color.clear;


	}


}
