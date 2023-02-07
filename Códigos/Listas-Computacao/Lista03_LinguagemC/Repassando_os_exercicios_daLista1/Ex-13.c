#include <stdio.h>
int main()
{
    int n1,n2,n3;

    printf("Informe o numero: ");
    scanf("%d", &n1);
    printf("Informe o numero: ");
    scanf("%d", &n2);
    printf("Informe o numero: ");
    scanf("%d", &n3);

    if((n1<n2) && (n2<n3))
    {
        printf("Ordem numerica = %d, %d, %d", n1,n2,n3);
    }
        if((n2<n1) && (n1<n3))
        {
            printf("Ordem numerica = %d, %d, %d", n2, n1, n3);
        }
    return 0;

}
