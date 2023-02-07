#include <stdio.h>
#include <string.h>
int main(){

    char nome[3][40];
    int i;

    printf("Informe o nome: ");
    scanf("%[^\n]", nome[0]);

    printf("Nome %s\n", nome[0]);

    for(i=0; i<40; i++){
        if(nome[0][i]=='\0')
        {
            break;
        }
        printf("%c", nome[0][i]);
    }





}
