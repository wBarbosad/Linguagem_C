#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main()
{ setlocale(LC_ALL, "Portuguese");

    char palavra[255];

    //Instru��o

    printf("Digite uma palavra: ");

    //Limpa o Buffer

    setbuf(stdin, 0);

    //L� a String

    // gets � pegar, Fun��o Pegar
    fgets(palavra, 255, stdin);

    //limpa as casas n utilizadas "
    //QUANDO DIGITO UMA PALAVRA MENOR QUE O VALOR M�XIMO P/ N DEIXAR NADA NOS ESPA�OS DA STRING

    //tamanho da minha string "STRLEN()

    palavra[strlen(palavra)-1] = '\0';


    // imprime na tela

    printf("Nome do usu�rio = %s\n", palavra);

    printf("\n");
    system("pause");
}



 CT[0][0] = 0;
    CT[0][1] = 1;
    CT[0][2] = 2;
    CT[0][3] = 3;
    CT[0][4] = 4;
    CT[0][5] = 5;
    CT[0][6] = 6;


    CT2[0] = 0;
    CT2[1] = 1;
    CT2[2] = 2;
    CT2[3] = 3;
    CT2[4] = 4;
    CT2[5] = 5;
    CT2[6] = 6;
