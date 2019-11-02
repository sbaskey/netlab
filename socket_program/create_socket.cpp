#include <stdio.h>
#include <sys/socket.h>
#include <bits/stdc++.h>
using namespace std;



//part1 -creating a tcp socket
/*int main()
{
    int socket_des;
    //address family AF_INET ---ip v4
    // sock_stream for tcp
    //socket_dgram for udp
    //ip protocol -0
    socket_des=socket(AF_INET,SOCK_STREAM,0);
    if(socket_des==-1)
      cout<<"socket could not be created"<<endl;
    cout<<socket_des;

  return 0;
}*/

//part-2 connecting to a server

//structure for sockaddr_in server
// IPv4 AF_INET sockets:
/*struct sockaddr_in {
    short            sin_family;   // e.g. AF_INET, AF_INET6
    unsigned short   sin_port;     // e.g. htons(3490)
    struct in_addr   sin_addr;     // see struct in_addr, below
    char             sin_zero[8];  // zero this if you want to
};

struct in_addr {
    unsigned long s_addr;          // load with inet_pton()
};

struct sockaddr {
    unsigned short    sa_family;    // address family, AF_xxx
    char              sa_data[14];  // 14 bytes of protocol address
};*/
int main()
{

}
