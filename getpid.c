#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main(int argc,char* argv[])
{
	printf("current pid is %d\n",getpid());
	return 0;
}
