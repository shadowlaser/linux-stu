 
#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	int i=100;
	
	auto func=[]{char* kk="hello";printf("%s\n", kk);};
	func();
	return 0;
}