#include <stdio.h>
#include <locale.h>
int main()
{
    int d,a,i,dias, dsoma, m, sm, sa;
    dias = 0;

    printf("Informe o dia: ");
    scanf("%d", &d);
    printf("Informe o mes: ");
    scanf("%d", &m);
    printf("Informe o ano: ");
    scanf("%d", &a);

    printf("Data atual = %d/%d/%d\n", d,m,a);

    if((d>=1) && (d<=31))
    {
        dias= dias+1;
        dsoma = d+dias;

        if(dsoma>31)
        {
            sm=m+1;
            d=1;
            printf("Data seguinte = %d/%d/%d\n", d,sm,a);
        }
        if((sm>12) && (dias>31))
        {
            sa = a+1;
            d=1;
            m=1;
            printf("Data segiomte = %d/%d/%d\n", d,m,sa);
        }
    }



}
