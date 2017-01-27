//
// Created by angel on 1/24/17.
//
//#include <netinet/in.h>
//#include "sys/socket.h" // depedency for
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

struct argument {
    const char* name;
};

// class of arguments
struct optional_argument {
    const char* hostname;
}; 

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

int main(int argc, char* argv[]) {
    int opt;
    struct snc command;
    while ( (opt = getopt(argc-1, argv, "lus:")) != -1 ) {
        switch (opt) {
            case 'l':
                command.listen_flag = 1;
                command.source_ip_address = optarg;
                break;
            case 'u':
                command.udp_flag = 1;
                break;
            case 's':
                command.source_ip_address_flag = 1;
                command.source_ip_address = optarg;
                // check the syntax
                break;
            default:
                break;
            // Expect A
            // Expect B
            // Expect C
            //default: // parse port
        }
    }

    // retrieve port number

    // check error
    command.port = atoi(argv[argc - 1]);

//    for (int index = 0; index < argc; index++)
//        printf("argv: %s\n", argv[index]);

    //int hostname;
    //int port;
    //struct sockaddr_in socket;

    }
