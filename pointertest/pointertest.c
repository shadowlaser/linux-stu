#include <stdio.h>

void main()
{
    int *p;
    int a[2]={1,2};
    p=a;
    printf("p=%d\n",p);
    printf("*p=%d\n",*p);
    printf("&p[1]=%d\n",&p[1]);
    printf("p[1]=%d\n",p[1]);
}
