#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int valorT, temperatura;
    float conv;

    printf("**Tabela de Converçoes**\n");
    printf("Escolha o a temperatura que deseja");
    printf("\n1 - Kelvin\n2- Celcius\n3 - Sair\n");
    printf("\nDigite a escolhida: ");
    scanf("%d", &temperatura);

    switch(temperatura)
    {

    case 1:
        printf("\nConverçao em Kelvin --> Celcius");
        printf("\nInforme o valor que deseja converter: ");
        scanf("%d", &valorT);
        conv = valorT - 273,15;
        break;
    case 2:
        printf("\nConverçao em Celcius --> Kelvin\n");
        printf("\nInforme o valor que deseja converter: ");
        scanf("%d", &valorT);
        conv = valorT + 273,15;
        break;

    case 3:
        printf("Encerrar programa!\n");
        break;

    default:
        printf("Variável nao existente!");

    }

    printf("Valor convertido = %5.2f\n", conv);
}
