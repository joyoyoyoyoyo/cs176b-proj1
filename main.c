//
// Created by angel on 1/24/17.
//
//#include <netinet/in.h>
//#include "sys/socket.h" // depedency for
#include <unistd.h>
#include <stdlib.h>
#include "errors/Error.h"
#include "errors/InvalidOrMissingOptionsError.h"
#include "errors/InternalError.h"

struct snc {
  int port; // required (must be last argument)
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
    } // end switch case
  } // end optional command parsing

  command.port = atoi(argv[argc - 1]);
  InvalidOrMissingOptionsError* x;
//  if(icommand.listen_flag = 0)
//  command.hostname =
  //for (int index = 0; index < argc; index++)
  //printf("argv: %s\n", argv[index]);
  //int hostname;
  //int port;
  //struct sockaddr_in socket;
}
