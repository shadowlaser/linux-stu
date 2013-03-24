#include <stdio.h>
#include <setjmp.h>

static void f1(int,int,int,int);
static void f2();

static jmp_buf jmpbuffer;
static int globval;

int main(void)
{
  int autoval;
  register int regival;
  volatile int volaval;
  static int statval;
  globval=1;
  autoval=2;
  regival=3;
  volaval=4;
  statval=5;
  
  if(setjmp(jmpbuffer)!=0){
    printf("globval=%d,autoval=%d,volaval=%d,statval=%d\n",globval,autoval,volaval,statval);
    exit(0);
  }
  
  globval=85;
  autoval=86;
  regival=87;
  volaval=88;
  statval=89;
  f1(globval,autoval,volaval,statval);
  exit(0);
}

void f1(int i,int j,int k,int l)
{
  printf("in f1()\n");
  printf("globval=%d,autoval=%d,volaval=%d,statval=%d\n",i,j,k,l);
  f2();
}
void f2()
{
  longjmp(jmpbuffer,1);
}

