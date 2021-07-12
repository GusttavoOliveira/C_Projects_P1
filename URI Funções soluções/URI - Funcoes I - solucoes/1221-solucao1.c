/**
===============================================================================================
 Problema:	1221 - Primo Rápido
 Autor:     Pedro Henrique
===============================================================================================
*/
#include <stdio.h>
#include <math.h>

int EhPrimo(int n){
    int primo = 1, i;

    for(i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            primo = 0;
            break;
        }

    }
    return primo;
}


int main(void){
    int t, n, primo, i;

    scanf("%d", &t);

    for(i = 1; i <= t; i++){
        scanf("%d", &n);

        primo = EhPrimo(n);

        if(primo == 1)
            printf("Prime\n");
        else if(primo == 0)
            printf("Not Prime\n");
        
    }

    return 0;
}
