#include <stdio.h>
int a,b=1;

int main(int argc, char const *argv[])
{
	
	push('a');
	push('b');
	push('c');
	while(!is_empty())
		putchar(pop());
	putchar('\n');
	return 0;
}