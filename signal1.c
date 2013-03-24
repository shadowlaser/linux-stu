#include "pu.h"
#define MAXLINE 1024
static void sig_int(int);
int main(int argc,char* argv[])
{	
	char buf[MAXLINE];
	pid_t pid;
	int status;
	if(signal(SIGINT,sig_int)== SIG_ERR)
	{
		//printf("bind error!\n");
		fprintf(stderr,"error! %s\n",strerror(errno));
	}
	while(fgets(buf,MAXLINE,stdin)!=NULL)
	{
		if(buf[strlen(buf)-1] == '\n')
			buf[strlen(buf)-1]=0;
		if((pid=fork())<0){
			fprintf(stderr,"error! %s\n",strerror(errno));
		}else if(pid==0){
			execlp(buf,buf,(char*)0);
			return 0;
		}
		if((pid = waitpid(pid,&status,0))<0)
			fprintf(stderr,"error! %s\n",strerror(errno));
	}
	return 0;
}

void sig_int(int signo)
{
	printf("interrupt!!\n");
}
