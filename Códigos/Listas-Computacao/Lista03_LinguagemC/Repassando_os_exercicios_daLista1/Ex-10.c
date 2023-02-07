#include <stdio.h>
int main()
{
    int n1,n2,n3,n4,media,reprovados, aprovados, prequisitos;

    reprovados = 0;
    aprovados = 0;
    prequisitos = 0;

    printf("Informe a nota da P1: ");
    scanf("%d", &n1);
    printf("Informe a nota da P2: ");
    scanf("%d", &n2);
    printf("Informe a nota da P3: ");
    scanf("%d", &n3);
    printf("Informe a nota da P4: ");
    scanf("%d", &n4);

    media = (n1+n2+n3+n4)/4;
    printf("\nMedia = %d\n", media);

    if((media>=0) && (media<=10))
    {
        if(media<=4)
        {
            printf("\nAluno reprovado!\n");
            reprovados = reprovados + 1;
        }
        if(media>=6)
        {
            printf("\nAluno aprovado!\n");
            aprovados = aprovados + 1;
        }
        if((media>4) && (media<6))
        {
            printf("\nAluno reprovado com Pre-Requisito!\n");
            prequisitos = prequisitos + 1;
        }
    }
    else
    printf("Rever as notas, lembre-se que a media deve ser igual 0 ou maior igual 10!\n");

    printf("\nQuantidade de reprovados = %d\n", reprovados);
    printf("Quantidade de aprovados = %d\n", aprovados);
    printf("Quantidade de reprovados com Pre-Requisito = %d\n", prequisitos);
    printf("\n");


    system("pause");
    return 0;
}
