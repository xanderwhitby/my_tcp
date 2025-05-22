#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <unistd.h>


int makeProtocol(){

  int protocol = 0;
  int socketfd;
  
  socketfd = socket(AF_UNIX, SOCK_STREAM, protocol);
  if (socketfd == -1){
    printf("%s", "Socket not made");
  }

  int bind(int socketfd, const struct sockaddr *addr, socketlen_ addrlen);
  


}


int main(){
// get the client protocol 
    return 0;


}

