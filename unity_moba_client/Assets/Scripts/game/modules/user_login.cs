using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using gprotocol;

public class user_login : Singletom<user_login> {

    void on_guest_login_return(cmd_msg msg)
    {
        GuestLoginRes res = proto_man.protobuf_deserialize<GuestLoginRes>(msg.body);
        if (res == null)
        {
            return;
        }

        if (res.status != Respones.OK)
        {
            Debug.Log("Guest login status: " + res.status);
            return;
        }

        UserCenterInfo uinfo = res.uinfo;
        Debug.Log(uinfo.unick + " " + uinfo.usex);
        event_manager.Instance.dispatch_event("login_success", null);
    }

    void on_auto_server_return(cmd_msg msg)
    {
        switch (msg.ctype)
        {
            case (int)Cmd.eGuestLoginRes:
                this.on_guest_login_return(msg);
                break;
        }
    }

    public void init()
    {
        network.Instance.add_service_listener((int)Stype.Auth, this.on_auto_server_return);
    }

    public void guest_login()
    {
        string g_key = utils.reand_str(32);
        g_key = "FFNBq2d152SexhdspIWf38IURrKNSqwh";
        Debug.Log("g_key = " + g_key);

        GuestLoginReq req = new GuestLoginReq();
        req.guest_key = g_key;

        network.Instance.send_protobuf_cmd((int)Stype.Auth, (int)Cmd.eGuestLoginReq, req);
    }
}
