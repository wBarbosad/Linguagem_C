#include <stdio.h>
#include <locale.h>
int main()
{
    int n1,i,v,n2;

    printf("Informe o n�mero da tabuada: ");
    scanf("%d", &n1);
    printf("Deseja come�ar por qual n�mero?: ");
    scanf("%d", &n2);

    for(i=n2; i<=10; i++) // para i de n2 at� 1 passo 1
    {
        v = n1*i;
        printf("Tabuada = %d\n", v);
    }
}
