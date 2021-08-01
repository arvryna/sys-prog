
#include "socket_binder.h"

SocketBinder::SocketBinder(int domain, int service, int protocol, int port, u_long interface)
    : SocketBase(domain, service, protocol, port, interface) {
    set_connection(initiate_connection(get_sock(), get_address()));
    check_connection(get_connection());
}

int SocketBinder::initiate_connection(int sock, struct sockaddr_in address) {
    return bind(sock, (struct sockaddr *)&address, sizeof(address));
}