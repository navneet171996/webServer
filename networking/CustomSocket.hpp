#ifndef CustomSocket_hpp
#define CustomSocket_hpp

#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>

namespace ndk{
    class CustomSocket{
        private:
            int sock;
            struct sockaddr_in address;
            int connection;
        public:
            CustomSocket(int domain, int service, int protocol, int port, u_long interface);
            virtual int connectToNetwork(int sock, struct sockaddr_in address) = 0;
            void testConnection(int sock);

            int getSock();
            struct sockaddr_in getAddress();
            int getConnection();

            void setConnection(int con);
    };
}
#endif