#ifndef socket_binder_h
#define socket_binder_h

#include "socket_base.h"

class SocketBinder : public SocketBase {
public:
    SocketBinder(int domain, int service, int protocol, int port, u_long interface);
    int initiate_connection(int sock, struct sockaddr_in address);
};

#endif /* socket_binder_h */