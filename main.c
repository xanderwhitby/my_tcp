#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <unistd.h>
#define PORT 8080


int main(int argc, char argv[]){
// get the client protocol 
  int protocol = 0;
  int socketfd;
  int backlog, buffer[1024];
  int flags;

  char client_connect[100] = "Client Connected";
  char message_client[100] = "Message Written To Client";
  char message_to_client[100] = "Congrats! You connected tcp";
  
  socketfd = socket(AF_LOCAL, SOCK_STREAM, protocol);
  if (socketfd == -1){
    printf("%s", "Socket not made");
  }

  int bind(int socketfd,  const struct sockaddr *addr, socklen_t addrlen);

  listen(socketfd, backlog);
  
  int accept(socketfd, struct sockaddr *_Nullable restrict addr, socketlen_t *_Nullable restrict addrlen);
  printf("%s\n", client_connect); 

  int recv(socketfd, *buf, len, flags);

  int send(socketfd, *buf, len, flags);
  printf("%s\n", message_client);


  

  int close(socketfd);
    return 0;
}
