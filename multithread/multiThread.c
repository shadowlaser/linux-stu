#include <pthread.h>
#include <stdio.h>
#include <string.h>
#include <sys/time.h>
#include <unistd.h>
#define MAX 10
pthread_t thread[2];
pthread_mutex_t mut;
int num=0,i;
void * thread1(void *a)
{
    printf("thread1:i am thread1\n");
    for(i=0;i<MAX;i++)
    {
        printf("thread1 number=%d\n",num);
        pthread_mutex_lock(&mut);
        num++;
        pthread_mutex_unlock(&mut);
        sleep(2);   
    }
    printf("thread1 : the main function is waiting for me\n");
    pthread_exit(NULL);
}

void * thread2(void *a)
{
    printf("thread2:i am thread2\n");
    for(i=0;i<MAX;i++)
    {
        printf("thread2 number=%d\n",num);
        pthread_mutex_lock(&mut);
        num++;
        pthread_mutex_unlock(&mut);
        sleep(2);   
    }
    printf("thread2 : the main function is waiting for me\n");
    pthread_exit(NULL);
}
void thread_create(void)
{
    int temp;
    memset(&thread,0,sizeof(thread));
    if((temp=pthread_create(&thread[0],NULL,thread1,NULL))!=0)
        printf("thread 1 fail to create !\n");
    else
        printf("thread 1 created !\n");

    if(0!=(temp=pthread_create(&thread[1],NULL,thread2,NULL)))
        printf("thread 2 fail to create !\n");
    else
        printf("thread 2 created !\n");
}

void thread_wait(void)
{
    if(thread[0]!=0){
    pthread_join(thread[0],NULL);
    printf("thread 1 completed \n");
    }
    if(0!=thread[1])
    {
        pthread_join(thread[1],NULL);
        printf("thread 2 completed \n");
    }

}
int main(int argc,char* argv[])
{
    pthread_mutex_init(&mut,NULL);
    printf("main function,creating thread ...\n");
    thread_create();
    printf("main function,waiting for thread end...\n");
    thread_wait();
    return 0;
}
