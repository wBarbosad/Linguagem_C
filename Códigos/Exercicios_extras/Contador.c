#include <locale.h>
#include <stdio.h>

/*

2. Fa�a um programa que leia n�mero reais maiores que zero. Quando for entrado o n�mero zero, o 
programa dever� apresentar quantos n�meros foram entrados e a m�dia destes.

*/

void main(){ setlocale(LC_ALL, "Portuguese");
	float numero;
	int contador = 0;
	
	do{
		
		printf("Informe o valor do n�mero real = ");
		scanf("%i", &numero);
		
		contador++;	
	
		
	} while(numero>0);
}
