using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using gprotocol;

// 
public class ugame : UnitySingletom<ugame> {
    public string unick = null;
    public int uface = 0;
    public int usex = 0;
    public int uvip = 0;
    public bool is_guest = false;   //是不是 游客

    public void save_uinfo(UserCenterInfo uinfo, bool is_guest)
    {
        this.unick = uinfo.unick;
        this.uface = uinfo.uface;
        this.usex = uinfo.usex;
        this.uvip = uinfo.uvip;
        this.is_guest = is_guest;
    }
}
