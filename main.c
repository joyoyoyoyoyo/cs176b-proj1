//
// Created by angel on 1/24/17.
//
//#include <netinet/in.h>
//#include "sys/socket.h" // depedency for
#include <unistd.h>
#include <stdlib.h>

struct argument {
    const char* name;
};

// class of arguments
struct optional_argument {
    const char* hostname;
}; 

struct snc {
    unsigned port; // required (must be last argument)
    int udp_flag;
    int listen_flag;
    //const boolean udp_flag;
    //const boolean listen_flag;
    char* source_ip_address;
    char* hostname;
    //const execute(); //?
    //const snc();//?
};

int main(int argc, char**argv) {
    int opt;
    char listen_arg;
    while ( (opt = getopt(argc, argv, "l:")) != -1 ) {
        switch (opt) {
            case 'l':
                listen_arg = opt;
                struct snc command;
                command.listen_flag = 'l';
                listen_flag = 'l';
                break;
            case 'u':

            default:
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
