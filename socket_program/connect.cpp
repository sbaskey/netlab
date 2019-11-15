// try to understand the "struct sockaddr_in server;" structure

#include <bits/stdc++.h>
#include <sys/socket.h>
#include <arpa/inet.h>
using namespace std;

int main()
{
    int socket_des;
    struct sockaddr_in server;
    socket_des=socket(AF_INET,SOCK_STREAM,0);
    if(socket_des==-1)
      cout<<"socket could not be created";

    //to connect to an remote server we need server ip address and port number to connect

    server.sin_addr.s_addr = inet_addr("74.125.235.20");
	server.sin_family = AF_INET;
	server.sin_port = htons(80);
    if (connect(socket_des, (struct sockaddr *)&server , sizeof(server)) < 0)
	{
		cout<<"connection error"<<endl;
		return 1;
	}

return 0;

}