#include<stdio.h>
int main()
{

    int matriz[3][4], i,j;

    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("Matriz[%d][%d]: ", i,j);
            scanf("%d", &matriz[i][j]);

        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("[%4d] ", matriz[i][j]);
        }
        printf("\n");
    }
}
