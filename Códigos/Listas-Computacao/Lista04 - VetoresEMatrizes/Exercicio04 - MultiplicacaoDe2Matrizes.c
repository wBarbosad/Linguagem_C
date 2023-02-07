#include <stdio.h>
#include <locale.h>
int main()
{

    int M[3][3], N[3][3], Mult[3][3], i,j;

    printf("Matriz M:\n\n");


    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("M[%d][%d]: ", i,j);
            scanf("%d", &M[i][j]);
        }
    }
    for(i=0; i<3; i++) //Mostra na tela "No formato de uma MATRIZ!
    {
        for(j=0; j<3; j++)
        {
            printf("[%4d] ", M[i][j]);
        }
        printf("\n");
    }
    printf("\n");

        printf("Matriz N:\n\n");

        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                printf("N[%d][%d]: ", i,j);
                scanf("%d", &N[i][j]);
            }
        }
        for(i=0; i<3; i++) //Mostra na tela "No formato de uma MATRIZ!
        {
            for(j=0; j<3; j++)
            {
                printf("[%4d] ", N[i][j]);
                Mult[i][j] = M[i][j] * N[i][j];
            }
            printf("\n");
        }
    printf("\n");
            //Multiplicaçao das Matrizes

             for(i=0; i<3; i++)
            {
                for(j=0; j<3; j++)
                {

                    printf("\nMult[%d][%d]: %d", i,j, Mult[i][j]);

                }
            }
            printf("\n\n");

            printf("Matriz M*N\n\n");

            for(i=0; i<3; i++) //Mostra na tela "No formato de uma MATRIZ!
            {
                for(j=0; j<3; j++)
                {
                    printf("[%4d] ", Mult[i][j]);
                }
                printf("\n");
            }
// O que faz ´p/ colocar tamanhos diferentes? Ex: M[3/3] N[3/2]?
}
