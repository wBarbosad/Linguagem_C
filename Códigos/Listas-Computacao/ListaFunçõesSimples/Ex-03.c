#include <stdio.h>
long fat(long n);
int main(){

    int num;

    printf("Info. um número: ");
    scanf("%d", &num);

    fat(num);
}
long fat(long n){
    int i, s=0, fatoracao;

    for(i=n; i>=0; i--){
        fatoracao = n*i+(i-1)*n
    }

    printf("Fatoração = %d", s);
    if(n<=0){
        return 1;
    }

    return s;
}
