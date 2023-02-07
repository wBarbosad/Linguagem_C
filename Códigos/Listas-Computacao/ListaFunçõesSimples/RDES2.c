#include <stdio.h>
#include <locale.h>
int frame [10];
int main ()
{ setlocale (LC_ALL, "Portuguese");
	int opcao, opcaoMenu, i, vetorY [247], enderecoEscravo;
	
	
	//MENU 
	MENU: 
	printf ("MENU PRINCIPAL\n\n");
	printf ("1 - BroadCast\n2 - Unicast\n0 - Sair");
	printf ("\nDigite a opção desejada: ");
	scanf ("%i%*c", &opcao);
	switch (opcao)
	{ 
		case 1: frame [0] = 0; 
				break;
		
		case 2: printf ("Indique o valor do endereço do escravo: "); // -------------------------> Pergunta 2
				scanf ("%i", &frame [0]); // -----------------------------------------> Solicitação do endereço
				if (frame [0]<1 || frame [0]>247)
				{
					printf ("Endereço inválido\n");
					system ("pause");
					goto MENU;
				}
				break;
		case 0: printf ("Sair do programa\n"); break;
		default: printf ("Código inválido!!\n\n");
	}
	
	


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	system ("pause");
	return 0;
}

	
