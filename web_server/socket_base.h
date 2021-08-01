#ifndef socket_base_h
#define socket_base_h
#include <netinet/in.h>
#include <sys/socket.h>

#include <iostream>

class SocketBase {
public:
    SocketBase(int domain, int service, int protocol, int port, u_long interface);

    // Force client to setup this
    virtual int initiate_connection(int sock, struct sockaddr_in address) = 0;
    void check_connection(int);
    int get_sock();
    int get_connection();
    void set_connection(int domain);
    struct sockaddr_in get_address();

private:
    int sock_;
    int connection_;
    struct sockaddr_in address_;
};

#endif /* socket_base_h */