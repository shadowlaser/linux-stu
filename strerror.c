#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<errno.h>
#include<string.h>
int main(int argc,char* argv[])
{	
	fprintf(stderr,"emacs : %s \n",strerror(EACCES));
	errno=ENOENT;
	printf("errno= %d\n",errno);
	perror(argv[0]);
	return 0;
}
