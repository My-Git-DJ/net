using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using gprotocol;

// 
public class ugame : UnitySingletom<ugame> {
    public string unick = "";
    public int uface = 1;
    public int usex = 0;
    public int uvip = 0;
    public bool is_guest = false;   //是不是 游客
    public string guest_key = null;

    public void save_uinfo(UserCenterInfo uinfo, bool is_guest, string guest_key = null)
    {
        this.unick = uinfo.unick;
        this.uface = uinfo.uface;
        this.usex = uinfo.usex;
        this.uvip = uinfo.uvip;
        this.is_guest = is_guest;
        this.guest_key = guest_key;
    }

    public void save_edit_profile(string unick, int uface, int usex)
    {
        this.unick = unick;
        this.uface = uface;
        this.usex = usex;
    }
}
