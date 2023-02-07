#include <stdio.h>
#include <locale.h>
int main(){ setlocale(LC_ALL,"Portuguese");

   int M[100][80], NT[80][100], L, C, i,j;

   printf("Informe a quantidade de linhas: ");
   scanf("%i", &L);
    printf("Informe a quantidade de colunas: ");
    scanf("%i", &C);

    // Limite da matriz;
        if((L>=100) && (C>=80))
        {
            printf("A matriz suporta até 100 Linhas e 80 Colunas!");
        }
        // Começa do valor L e vai até o limite "99/79";

    for(i=L; i<100; i++){
        for(j=C; j<80; j++){
            printf("M[%d][%d] = ", i,j);
            scanf("%d", &M[i][j]);
        }
    }
    //mostra na tela

    for(i=L; i<100; i++)
    {
        for(j=C; j<80; j++)
        {
            printf("[%4d] ", M[i][j]);
        }
        printf("\n");
    }

    //TRANSPOSTA

    // precisa alterar também o J e I p/ funcionar!

    for(j=C; j<80; j++){
        for(i=L; i<100; i++){
printf("[%4d] ", NT[i][j]);
            NT[j][i] = M[i][j];
            printf("NT[%d][%d] = ", j,i);

        }
    }
    for(i=C; i<80; i++)
    {
        for(j=L; j<100; j++)
        {
            printf("[%4d] ", NT[i][j]);
        }
        printf("\n");
    }
}
