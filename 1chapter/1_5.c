#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#define MAXLINE 100
int main(void)
{
  char buf[MAXLINE];
  pid_t pid;
  int status;
  printf("%%");
  while(fgets(buf,MAXLINE,stdin)!=NULL)
  {
  	if(buf[strlen(buf)-1]=='\n')
  	{
  		buf[strlen(buf)-1]=0;
  	}
  		
  	if((pid=fork())<0)
  	{
  		printf("error fork()");
  	}
  	else if(pid==0)
  	{
  		execlp(buf,buf,(char*)0);
  		printf("child process");
  		exit(127);
  	}
  	if((pid=waitpid(pid,&status,0))<0)
  		printf("error");
  	printf("%%");
  }
  exit(0);
  
 }
