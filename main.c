//
// Created by angel on 1/24/17.
//
#include <netinet/in.h>
#include "sys/socket.h" // depedency for
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <arpa/inet.h>

struct snc {
  unsigned port; // required (must be last argument)
  int udp_flag;
  int listen_flag;
  int source_ip_address_flag;
  char* source_ip_address;
  char* hostname;
  //const execute(); //?
  //const snc();//?
};



int main(int argc, char* argv[]) {

  int opt;
  int num_of_optparams_specified;
  struct snc command;

  while ( (opt = getopt(argc-1, argv, "lus:")) != -1 ) {
    switch (opt) {
      case 'l':
        command.listen_flag = 1;
        ++num_of_optparams_specified;
        break;
      case 'u':
        command.udp_flag = 1;
        ++num_of_optparams_specified;
        break;
      case 's':
        command.source_ip_address_flag = 1;
        command.source_ip_address = optarg; //must be required
        num_of_optparams_specified += 2;
        // check that the syntax follows x.x.x.x
        break;
      default:
        break;
    }
  }
  command.port = atoi(argv[argc - 1]);

  for(int index =0; index < argc; index++)
    printf("argv[%d]:\t%s\n",index, argv[index]);
  struct sockaddr_in *client_in;
  client_in->sin_family = AF_INET; // use IPv4
  client_in->sin_port = htons(command.port);
  inet_aton("63.161.169.137", client_in);
  client_in->sin_addr.s_addr = inet_addr(command.hostname);
  //  inet_aton("63.161.169.137", &myaddr.sin_addr.s_addr);

  int byte_type;
  if (command.udp_flag != 0)
    byte_type = SOCK_DGRAM;
  else
    byte_type = SOCK_STREAM;

  int socketfd = socket(AF_INET, byte_type, 0);
  bind(socketfd, (struct sockaddr *)client_in, sizeof(client_in));
//  struct snc commands = parseCommands(argc,argv);
//  deploy(*commands,commands->port,commands->udp_flag);


}

//void deploy(struct snc simple_nc, unsigned port,int udp_flag) {
//
//
//
////  connect(socketfd, ,)
//
//
//  /**
//   * Base case: -l snc command (UDP server)
//   */
//  createUDPClient();
//}

/**
 * The assumption is that we are working with the [-u], [-l], [port number]
 */
void createUDPClient() {
  //
}

void parseCommands(struct snc command, int argc, char *argv[]) {


}

/**
 * If -l
 */
