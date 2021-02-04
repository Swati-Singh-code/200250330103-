#include <time.h>
#include <stdlib.h>
#include <stdio.h>

void printRandoms(int lower_limit,int upper_limit,int count)

{
    int i;
    for(i=0; i<count;i++){
        int n =(rand() %
        
           (upper_limit -lower_limit +1))+ lower_limit;
           printf("%d is the temperature !!",n);
    }
}

    int main()
    {

        int lower_limit =-100, upper_limit = +100,count =1;

        srand(time(0));

        printRandoms(lower_limit, upper_limit,count);

        return 0;
    }
    int cfd;

    struct sockaddr_in saddr;


    int len;
    unsigned char buff[1024];

    int main(int argc ,char const *argv[])

    {
        cfd =socket(AF_INET,SOCK_STREAM,0);
        saddr.sin_family=AF_INET;
        saddr.sin_addr.s=inet_addr();
        saddr.sin_port =htons(5678);

        connect(cfd ,(struct sockaddr *)&saddr, sizeof(struct))

        write(cfd,buff,4);
        printf("sent :%d",buff);

        close(cfd);
    }


















