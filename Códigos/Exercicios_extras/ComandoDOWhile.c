#include <locale.h>
#include <stdio.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
		int opcao;
	
	/*Fa�a um programa que implemente um menu onde o usur�rio dever� selecionar 1 ou 0. Caso seja entrado
	um n�mero diferente, o programa dever� solicitar uma nova op��o */
	
	do{
		
		printf("Selecione as op��es:  ");
		scanf("%i", &opcao);
		
		printf("%i", opcao);
		
	} while((opcao!=1) && (opcao!=0)); //Repete o comando quando as duas condi��es s�o verdadeiras.
}
