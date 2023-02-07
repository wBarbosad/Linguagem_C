#include <stdio.h>
void main()
{
    int n1,n2,n3, maiorN;

    printf("Informe os valores dos tres numeros: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if((n1>n2) && (n1>n3))
    {
        printf("Maior numero = %d", n1);
    }
        if((n2>n1) && (n2>n3))
        {
            printf("Maior numero = %d", n2);
        }
            if((n3>n1) && (n3>n2))
            {
                printf("Maior numero = %d", n3);
            }
            else
            printf("FDS");


}
