//
// Created by angel on 1/27/17.
//
#include "netcat_server.h"
#include <sys/socket.h>
#include <uni/unistd.h>
#include <trsocket.h>

struct snc {
  int port; // required (must be last argument)
  int udp_flag;
  int listen_flag;
  int source_ip_address_flag;
  //const boolean udp_flag;
  //const boolean listen_flag;
  char* source_ip_address;
  char* hostname;
  //const execute(); //?
  //const snc();//?
};

/**
 * type: specifies the server type (either UDP or TCP)
 * default behavior specifies a TCP server should be spawned
 */
void spawnServer() {
  struct sockaddr_in socket;
  socket();
}

const struct sockaddr_in initializeSocket(struct sockaddr_in socket, struct snc snc_command) {
  socket.sin_addr = snc_command.;
  socket.sin_family;
  socket.sin_port;
  socket.sin_zero;
};

void spawnTCPServer();

void spawnUPServer();

