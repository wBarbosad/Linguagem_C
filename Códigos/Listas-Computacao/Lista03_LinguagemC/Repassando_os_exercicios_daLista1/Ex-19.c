#include <stdio.h>
#include <locale.h>
int main()
{
    int valor, np;
    float vp;

    printf("Informe o valor do produto: ");
    scanf("%d", &valor);
    printf("Informe a quantidade de prestaçoes: ");
    scanf("%d", &np);

    if((np>=24) && (np<36))
    {
        vp = (0.1*valor)+valor;
         printf("Valor final do produto = %5.2f\n", vp);

        if(np>=36)
        {
            vp=(0.15*valor)+valor;
             printf("Valor final do produto = %5.2f\n", vp);
        }
    }
    else
    printf("Valor do produto sem juros = %d\n", valor);
    printf("Numero de parcelas = %d\n", np);

}
