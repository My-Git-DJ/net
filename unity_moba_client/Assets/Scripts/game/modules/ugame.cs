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

    public void save_uinfo(UserCenterInfo uinfo)
    {
        this.unick = uinfo.unick;
        this.uface = uinfo.uface;
        this.usex = uinfo.usex;
        this.uvip = uinfo.uvip;
    }
}
