#include <stdio.h>
#include <locale.h>
int LeMatriz(int X[][2], int Y[][2]);
int CalcSoma(int X[][2], int Y[][2]);
int imprADICAO(int Somatorio[][2]);

int main(){ setlocale(LC_ALL, "Portuguese");

    int i,j, M[2][2], N[2][2];
     for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("Informe um valor a M[%d][%d] = ", i,j);
            scanf("%d", &M[i][j]);
        }
    }
     for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("Informe um valor a N[%d][%d] = ", i,j);
            scanf("%d", &N[i][j]);
        }
    }
    LeMatriz(M,N);
}

int LeMatriz(int X[][2], int Y[][2]){
    int i,j;

    printf("\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("[%4d]", X[i][j]);
        }
        printf("\n");
    }
      for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("[%4d]", Y[i][j]);
        }
        printf("\n");
    }

    CalcSoma(X,Y);
}
int CalcSoma(int X[][2], int Y[][2]){
    int S[2][2], i,j;
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            S[i][j] = X[i][j] + Y[i][j];
        }
        printf("\n");
    }
     imprADICAO(S);
}
int imprADICAO(int Somatorio[][2]){
    int i,j;
    printf("Soma dos valores da matriz\n");
    printf("\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("[%4d]", Somatorio[i][j]);
        }
        printf("\n");
    }
}

/*
                    if((pCardiais[0]>=0) && (pCardiais[0]<=10))
                            {
                                printf("Desceu %d casas ao Sul", pCardiais[0]);
                            }else if(pCardiais[0]>10){
                                    printf("\nSaiu do mapa ao inserir %d movimentos ao Sul!", pCardiais[0]);
                                }
                                 if((pCardiais[1]>=0) && (pCardiais[1]<=10))
                                    {
                                        printf("\nSubiu %d casas ao Norte", pCardiais[1]);
                                    }else if(pCardiais[1]>10){
                                            printf("\nSaiu do mapa ao inserir %d movimentos ao Norte!", pCardiais[1]);
                                        }
                                            if((pCardiais[2]>=0) && (pCardiais[2]<=10)) //OESTE PRECISA DE UM ACOMPANHAMENTO TBM


                                          if((pCardiais[3]>=0) && (pCardiais[3]<=10))
                                    {
                                        printf("\nMoveu-se à direita %d casas ao Norte", pCardiais[1]);
                                    }else if(pCardiais[1]>10){
                                            printf("\nSaiu do mapa ao inserir %d movimentos ao Norte!", pCardiais[1]);
                                        }

                                     */
