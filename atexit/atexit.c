#include <stdio.h>
#include <stdlib.h>
static void func1();
static void func2();
int  main(int argc, char* argv[])
{
	atexit(func2);
	atexit(func1);
	atexit(func1);
	printf("main func done!\n");
	return(0);
}

void  func1()
{
	printf("func1 exit handler\n");
}
void func2()
{
	printf("func2 exit handler\n");
}
