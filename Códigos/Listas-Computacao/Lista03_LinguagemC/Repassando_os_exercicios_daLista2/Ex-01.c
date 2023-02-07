#include <stdio.h>
#include <locale.h>
int main()
{
    int valor,n,i;
    i = 0;

    printf("Informe um numero: ");
    scanf("%d", &n);

    for(i=1; i<=10; i++)
    {
        valor = n*i;
        printf("Tabuada = %d\n", valor);

    }

    return 0;
}
