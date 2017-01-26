//
// Created by angel on 1/24/17.
//
//#include <netinet/in.h>
#include "sys/socket.h" // depedency for
#include <unistd.h>

struct argument {
  const char* name;
};

// class of arguments
struct optional_argument {
const char* hostname;
}; 

struct snc {1
  const unsigned int port; // required (must be last argument)
  const boolean udp_flag;
  const boolean listen_flag;
  const char* source_ip_address;
  const char* hostname;
  const execute(); //?
  const snc();//?
};

int main(int argc, const char* argv[]) {
  
  // is there a difference between '' and "" in C?
  while ( (opt = getopt(arg, argv, "l:")) != -1 ) {
    switch (opt) {
    case 'l':
      // Expect A
      // Expect B
      // Expect C
    default: // parse port
    }
  }

  //int hostname;
  //int port;
  //struct sockaddr_in socket;

}
