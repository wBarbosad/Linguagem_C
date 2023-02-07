#include <stdio.h>
int soma (int a, int b) {
int c;
c = a + b;
return c;
}
int main() {
int res, p=5;
res = soma(4,p);
printf("A soma de 4 e 5: %d", res);
}
