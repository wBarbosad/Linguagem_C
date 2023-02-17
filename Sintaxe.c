   // include <stdio.h> � uma biblioteca. (Envoque funcionalidades e comandos para entender o que acontece com os programas;
// Tela preta que aparece os c�digos.

//================= BIBLIOTECAS =============
#include <stdio.h>
#include <stdlib.h> //System pause est� nessa biblioteca.
#include <locale.h> // + a fun��o setlocale(LC_ALL,"L�ngua");

// =========================================

	// INFORMA��ES
	
/* Sintaxe de comandos: 

printf("<texto> %(especificador de caracter/numero/texto, etc)", <v1>, <v2>):
scanf(<form.>, &<v1>, &<v2>, ... , &<vN>); (especificador/tipo de dado de formato '%i/%c/%s/%f, ... %n, & (E comercial)+nome da vari�vel que vou guardar o dado;

switch(<var>){ switch l� o valor da v�riavel que declarei e entra em um dos cases
	case <v1>:
		<bloco de comandos1>
		break;
	case <v2>: 
		<bloco de comandos2>
		break;	
	case <vn>:
		<bloco de comandosn>
		break;
		[...]
	default: caso nenhuma vari�vel estiver em um dos cases;
		<bloco de comandos_padr�o>
		break;
	}
	Aula while :
	
	sintaxe --> 
	
	int a = 1
	
	while(a<=10){
		printf(" A = %i", a)
		a++ // (Atualiza��o da v�riavel de controle) N�o permite o bloco de comandos tender ao infinito.
	}
	
	Sintaxe	Comando do-while
	
	do {
		
	} while(<condi��o>);
	
	
	Comando for: 
		
			int <v.inciadora = n>
			for(<v.iniciadora>; <condicao>; <incremento>){
				<bloco de comandos>
			}
			
		Comando break - Encerra por completo o comando de repeti��es
		Comando continue - Emcerra a repeti��o atual e passa � pr�xima
		
	*/  
// ===============================================================================






int pessoal();
void main(void){ setlocale(LC_ALL, "Portuguese");
		
	/*RMR Qualificat�rio*/
	
	int ordem;
	
	for(ordem=1; ordem<=10; ordem++){
		
		if(ordem==1){
			printf("%i� Colocado(a)", ordem);
			printf("\nCandidato apto\nPremia��o pela posi��o: R$ 50000.00");
			continue;
		} else if(ordem==2){
				printf("\n\n\a%i� Colocado(a)", ordem);
				printf("\nCandidato apto\nPremia��o pela posi��o: R$ 000.00");
				break;
			}
			
		printf("%i� Posi��o\n ", ordem);
	}

}
	

// =====================================================================

/*
void main() // Fun��o Principal do meu c�digo 
	{
	// c�digo (vai ser executado o que estiver dentro dos parenteses;
	printf("Hello World\n\n");

	system("pause");

	
} */


//Debug (https://www.youtube.com/watch?v=jV2OWKb2sUk&list=PLpaKFn4Q4GMOBAeqC1S5_Fna_Y5XaOQS2&index=3)

/*

void f();

void main(){
	
	int i;
	
	for(i=0; i<10; i++) f(); // Vai acontecer at� i = 10; Portanto, vai aparecer 0 numero 10, 10 vezes.
		printf("%i", i);
}

void f(){
	
	int j = 10;
	
	printf(" %d", j);
	j++; // j = j + 1
	
}*/ 

/* Aula 04 - Opera��es de entrada (printf) - Sa�da de dados "imprimir dados na tela"
	.<num> Quantos difitos ser�o impressos ap�s a v�rgula
	d ou i = num. inteiros em base decimais
	X = inteiros em base hexadecimal;
	f = numeros em ponto flutuante
	c = caracteres alfanum�ricos (txt)
	s = sequencia de caracteres alfanum�ricos (txt)
	
	\a toca um alarme sonoro padr�o do sistema
 
 Fun��o de entradas e sa�das pr�-programadas ^


void main (){ // Aula 4
	int p1 = 2, p2;
	
	p2 = p1+1;
	
	printf("Posi��o %i\nSoma = %i", p1, p2); //%i � um especificador de numero inteiro de base decimal
	
	//printf("Posi��o %i.\n", p1) vai imprimir todos os numeros ap�s a v�rgula
	//printf("Posi��o %.2i.\n", p1) imprimi s� 2 caracteres ap�s a v�rgula/ponto
	// printf("Dado de texto: %c, 'a'); Um caracter coloc apostrofo e seu especificados C caracteres alfan�mericos;
	// printf("Dado de texto:   %s.\n", "testando"); %s especificador de sequencias de caracteres alfanumericos;
	
// Teste 1 
	
	int d1, d2;
	d1 = 15;
	
	printf("O dia �: %i", d1);
	printf("\nInforme o novo dia: ", &d2);
	scanf("%i", &d2);
	
	printf("A data escolhida � %i\a\n\n", d2);
	system("pause");
	
}

	//Aula 05 - Entrada de dados 
	// Inserir dados de forma � guardar valores;
	
	//scanf guarda o valor na vari�vel.
	
		int busca;
	
	printf("Deseja consultar o candidato por: \n\t1. Nome\t2. CPF: ");
	scanf("%i", &busca);
	
	switch(busca){
		
		case 1: {//Nome:
			char nome[24]; //WESLEY BARBOSA DA SILVA
			printf("\nBusca pelo nome");
			printf("\nInforme o nome do candidato: ");
			scanf("%s", &nome);
			
			printf("\nCandidato: WESLEY BARBOSA DA SILVA / CPF: 4XXXX9X9X-W2");
			
			system("pause");
			system("cls");
			
			printf("*****************************************************************\n*\t\t\tCANDIDATO APROVADO!\t\t\t*\n*\t\t\tPARAB�NS E BEM-VINDO A USP!\t\t*\n*****************************************************************");			
			break;
		}
		case 2: { //Consulta pelo nome: 
			int cpf;
			printf("\nBusca pelo CPF");
			printf("\nInforme o CPF do candidato: ");
			scanf("%i", &cpf);
			
			printf("Candidato: WESLEY BARBOSA DA SILVA");
			break;
		}
		default: printf("Selecione uma das op��es destinada!");
		break;
	}
	
		int i;
		
		for(i=0; i<=10; i++){
			printf("%i ", i);
		}
			printf("%i", i);

*/ 

