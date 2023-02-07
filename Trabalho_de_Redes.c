#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
void serial();
int frame [10];
void segundo_menu()
{
	int i, cont;
	do{
	
		printf ("\n*************************************************\n");
		printf ("*  Código de Função       Ação       Tabela     *");
		printf("\n*************************************************");
		printf ("\n* 01 | Leitura | COILS\n* 05 | Escrita Simples | COILS\n* 15 | Escrita Multipla |COILS\n* 02 | Leitura | Entrada Discretas\n* 04 | Leitura | Registradores de Entrada\n* 03 | Leitura | Registradores Holding\n* 06 | Escrita Simples | Registradores Holding\n* 16 | Escrita Multiplica | Registradores Holding\n* 0 - Voltar ao menu principal");
		printf("\n*************************************************");	
		printf ("\n\nDigite a opção desejada: ");
		scanf ("%i", &frame[1]);
		switch (frame[1])
		{
		
				case 00: printf ("Voltar ao Menu principal\n"); break; 
				case 01: printf ("Leitura Simples  | COILS\n"); 
				{	
					LEITURAS:
					printf ("Digite o Registrador a ser gravado = ");
					scanf("%i", &frame[2]);	
						if (frame [2]<0 || frame [2]>250)
						{
							printf("O número de registrador foi ultrapassado!\n\n");
							segundo_menu();	
							system ("pause");
				 		 }
				 			 		
				  	printf("\n\n Escravo = %i\n Cód. Função = %i\n Registrador = %i\n\n",frame[0],frame[1],frame[2]); 
				    frame[3]=252;
				  	serial(3); // --------------------------> PASSO 10 
			    	system("pause");
				}
	    	        break;
				case 02: printf ("Opção inativa!\n"); // -------------------------------------> 8.1
					{
						goto LEITURAS;
						break;
					}
				case 03: printf ("Leitura Simples  | Registradores Holding\n");
					{
						goto LEITURAS;
						break;
					}
				case 04: printf ("Opcao inativa!\n"); // -------------------------------------> 8.1
					{
						goto LEITURAS;
						break;
					}
				case 05: printf ("Escrita Simples | COILS\n"); 
					{
						PASSO9PONTO5: 
					printf ("Digite o Registrador a ser gravado = ");
					scanf("%i%*c", &frame[2]);	
						if (frame [2]<0 || frame [2]>250)
						{
							system ("cls");
							segundo_menu();	
							system ("pause");
				 		 } // --------------------------> Parte 9.2.2
				 		 printf ("Digite os dados a ser gravado = "); // ----------> 9.2.3
				 		 scanf("%i%*c", &frame[3]);
						printf("\n\n Escravo = %i\n Cód. Função = %i\n Registrador = %i\n Dados = %i\n\n",frame[0],frame[1],frame[2],frame[3]); 
						
						
						frame[4]=252;
						serial(4); // --------------------------> PASSO 10
						system ("pause");
						system ("cls");
						
					}
					break; // PARTE 9.2.4 Concluída ------> PARTE 10 ???? NÃO SEI!
					
				case 06: printf ("Escrita Simples | Registradores Holding\n");
					{
						goto PASSO9PONTO5;
						break;	
					}
				case 15: printf ("Escrita Multipla | COILS\n");	// -------------> 8.2
					{
						PASSO9PONTO3PONTO5:
						printf ("Digite o Registrador a ser gravado = ");
						scanf("%i%*c", &frame[2]);	
							if (frame [2]<0 || frame [2]>250)
							{
								printf("O valor do registrador é inválido!!\n\n");
								system ("cls");
								segundo_menu();	
								system ("pause");
				 			 } // --------------------------> Parte 9.2.2
				 			printf ("Digite a quantidade de registradores = "); // -----> P/ dar um número p/ &vetor para funcionar o case 15;
				 			scanf("%i%*c", &cont); // -------------------------------------------> 9.3.3 QUANDO É 5 REGISTRADORES OU 4 O VALOR NÃO APARECE.
				 			if(cont>5) // FRAME[3] Posição 4
				 			{
				 				printf("\n\nQuantidade inválida de registradores, lembre-se que o máximo permitido é 5!\n\n\n");
				 				system("cls");
				 				segundo_menu();
				 				system("pause");
							}
							
				 			else
				 			if(cont==1 && cont<=10)
				 			{	
				 				printf("Digite os dados a serem gravados = ");
				 				scanf("%i%*c", &frame[4]);
				 				printf("\n\n Escravo = %i\n Cód. Função = %i\n Registrador = %i\n Quantidade de Registradores = %i\n Dados = %i\n\n",frame[0],frame[1],frame[2], cont, frame[4]);
							
								frame[5]=252; // Código de parada;
								serial(5);
								
							}
							else
							if(cont==2 && cont<=10)
							{
						
				 				printf("Digite os dados a serem gravados = ");
				 				scanf("%i%*c", &frame[4]);
				 				printf("Digite os dados a serem gravados = ");
				 				scanf("%i%*c", &frame[5]);
				 				printf("\n\n Escravo = %i\n Cód. Função = %i\n Registrador = %i\n Quantidade de Registradores = %i\n Dados = %i\n Dados = %i\n\n",frame[0],frame[1],frame[2],cont, frame[4], frame[5]);
							
								frame[6]=252; // Código de Parada;
								serial(6);
								
							}
							else								
							if(cont==3 && cont<=10)
							{
								
				 				printf("Digite os dados a serem gravados = ");
				 				scanf("%i%*c", &frame[4]);
				 				printf("Digite os dados a serem gravados = ");
				 				scanf("%i%*c", &frame[5]);
				 				printf("Digite os dados a serem gravados = ");
				 				scanf("%i%*c", &frame[6]);
								printf("\n\n Escravo = %i\n Cód. Função = %i\n Registrador = %i\n Quantidade de Registradores = %i\n Dados = %i\n Dados = %i\n Dados = %i\n\n",frame[0],frame[1],frame[2],cont, frame[4], frame[5], frame[6]);	
							
								frame[7]=252; // --- Código de parada;
								serial(7);
								
							}
							else
							if(cont==4 && cont<=10)
							{
				 				printf("Digite os dados a serem gravados = ");
				 				scanf("%i%*c", &frame[4]);
				 				printf("Digite os dados a serem gravados = ");
				 				scanf("%i%*c", &frame[5]);
				 				printf("Digite os dados a serem gravados = ");
				 				scanf("%i%*c", &frame[6]);
				 				printf("Digite os dados a serem gravados = ");
				 				scanf("%i%*c", &frame[7]);
				 				printf("\n\n Escravo = %i\n Cód. Função = %i\n Registrador = %i\n Quantidade de Registradores = %i\n Dados = %i\n Dados = %i\n Dados = %i\n Dados = %i\n\n",frame[0],frame[1],frame[2],cont, frame[4], frame[5], frame[6], frame[7]);
				 				
								frame[8]=252; // Código de parada
								serial(8);
								
								
						 	}
				 			else
							if(cont==5 && cont<=10)
							{
				 				printf("Digite os dados a serem gravados = ");
				 				scanf("%i%*c", &frame[4]);
				 				printf("Digite os dados a serem gravados = ");
				 				scanf("%i%*c", &frame[5]);
				 				printf("Digite os dados a serem gravados = ");
				 				scanf("%i%*c", &frame[6]);
				 				printf("Digite os dados a serem gravados = ");
				 				scanf("%i%*c", &frame[7]);
				 				printf("Digite os dados a serem gravados = ");
				 				scanf("%i%*c", &frame[8]);
				 				printf("\n\n");
				 				system("pause");
				 				system("cls");
				 				printf("\n\n Escravo = %i\n Cód. Função = %i\n Registrador = %i\n Quantidade de Registradores = %i\n Dados = %i\n Dados = %i\n Dados = %i\n Dados = %i\n Dados = %i\n\n",frame[0],frame[1],frame[2],cont, frame[4], frame[5], frame[6], frame[7], frame[8]);
				 			
				 			
				 				frame[9]=252;
							 	serial(9);
								 // Código de parada.
				 			}
				 		
				 			
				 			system("pause");
							break;
							
					}
				case 16: printf ("Escrita Multipla | Registradores Holding\n");  // -------------> 8.2
					{
						goto PASSO9PONTO3PONTO5;
						break;
					}
				default: printf ("Código inválido!!\n\n"); break;
		}
		system ("pause");
	} while (frame[1]!=0); // } Do segundo DO do MENU FUNÇÕES // FRAME [1] - 1 é a posição de COD.F
	
}
int main()
{  setlocale (LC_ALL, "Portuguese");
	int opcao, opcaoMenu, i, enderecoEscravo;

	do{
		
		MENU: 
		printf ("MENU PRINCIPAL\n\n");
		printf ("1 - BroadCast\n2 - Unicast\n0 - Sair");
		printf ("\n\nDigite a opção desejada: ");
		scanf ("%i%*c", &opcao);
		switch (opcao)
		{
			case 01: 
			{
				frame [0] = 0; 
				system ("cls");
				segundo_menu(); // DECLARAÇÃO DE FUNÇÃO
				system ("pause");
				break;
			} // CASE 01
// ----------------------------------------------------- PERGUNTA 2 -------------------------------------------------------------------
			case 02: 
			{
				printf ("Indique o valor do endereço do escravo: "); // -------------------------> Pergunta 2
				scanf ("%i", &frame [0]); // -----------------------------------------> Solicitação do endereço
				if (frame [0]<1 || frame [0]>247)
				{	 
					printf ("Endereço inválido\n");
					system ("pause");
					goto MENU;
					break;
				} //CHAVES DO IF
				system ("cls");
				segundo_menu();
				break;
			} // CASE 02
			
			case 0: printf ("Sair do programa\n\n"); break;
			default: printf ("Código inválido!\n\n");
		}
		system ("pause");
	} while (opcao != 0);
	return 0;
		
} 
void serial()
{
	HANDLE hSerial;
	wchar_t port[6] = {L"COM3"}; //Verificar qual a COM do Ardunino

	hSerial = CreateFile("COM3", GENERIC_READ | GENERIC_WRITE, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, 0);
	
	DCB dcbSerialParams = {0};
	dcbSerialParams.DCBlength = sizeof(dcbSerialParams);
	GetCommState(hSerial, &dcbSerialParams);
	dcbSerialParams.BaudRate = CBR_9600;
	dcbSerialParams.ByteSize = 8;
	dcbSerialParams.StopBits = ONESTOPBIT;
	dcbSerialParams.Parity = NOPARITY;
	SetCommState(hSerial, &dcbSerialParams);
	
	COMMTIMEOUTS timeouts = {0};
	timeouts.ReadIntervalTimeout = 50;
	timeouts.ReadTotalTimeoutConstant = 50;
	timeouts.ReadTotalTimeoutMultiplier = 10;
	timeouts.WriteTotalTimeoutConstant = 50;
	timeouts.WriteTotalTimeoutMultiplier = 10;
	SetCommTimeouts(hSerial, &timeouts);
	
	
	
	
	int comando;
	
	
	int TxBuff [1];
	unsigned int TotalBytesaEnviar = 12;
	unsigned long BytesEnviados;  
	
	for (comando=0; comando<=10; comando++) 
	{
	TxBuff [0] = comando;
	WriteFile(hSerial, &TxBuff, TotalBytesaEnviar, &BytesEnviados, NULL);
	sleep(1);
	}
	
	
	
	int RxBuff [1];
	unsigned int TotalBytesaReceber = 1;
	unsigned long BytesRecebidos;
	
	ReadFile(hSerial, &RxBuff, TotalBytesaReceber, &BytesRecebidos, NULL);
	
	putchar(RxBuff[0]);
	printf ("\n %i", RxBuff[0]);
	printf("\n%i\n", comando);
	

	CloseHandle (hSerial);
	return ;
}

/// vetor arduino "i" = 0 contator começa em 0.

/// PROJETO COMP TABULEIRO

    for(i=0; i<8; i++)
   { 
		for(j=0; j<8; j++)
		{
			if(i==j)
			printf("Diagonal: [%i] [%i]: [%i] ", i,j,matriz[i][j]);	
		}
   	
   }
} 
