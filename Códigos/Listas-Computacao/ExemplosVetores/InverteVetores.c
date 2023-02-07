#include <stdio.h>

int main() {
    int a[5], b[5], i, j;

    for (i=0; i<=4; i++) {
        printf("\nInforme o elemento %d do primeiro vetor:", i);
        scanf("%d", &a[i]);
    }
    for (i=0; i<=4; i++) {
        printf("\nInforme o elemento %d do segundo vetor:", i);
        scanf("%d", &b[i]);
    }
    for(i=0; i<=4; i++) {
        for(j=0; j<=4; j++) {
            if (a[i]==b[j]) {
                printf("\nIgual: %d", a[i]);
                break;
            }
        }
    }

}
