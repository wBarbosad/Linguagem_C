#include <stdio.h>
int pot(int b, int e);

int main(){
	int v1, v2, calculo, ss;

	printf("Valor base: ");
	scanf("%d", &v1);

    printf("Valor expoente: ");
	scanf("%d", &v2);

	printf("%d --- %d", v1, v2);
	printf("\n");

	ss = pot(v1,v2);
    printf("Resultado = %d", ss);


}
int pot(int b, int e){
	int calculo;
    int i, s=b;
    if (e==0)
        return 1;
    printf("\n\n%d -- %d\n", b, e);
	for(i=e-1; i>0; i--){
        //calculo = (a)*i;
       // printf("%d", i);
        s=s*b;
	}
	return s;
}
