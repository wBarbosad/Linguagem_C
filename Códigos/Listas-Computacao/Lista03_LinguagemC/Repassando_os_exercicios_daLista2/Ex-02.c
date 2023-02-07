#include <stdio.h>
#include <locale.h>
int main()
{
    int n1,i,v,n2;

    printf("Informe o número da tabuada: ");
    scanf("%d", &n1);
    printf("Deseja começar por qual número?: ");
    scanf("%d", &n2);

    for(i=n2; i<=10; i++) // para i de n2 até 1 passo 1
    {
        v = n1*i;
        printf("Tabuada = %d\n", v);
    }
}
