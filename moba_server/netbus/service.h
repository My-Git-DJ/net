#pragma once

class session;
struct cmd_msg;

class service {
public:
	virtual bool on_session_recv_cmd(session* s, struct cmd_msg* msg);
	virtual void on_session_disconnect(session* s);
};