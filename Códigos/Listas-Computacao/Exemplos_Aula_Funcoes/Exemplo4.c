#include <stdio.h>
int main(int argc, char *argv[]) {
 int i;
 for (i = 0; i < argc; i++)
 printf("Parametro %d: %s\n", i, argv[i]); //Primeira posi��o [0] � o nome do programa!
 return 0;
} 
