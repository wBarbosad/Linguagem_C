#include <stdio.h>
int main(){
    /*ExemploOperadores sobre Ponteiros)
    int *c, a;

    a=70;
    c=&a;

    printf("%d --- %d", *c, c); */

    /*Exemplo de atribui�ao por ponteiro

    int b;
    int *c;
    b=10;
    c=&b;
    *c=1;

    printf("%d", b); */

    /* Exemplo de um vetor inv�lido, lembre-se de declarar uma endere�o

    sempre que poss�vel, pois sem endere�o nao h� valores a armazenar!


    int a,b;
    int *c;
    b=10;
    c=&b;
    *c=13;

    printf("%d", b);

    */

    int a,*c = NULL;
    int i,j;
    a=10;
    c=&a;

    for(i=0; i<10; i++)
    {
        *c=5+i; //(5, 6, 7, 8, 9, 10, 11, 12, 13, 14) Funciona;

    }

    if(c!=NULL)
    {
        printf("%d --- %d", c, *c);
    }

}
