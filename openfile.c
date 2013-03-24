#include<unistd.h>
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    if(-1==lseek(STDIN_FILENO,0,SEEK_CUR))
        printf("lseek error\n");
    else
        printf("seek OK\n");
    exit(0);
}
