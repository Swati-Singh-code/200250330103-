 struct packet  
    { 
    int srcID;
    long int data;
    
    };
struct packet pkt ;   

char buffer[MAX_PACKET_SIZE];
 struct packet *pkt = (struct packet *) buffer;
 char *payload = buffer + sizeof(struct packet);
 int packet_size;  /* should be computed as header size + payload size */

 pkt->srcID = 01;
 packet_size = sizeof(struct packet) /* + payload size */ ;

 send(sockfd, pkt, packet_size, 0)