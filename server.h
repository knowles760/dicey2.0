#ifndef SERVER_H
#define SERVER_H

#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <iostream>
#include <fstream>

#include "packet.h"

#define PORT_NO 10023
#define PACKET_SIZE 512
#define PACKET_DATA_SIZE 507
#define WINDOW_SIZE 16

namespace dicey2 {
	struct sockaddr_in addr1;
	struct sockaddr_in addr2;
	socklen_t addr2Len = sizeof(addr2);
	int rlen;
	int skt;
	int expectedSeq = 0;
	unsigned char buffer[PACKET_DATA_SIZE];
}

#endif