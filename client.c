#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <unistd.h>
#define PORT 8080


int main(){
  // this function should get package and send it to the server
  int protocol = 0;
  int clientfd;
  char payload[100] = "Send Message To Server";
  
  const struct tcpPacket{
    int;
    payload;
  }
  clientfd = socket(AF_LOCAL, SOCK_STREAM, protocol);
  if (clientfd = -1){
    printf("%s\n", "Client socket not created");
  }  

  int connect(clientfd, const struct sockaddr *addr, socket_len addr_len);
  printf("%s\n", client_connect);

  int send(clientfd, *buf, len, flags);
  printf("%s\n", client_message);

  int recv( clientfd, *buf, len, flags);
  printf("%s\n", message_received);
  printf("%s\n", read_message);

  int close(clientfd); 


  return 0;
}

