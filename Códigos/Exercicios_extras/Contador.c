#include <locale.h>
#include <stdio.h>

/*

2. Faça um programa que leia número reais maiores que zero. Quando for entrado o número zero, o 
programa deverá apresentar quantos números foram entrados e a média destes.

*/

void main(){ setlocale(LC_ALL, "Portuguese");
	float numero;
	int contador = 0;
	
	do{
		
		printf("Informe o valor do número real = ");
		scanf("%i", &numero);
		
		contador++;	
	
		
	} while(numero>0);
}
