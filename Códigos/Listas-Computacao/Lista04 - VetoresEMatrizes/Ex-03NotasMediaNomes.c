#include <stdio.h>
#include <locale.h>
int main()
{ setlocale(LC_ALL, "Portuguese");

    int nota, media, aluno[20], i, qtdAlunos;
    char nome[50];

    printf("Informe a quantidade de alunos: ");
    scanf("%d", &qtdAlunos);
    for(i=0; i<=qtdAlunos; i++)
    {
        printf("\nInforme o nome do aluno: ");
        scanf("%s", &nome[i]);

        printf("\nInforme a nota do aluno: ");
        scanf("%d", &nota);


    }
}
