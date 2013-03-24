#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main(int argc,char* argv[])
{	
	printf("uid = %d\t gid = %d\n",getuid(),getgid());
	return 0;
}
