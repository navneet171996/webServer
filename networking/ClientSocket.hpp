#ifndef ClientSocket_hpp
#define ClientSocket_hpp

#include <stdio.h>
#include <CustomSocket.hpp>

namespace ndk{
    class ClientSocket: public CustomSocket{
        public:
            ClientSocket(int domain, int service, int protocol, int port, u_long interface)
             : CustomSocket(domain, service, protocol, port, interface){}

            int connectToNetwork(int sock, struct sockaddr_in address);
    };
}
#endif