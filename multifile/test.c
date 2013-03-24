#include <stdio.h>
#include "test.h"
char add1[]="www.baidu.com\n";
char add2[]="www.google.com.hk\n";
int i=10;
extern void test1();
extern void test2();

int main()
{
  test1();
  printf("ok\n");
  test2();
  printf("%d",i);
  return 0;
}