#include "CustomSocket.hpp"

ndk::CustomSocket::CustomSocket(int domain, int service, int protocol, int port, u_long interface){
    //Defining the socket address structure
    address.sin_family = domain;
    address.sin_port = htons(port);
    address.sin_addr.s_addr = htonl(interface);

    //Establishing the socket
    sock = socket(domain, service, protocol);

    //Test the socket
    testConnection(sock);

    //Establishing the connection
    connection = connectToNetwork(sock, address);
}

void ndk::CustomSocket::testConnection(int item){
    if(item < 0){
        perror("Failed to connect");
        // exit();
    }
}

int ndk::CustomSocket::getSock(){
    return sock;
}

struct sockaddr_in ndk::CustomSocket::getAddress(){
    return address;
}

int ndk::CustomSocket::getConnection(){
    return connection;
}