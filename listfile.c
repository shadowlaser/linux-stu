#include <dirent.h>
#include <stdio.h>

int main(int argc,char* argv[])
{
  DIR *dp;
  struct dirent *dirp;
  if (argc != 2)
  {
	printf("ok parameters to short");
	exit(0);
   }
  if ((dp = opendir(argv[1])) == NULL)
    printf("can't open path");
  while ((dirp = readdir(dp)) != NULL)
    printf("%s\n",dirp->d_name);
  return 0;
}
