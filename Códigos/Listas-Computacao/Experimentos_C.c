#include <stdio.h>
#include <locale.h>

void main (){
	setlocale(LC_ALL, "Portuguese");  
		
		int matriz1[5], matriz2[5],i, j, w, matriz3[5];
		
		for(w=0; w<=5; w++){

			printf("Informe um n�mero para armazenar no conjunto A[%i]: ", w);
			scanf("%i", &matriz1[w]);
		
			}
				printf("\n");
				for(j=0; j<=5; j++){
					printf("Informe um n�mero para armazenar no conjunto B[%i]: ", j);
					scanf("%i", &matriz2[j]);
				}
					for(i=0; i<=5; i++){
						printf("\nO valor da matriz A[%i] = %i e B[%i] = %i", i, matriz1[i], i, matriz2[i]);
						
						matriz3[i] = matriz1[i]-matriz2[i];
						printf("\nO valor da matriz C[%i] = %i", i, matriz3[i]);
					}
	
					
}
