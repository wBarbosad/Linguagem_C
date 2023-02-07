#include <stdio.h>
int leNumero(){
 int n;
 printf("Digite um numero:");
 scanf("%d",&n);
 return n;
 printf("bla bla bla bla");
}
int soma(int a, int b){
 return (a+b);
}
int main(){
 int x1, x2;
 x1 = leNumero();
 x2 = leNumero();
 printf("Soma e: %d\n",soma(x1,x2));
}
