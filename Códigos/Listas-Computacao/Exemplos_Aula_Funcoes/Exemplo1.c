#include <stdio.h>
int somaEsq (int x, int y) {
 x = x + 1;
 y = y + 1;
 return (x + y);
}
int main () {
 int a, b;
 a=10;
 b=5;
 printf ("Soma de a e b: %d\n", a + b);
 printf ("Soma de x e y: %d\n", somaEsq(a, b));
 printf ("a: %d\n", a);
 printf ("b: %d\n", b);
 return 0;
}
