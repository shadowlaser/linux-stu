#include <stdio.h>

int main() {

 int i[] = {10, 20, 30, 40, 50};
 int *pa[] = {i, i+2, i+1, i+4, i+3};
 int **p = pa;

 printf("Initial **p = %d\n", **p);
 p++;
 printf("After p++, the **p = %d\n", **p);
 ++*p;
 printf("After ++*p, the **p = %d\n", **p);
 **p++;
 printf("After **p++, the **p = %d\n", **p);
 ++**p;
 printf("After ++**p, the **p = %d\n", **p);

 return 0;
}
