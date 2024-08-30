#include "ServerSocket.hpp"

int ndk::ServerSocket::connectToNetwork(int sock, struct sockaddr_in address){
    return bind(sock, (struct sockaddr *)&address, sizeof(address));
}