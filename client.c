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
  char client_connect[100] = "Connecting to Server";
  char client_message[100] = "Send Message To Server";
  char message_received[100] = "Message From Server Received";
  char read_message[100];

  clientfd = socket(AF_LOCAL, SOCK_STREAM, protocol);
  int connect(clientfd, const struct sockaddr *addr, socket_len addr_len);


  return 0;
}

