#include <stdio.h>
#include <locale.h>
int main()
{
    char nome[81], inver[81];
    int barraZero=0, i,j;

    printf("Escreva o nome: ");
    scanf("%[^\n", nome);


    while(nome[barraZero] != '\0')
        barraZero++;

    for(i=barraZero-1, j=0; i>=0; i--, j++)
    {
        inver[j]=nome[i];
    }
    inver[barraZero] = '\0';
    printf("\nNome invertido = %s\n", inver);
}
