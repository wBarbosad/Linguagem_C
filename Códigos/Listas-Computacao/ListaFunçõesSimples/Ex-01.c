#include <stdio.h>
int pot(int a, int b);

int main(){
	int v1, v2, calculo;

	printf("Valor base: ");
	scanf("%d", &v1);

    printf("Valor expoente: ");
	scanf("%d", &v2);

	printf("%d --- %d", v1, v2);
	printf("\n");

	pot(v1,v2);



}
int pot(int a, int b){
	int calculo;

	calculo = a*b;
	printf("Resultado = %d", calculo);
	return calculo;
}
