#include<stdio.h>
int main()
{

    int matriz[3][4], i,j, S, J;

    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("Matriz[%d][%d]: ", i,j);
            scanf("%d", &matriz[i][j]);

        }
    }
    //ORGANIZA "MOSTRA NA TELA" ;
    
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("[%4d] ", matriz[i][j]);
        }
        printf("\n");
    }
    //SOMA DA LINHA
    
    for(i=0; i<3; i++)
    {
    	S = 0;
        for(j=0; j<4; j++)
        {
            S = S + matriz[i][j];
        }
        printf("\nA soma linha [%d] = %d", i, j, S);
    }
    
    //DIAGONAL PRINCIPAL SOMA
    J = 0;
     for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++){
	        
			if(i==j) 
	       	{
	           J = J + matriz[i][j];
			}
	   }
    	printf("\nA soma coluna principal [%d] = %d", j, J);
        
    }
    
    
}
