#include <stdio.h>
#include <locale.h>
int main()
{
    int n1,n2, opcao,s
    s = 0;

    printf("Informe os dois números: ");
    scanf("%d %d", &n1, &n2);

    do
    {
        printf("*Selecione a operaçao*\n");
        printf("*1- Soma\n2- Multiplicaçao\n3 - Divisao\n4- Substraçao\n0- Sair");
        printf("Escolha uma das opçoes acima: ");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1: printf("Operaçao matemática selecionada = Soma!\n");

            case 2: printf("Operaçao matemática selecionada = Multiplicaçao!\n");

            case 3: printf("Operaçao matemática selecionada = Divisao!\n");

            case 4: printf("Operaçao matemática selecionada = Subtracao!\n");
            case 5: printf("Finalizar programa!\n); break;


        }
    }
}
