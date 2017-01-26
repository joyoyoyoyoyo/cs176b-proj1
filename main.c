//
// Created by angel on 1/24/17.
//
//#include <netinet/in.h>
//#include "sys/socket.h" // depedency for
#include "unistd.h"

struct argument {
  const char* name;
};

// class of arguments
struct optional_argument {
  const char* hostname;
}; 

struct snc {
  const unsigned int port; // required (must be last argument)
  const int udp_flag;
  const int listen_flag;
  //const boolean udp_flag;
  //const boolean listen_flag;
  const char* source_ip_address;
  const char* hostname;
  //const execute(); //?
  //const snc();//?
};

int main(int argc, char**
 argv) {
  int opt;

  while ( (opt = getopt(argc, argv, "l:")) != -1 ) {
    switch (opt) {
    case 'l':
      break;
      // Expect A
      // Expect B
      // Expect C
      //default: // parse port
    }
  }

  //int hostname;
  //int port;
  //struct sockaddr_in socket;

}
