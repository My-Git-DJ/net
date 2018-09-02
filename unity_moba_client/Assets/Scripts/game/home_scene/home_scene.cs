using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class home_scene : MonoBehaviour {

    public Text unick;
    public Image header = null;
    public Sprite[] uface_img;

    public GameObject uinfo_dlg_prefab;

	// Use this for initialization
	void Start () {
        event_manager.Instance.add_event_listener("sync_uinfo", this.sync_uinfo);
        this.sync_uinfo("sync_uinfo", null);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    void OnDestory()
    {
        event_manager.Instance.remove_event_listener("sync_uinfo", this.sync_uinfo);
    }

    public void on_uinfo_click()
    {
        GameObject uinfo_dlg = GameObject.Instantiate(this.uinfo_dlg_prefab);
        uinfo_dlg.transform.SetParent(this.transform, false);
    }

    void sync_uinfo(string name, object udata)
    {
        if (this.unick != null)
        {
            this.unick.text = ugame.Instance.unick;
        }

        if (header != null)
        {
            this.header.sprite = this.uface_img[ugame.Instance.uface - 1];
        }
    }


}
