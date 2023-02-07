#include <locale.h>
#include <stdio.h>
int main(){

    int matriz[4][4], i, j;

    matriz[0][0] = 1;
    matriz[0][1] = 0;
    matriz[0][2] = 2;
    matriz[0][3] = -1;
    matriz[1][0] = 4;
    matriz[1][1] = 3;
    matriz[1][2] = 2;
    matriz[1][3] = 1;
    matriz[2][0] = 1;
    matriz[2][1] = -2;
    matriz[2][2] = 3;
    matriz[2][3] = 4;
    matriz[3][0] = 8;
    matriz[3][1] = 5;
    matriz[3][2] = 1;
    matriz[3][3] = 3;

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("\nMatriz[%d][%d] = %d", i,j, matriz[i][j]);
        }
    }

    //Mostra na tela organizado!

    printf("\n\n");
     for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("[%4d] ", matriz[i][j]);
        }
        printf("\n");
    }
}
