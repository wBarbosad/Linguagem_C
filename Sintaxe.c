   // include <stdio.h> é uma biblioteca. (Envoque funcionalidades e comandos para entender o que acontece com os programas;
// Tela preta que aparece os códigos.

//================= BIBLIOTECAS =============
#include <stdio.h>
#include <stdlib.h> //System pause está nessa biblioteca.
#include <locale.h> // + a função setlocale(LC_ALL,"Língua");

// =========================================

	// INFORMAÇÕES
	
/* Sintaxe de comandos: 

printf("<texto> %(especificador de caracter/numero/texto, etc)", <v1>, <v2>):
scanf(<form.>, &<v1>, &<v2>, ... , &<vN>); (especificador/tipo de dado de formato '%i/%c/%s/%f, ... %n, & (E comercial)+nome da variável que vou guardar o dado;

switch(<var>){ switch lê o valor da váriavel que declarei e entra em um dos cases
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
	default: caso nenhuma variável estiver em um dos cases;
		<bloco de comandos_padrão>
		break;
	}
	Aula while :
	
	sintaxe --> 
	
	int a = 1
	
	while(a<=10){
		printf(" A = %i", a)
		a++ // (Atualização da váriavel de controle) Não permite o bloco de comandos tender ao infinito.
	}
	
	Sintaxe	Comando do-while
	
	do {
		
	} while(<condição>);
	
	
	Comando for: 
		
			int <v.inciadora = n>
			for(<v.iniciadora>; <condicao>; <incremento>){
				<bloco de comandos>
			}
			
		Comando break - Encerra por completo o comando de repetições
		Comando continue - Emcerra a repetição atual e passa à próxima
		
	*/  
// ===============================================================================






int pessoal();
void main(void){ setlocale(LC_ALL, "Portuguese");
		
	/*RMR Qualificatório*/
	
	int ordem;
	
	for(ordem=1; ordem<=10; ordem++){
		
		if(ordem==1){
			printf("%iª Colocado(a)", ordem);
			printf("\nCandidato apto\nPremiação pela posição: R$ 50000.00");
			continue;
		} else if(ordem==2){
				printf("\n\n\a%iª Colocado(a)", ordem);
				printf("\nCandidato apto\nPremiação pela posição: R$ 000.00");
				break;
			}
			
		printf("%iª Posição\n ", ordem);
	}

}
	

// =====================================================================

/*
void main() // Função Principal do meu código 
	{
	// código (vai ser executado o que estiver dentro dos parenteses;
	printf("Hello World\n\n");

	system("pause");

	
} */


//Debug (https://www.youtube.com/watch?v=jV2OWKb2sUk&list=PLpaKFn4Q4GMOBAeqC1S5_Fna_Y5XaOQS2&index=3)

/*

void f();

void main(){
	
	int i;
	
	for(i=0; i<10; i++) f(); // Vai acontecer até i = 10; Portanto, vai aparecer 0 numero 10, 10 vezes.
		printf("%i", i);
}

void f(){
	
	int j = 10;
	
	printf(" %d", j);
	j++; // j = j + 1
	
}*/ 

/* Aula 04 - Operações de entrada (printf) - Saída de dados "imprimir dados na tela"
	.<num> Quantos difitos serão impressos após a vírgula
	d ou i = num. inteiros em base decimais
	X = inteiros em base hexadecimal;
	f = numeros em ponto flutuante
	c = caracteres alfanuméricos (txt)
	s = sequencia de caracteres alfanuméricos (txt)
	
	\a toca um alarme sonoro padrão do sistema
 
 Função de entradas e saídas pré-programadas ^


void main (){ // Aula 4
	int p1 = 2, p2;
	
	p2 = p1+1;
	
	printf("Posição %i\nSoma = %i", p1, p2); //%i é um especificador de numero inteiro de base decimal
	
	//printf("Posição %i.\n", p1) vai imprimir todos os numeros após a vírgula
	//printf("Posição %.2i.\n", p1) imprimi só 2 caracteres após a vírgula/ponto
	// printf("Dado de texto: %c, 'a'); Um caracter coloc apostrofo e seu especificados C caracteres alfanúmericos;
	// printf("Dado de texto:   %s.\n", "testando"); %s especificador de sequencias de caracteres alfanumericos;
	
// Teste 1 
	
	int d1, d2;
	d1 = 15;
	
	printf("O dia é: %i", d1);
	printf("\nInforme o novo dia: ", &d2);
	scanf("%i", &d2);
	
	printf("A data escolhida é %i\a\n\n", d2);
	system("pause");
	
}

	//Aula 05 - Entrada de dados 
	// Inserir dados de forma à guardar valores;
	
	//scanf guarda o valor na variável.
	
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
			
			printf("*****************************************************************\n*\t\t\tCANDIDATO APROVADO!\t\t\t*\n*\t\t\tPARABÉNS E BEM-VINDO A USP!\t\t*\n*****************************************************************");			
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
		default: printf("Selecione uma das opções destinada!");
		break;
	}
	
		int i;
		
		for(i=0; i<=10; i++){
			printf("%i ", i);
		}
			printf("%i", i);

*/ 

