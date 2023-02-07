/*Tamanho 05, calcular o produto interno deles.*/
#include<stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int A[5], B[5], i, s, mult, soma;
    for(i=0; i<=4; i++)
    {
        printf("\nInforme a posição do vetor A: ");
        scanf("%d", &A[i]);
        printf("\nVetor A = %d\n", A[i]);
    }
        for(i=0; i<=4; i++)
        {
        printf("\nInforme a posição do vetor B: ");
        scanf("%d", &B[i]);
        printf("\nVetor b = %d\n", B[i]);

        }
    mult = (A[0]*B[0] + A[1]*B[1] +  A[2]*B[2] +  A[3]*B[3] +  A[4]*B[4]);
    printf("\nMultiplicação entre eles = %d\n", mult);
    printf("Soma total = %d\n", soma);



    return 0;

}
