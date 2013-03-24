#include <stdio.h>
#include <unistd.h>
#define BUFSIZE 4096
void main(int argc,char* argv[])
{
	int n;
	int buf[BUFSIZE];
	while((n = read(STDIN_FILENO,buf,BUFSIZE)) >0)
		if (write(STDOUT_FILENO,buf,n) !=n ){
			printf("ok\n");
			exit(0);
		}
	if(n<0)
		printf("read error");
}
