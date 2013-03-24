#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <signal.h>
#define MAXLINE 256
#define err_sys printf
#define err_ret printf
static void sig_int(int);
int main(void)
{
    if(SIG_ERR==signal(SIGINT,sig_int))
        err_sys("install signal function error\n");
    char buf[MAXLINE];
    pid_t pid;
    int status;
    printf("%%-------------------------\n");
    while(fgets(buf,MAXLINE,stdin)!=NULL)
    {
        if('\n' == buf[strlen(buf)-1])
            buf[strlen(buf)-1]=0;
        if((pid=fork())<0)
            err_sys("fork error");
        else if(0==pid)
        {
            execlp(buf,buf,(char*)0);
            err_ret("couldn't execute :%s",buf);
            exit(127);
        }

    if(pid=waitpid(pid,&status,0)<0)
        err_sys("waitpid error\n");
    printf("---------------end\n");
    }
    exit(0);
}

void sig_int(int signo)
{
    printf("wow interrupt\n");
}
