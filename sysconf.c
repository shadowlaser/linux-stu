#include "pu.h"

int main(int argc,char* argv[])
{	
	printf("%ld\n",sysconf(_SC_CLK_TCK));
	return 0;
}
