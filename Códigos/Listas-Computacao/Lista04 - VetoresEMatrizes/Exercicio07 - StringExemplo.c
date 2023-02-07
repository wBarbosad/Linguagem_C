#include <stdio.h>
#include <locale.h>
int main(){ setlocale(LC_ALL, "Portuguese");
    char nome[40];
    int i;



    for(i=0; nome[i]!='\0'; i++)
        printf("\nInforme um nome: ");
        scanf("%[^\n", nome);
        printf("\n valores da matriz %d: %c", i, nome[i]);

    return 0;
}



