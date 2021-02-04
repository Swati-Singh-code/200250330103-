#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <linux/in.h>

int sfd;
int cfd;

struct sockaddr_in saddr;
struct sockaddr_in caddr;

int len;
unsigned char buff[1024]

int main(int argc,char const *argv[])
{
    sfd = socket(AF_INET,SOCK_STREAM,0);

    saddr.sin_family=AF_INET;
    saddr.sin_addr.s_addr=inet_(127.0.0.1)
    saddr.sin_port =htons(5678);

    bind(sfd sockaddr *)&saddr, sizeof(struct
    listen(sfd,4);

    len=sizeof(struct sockaddr_in);
    cfd=accept(sfd,(struct sockaddr *)&caddr, &len);

    read(cfd,buff,1024);
    printf("client sent:%d\n", buff);

    close(sfd);
}

}
