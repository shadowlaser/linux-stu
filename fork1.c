#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
int main(int argc,char* argv[])
{	
	int status;
	pid_t pid;
	if((pid=fork())<0)
	{
		printf("error\n");
	}else if(pid==0)
	{
		printf("child %d\n",getpid());	
		return 0;
	}
	printf("parent %d\n",getpid());
	if( (pid=waitpid(pid,&status,0)) < 0)
	{
		printf("error2\n");
	}
	return 0;
}
