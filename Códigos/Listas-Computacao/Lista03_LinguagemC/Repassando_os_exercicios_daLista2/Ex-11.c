#include <locale.h>
#include <stdio.h>
int main()
{ setlocale(LC_ALL, "Portuguese");
    int n1,i,n2, v;

    printf("Informe o número da tabuada: ");
    scanf("%d", &n1);
    printf("Informe o número que deseja começar a multiplicaçao: ");
    scanf("%d", &n2);

    for(i=n2; i>=1; i--)
    {
        v = n1*i;
        printf("Tabuada = %d ", v);

    }
}
