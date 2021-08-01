#include "socket_base.h"

SocketBase::SocketBase(int domain, int service, int protocol, int port, u_long interface) {
    address_.sin_family = domain;
    // convert byte order suitable for network using htons,
    // by default byet order is configured for host system
    address_.sin_port = htons(port);

    // set interface where the socket is running - IP address of the current system
    address_.sin_addr.s_addr = htons(interface);

    // Establish socket
    sock_ = socket(domain, service, protocol);
    check_connection(sock_);
}

void SocketBase::check_connection(int conn_status) {
    if (conn_status < 0) {
        perror("Failed to connect");
        exit(EXIT_FAILURE);
    }
}

int SocketBase::get_sock() {
    return sock_;
}

int SocketBase::get_connection() {
    return connection_;
}

struct sockaddr_in SocketBase::get_address() {
    return address_;
}

// Setters
void SocketBase::set_connection(int domain) {
    connection_ = domain;
}
