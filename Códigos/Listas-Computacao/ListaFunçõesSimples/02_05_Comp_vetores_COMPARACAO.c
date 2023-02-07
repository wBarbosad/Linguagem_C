#include<stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int A[2], B[2], i, j, mult, soma;

    for(i=0; i<=2; i++)
    {
        printf("\nInforme a posição %d do vetor A =  ", i);
        scanf("%d", &A[i]);

    }
    for(i=0; i<=2; i++)
    {
        printf("\nInforme a posição %d do vetor B = ", i);
        scanf("%d", &B[i]);

    }
    //comparação

    for(i=0; i<=4; i++)
    {
        for(j=0; j<=4; j++)
        {
            if((A[i])==(B[j]))
            {
                printf("\nIgual: %d", A[i]);
                break;
            }
        }
    }
}

