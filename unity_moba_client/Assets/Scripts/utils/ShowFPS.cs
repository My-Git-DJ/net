using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShowFPS : MonoBehaviour {

    //固定的一个时间间隔
    private float time_delta = 0.5f;
    //Time.realtimeSinceStartup: 指从启动到现在运行的时间,单位(s)
    private float prev_time = 0.0f;//上一次统计FPS的时间

    private float fps = 0.0f;//计算出来的fps
    private float i_frames = 0;//累计刷新的帧数

    //GUI
    private GUIStyle style;

    void Awake()
    {
        Application.targetFrameRate = 60;
    }

	// Use this for initialization
	void Start () {
        this.prev_time = Time.realtimeSinceStartup;
        this.style = new GUIStyle();
        this.style.fontSize = 15;
        this.style.normal.textColor = new Color(255, 255, 255);
    }

	void OnGUI()
    {
        GUI.Label(new Rect(0, 0, 200, 200), "FPS: " + this.fps.ToString("f2"));
    }

	// Update is called once per frame
	void Update () {
        this.i_frames++;
        if (Time.realtimeSinceStartup >= this.prev_time + this.time_delta)
        {
            this.fps = this.i_frames / (Time.realtimeSinceStartup - this.prev_time);
            this.prev_time = Time.realtimeSinceStartup;
            this.i_frames = 0;//重新累计FPS
        }
	}
}
