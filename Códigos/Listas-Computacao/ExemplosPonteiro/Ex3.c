#include <stdio.h>
int main(void) {
 int *mem;
 int num=90;
 mem = &num;
 printf(" %d --- %d", *mem, mem);
 *mem = num;
 printf("\n %d --- %d", &num, mem);
 /*mem = num;
 printf("\n %d --- %d", *mem, mem);
 return 0;*/
}
