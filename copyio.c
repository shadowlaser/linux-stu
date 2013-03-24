#include<stdio.h>
#include<unistd.h>

int main(int argc,char* argv[])
{
	int c;
	while((c= getc(stdin)) != EOF)
	{
		if(putc(c,stdout)==EOF)
			printf("error\n");
	}
	if(ferror(stdin))
		printf("ferror");
	return 0;
}
