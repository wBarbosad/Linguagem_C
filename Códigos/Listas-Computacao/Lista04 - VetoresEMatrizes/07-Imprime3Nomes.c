#include <stdio.h>
#include <locale.h>
int main()
{

    int opcao, qtdade, Vpedido, sqtdade;
    float valor, svalor;

    qtdade = 0;
    sqtdade = 0;

    do
    {
        printf("**SEJA BEM-VINDO A LANCHONECE DW **");
        printf("**CARDÁPIO");
        printf("100 - (Cachorro Quente)\n101 - (Bauru simples)\n102 - (Bauru c/ ovo\n103 - (Hamburger)\n104 - (Cheeseburger)\n105 - (Refrigerante)\n106 - (Suco)\n0 - Encerrar pedido\n");
        printf("\nSelecione uma das opçoes acima: ");
        scanf("%d", opcao);

        switch(opcao)
        {
        case 100:
            printf("Cachorro Quente!");
            qtdade = qtdade + 1;
            valor = qtdade*1,10;
            break;

        case 101:
            printf("Bauru simples!");
            qtdade = qtdade + 1;
            valor = qtdade*1,30;
            break;

        case 102:
            printf("Bauru c/ ovo!");
            qtdade = qtdade + 1;
            valor = qtdade*1,50;
            break;

        case 103:
            printf("Hamburger!");
            qtdade = qtdade + 1;
            valor = qtdade*1,10;
            break;

        case 104:
            printf("Cheeseburger!");
            qtdade = qtdade + 1;
            valor = qtdade*1,30;
            break;

        case 105:
            printf("Refrigerante!");
            sqtdade = sqtdade + 1;
            svalor = qtdade*1,00;

            break;

        case 106:
            printf("Suco!");
            printf("Informe a quantidade de sucos que deseja: ");
            sqtdade = sqtdade + 1;
            svalor = qtdade*2,00;

            break;

        case 0: printf("O cliente encerrou o pedido!");

        default:
            printf("Código errado!");


        }

    } while(opcao!=0);

    printf("A quantidade de sanduíches = %i", qtdade);
    printf("Valor dos sanduíches = %i ", valor);
    printf("Valor do Suco/Refrigerante = %i", svalor);
    printf("Quantidade de Suco/Refrigerentas = %i", sqtdade);
}
