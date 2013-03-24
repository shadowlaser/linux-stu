#include <stdio.h>
#include <unistd.h>

extern char** environ;
int main(void)
{
  unsigned i=0;
  for(;environ[i]!=NULL;i++)
    printf("environ[%d]=%s\n",i,environ[i]);
  return(0);
}