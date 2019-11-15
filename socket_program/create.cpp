#include <bits/stdc++.h>
#include <sys/socket.h>
using namespace std;


int main(int argc,char *argv[])
{

    /*cout <<argc<<endl;
    cout <<argv[0]<<' '<<argv[1]<<' '<<argv[2];
    int x=stoi(argv[1]);
    int y=stoi(argv[2]);
    //cout<<x<<y;*/


    //create socket
    int socket_desc;
    socket_desc=socket(AF_INET,SOCK_STREAM,0);
    //AF_INET for ip version 4
    //0 for IP protocol
    //SOCK_STEAM for Tcp,SOCK_DGRAM for udp server
    if(socket_desc==-1) 
         cout<<"socket could not be created";

    return 0;
}