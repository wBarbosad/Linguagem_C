#include <stdio.h>
#include <locale.h>
int main()
{
    int n1,n2, opcao,s
    s = 0;

    printf("Informe os dois n�meros: ");
    scanf("%d %d", &n1, &n2);

    do
    {
        printf("*Selecione a opera�ao*\n");
        printf("*1- Soma\n2- Multiplica�ao\n3 - Divisao\n4- Substra�ao\n0- Sair");
        printf("Escolha uma das op�oes acima: ");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1: printf("Opera�ao matem�tica selecionada = Soma!\n");

            case 2: printf("Opera�ao matem�tica selecionada = Multiplica�ao!\n");

            case 3: printf("Opera�ao matem�tica selecionada = Divisao!\n");

            case 4: printf("Opera�ao matem�tica selecionada = Subtracao!\n");
            case 5: printf("Finalizar programa!\n); break;


        }
    }
}
