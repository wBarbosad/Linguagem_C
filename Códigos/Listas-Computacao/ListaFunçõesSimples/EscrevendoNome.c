#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fp;

    fopen("TEXTO.TXT", "w");
    if(fp==NULL)
    {
        printf("");
        exit(1);
    }
}
