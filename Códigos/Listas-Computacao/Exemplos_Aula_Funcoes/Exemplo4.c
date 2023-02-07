#include <stdio.h>
int main(int argc, char *argv[]) {
 int i;
 for (i = 0; i < argc; i++)
 printf("Parametro %d: %s\n", i, argv[i]); //Primeira posição [0] é o nome do programa!
 return 0;
} 
