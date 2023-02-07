#include <stdio.h>
#include <locale.h>
int main(){ setlocale(LC_ALL, "Portuguese");

   int i,j;
   char Nome[40];

   Nome[0] = 'C';
   Nome[1] = 'N';
   Nome[2] = 'A';
   Nome[3] = 'W';
   Nome[4] = '\0';


       for(i=0; i<4; i++)
       {
            printf("\nNome[%d] = %c", i, Nome[i]);
       }
            printf("\n");

            for(i=0; i<4; i++)
            {
                printf("\n%d - Informe o nome: ", i);
                scanf("%s", &Nome[i]);
            }

            for(j=0; j<4; j++)
            {
                printf("\nNomes informados [%d] = %s", j, Nome);
            }


}
