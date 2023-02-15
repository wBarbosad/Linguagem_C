#include <locale.h>
#include <stdio.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
		int opcao;
	
	/*Faça um programa que implemente um menu onde o usurário deverá selecionar 1 ou 0. Caso seja entrado
	um número diferente, o programa deverá solicitar uma nova opção */
	
	do{
		
		printf("Selecione as opções:  ");
		scanf("%i", &opcao);
		
		printf("%i", opcao);
		
	} while((opcao!=1) && (opcao!=0)); //Repete o comando quando as duas condições são verdadeiras.
}
