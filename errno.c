#include <stdio.h>
#include <errno.h>
int main(int argc,char* argv[])
{
    fprintf(stderr,"EACCES: %s\n",strerror(EACCES));
    perror(argv[0]);
    return 0;
}
