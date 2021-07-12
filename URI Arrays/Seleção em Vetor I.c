#include <stdio.h>

int main(void){
    double vetor[100], valor;
    int i;

    for(i=0; i<100; i++){
        scanf("%lf", &valor);

        vetor[i] = valor;

    }

    for(i=0; i<100; i++){
        if(vetor[i] <= 10){
            printf("A[%d] = %.1lf\n", i, vetor[i]);
        }

    }
    return 0;
}
