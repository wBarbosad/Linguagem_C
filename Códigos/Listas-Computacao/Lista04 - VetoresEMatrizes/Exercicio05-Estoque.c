#include <stdio.h>
#include <locale.h>
int main(){

    int armazem[4], produto[4][3], qtdadeArmazenada, i,j,s, maiorEstoque, valorU;

    produto[0][0] = 1200;
    produto[0][1] = 3700;
    produto[0][2] = 3737;
    produto[1][0] = 1400;
    produto[1][1] = 4210;
    produto[1][2] = 4224;
    produto[2][0] = 2000;
    produto[2][1] = 2240;
    produto[2][2] = 2444;
    produto[3][0] = 1400;
    produto[3][1] = 3360;
    produto[3][2] = 1870;

    //MATRIZ PRODUTO

   for(i=0; i<4; i++){
    for(j=0; j<3; j++){
        printf("\nProduto[%d][%d] = %d", i,j,produto[i][j]);
    }
   }
   printf("\n\n");

   //MOSTRA NA TELA

   for(i=0; i<4; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("[%4d] ", produto[i][j]);
        }
        printf("\n");
    }

   //ARMAZEM !

   printf("\nQuantidade de Produtos em cada Armazem!");
   printf("\n");

   for(i=0; i<4; i++){
    for(j=0; j<1; j++){
            s=0; //Como aparecer todos os números da linha?

        printf("\nProduto[%d][%d] = %d", i,j, produto[i][j]);
            qtdadeArmazenada = (produto[i][j]);
            s = s+qtdadeArmazenada;
           armazem[i] = s;
        }

      printf("\nInforme o valor por unidade no Produto %d = ", i);
      scanf("%d", &valorU);

   }
   printf("\n");


}
