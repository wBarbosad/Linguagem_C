#include <stdio.h>
#include <locale.h>
int main()
{ setlocale(LC_ALL, "Portuguese");

    int n,i,v,p;

    printf("Informe um número: ");
    scanf("%d", &n);

    for(i=1; i<=10; i++)
    {
        v = n*i;
        p = v%2;

        printf("\nTabuada = %d\n", v);
        if(p==0)
        {
        printf("Número Primo = %d\n", v);
        }
        else
        printf("Número Ímpar = %d\n", v);

    }
}
