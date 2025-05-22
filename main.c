#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <unistd.h>
#define PORT 8080


int main(){
// get the client protocol 
  int protocol = 0;
  int socketfd;
  int backlog, buffer[1024];
  int flags;
  
  socketfd = socket(AF_UNIX, SOCK_STREAM, protocol);
  if (socketfd == -1){
    printf("%s", "Socket not made");
  }

  int bind(int socketfd,  const struct sockaddr *addr, socketlen_t addrlen);

  int listen(socketfd, backlog);
  
  int accept(socketfd, struct sockaddr *_Nullable restrict addr, socketlen_t *_Nullable restrict addrlen);

    return 0;

}

