/**
===============================================================================================
 Problema:	1221 - Primo Rápido
 Autor:     Jonas Araujo
===============================================================================================
*/
#include <stdio.h>
#include <math.h>

int EhPrimo(long long numero) {
    int raiz, t;
    raiz = sqrt(numero);
    for(t = 2; t <= raiz; t++) {
        if(numero % t == 0)
            return 0;
    }
    if(numero == 1)
        return 0;
    else
        return 1;

}

int main() {
    int i;
    long long numero;

    scanf("%d", &i);

    do {
        scanf("%lld", &numero);
        if(EhPrimo(numero) == 1)
            puts("Prime");
        else
            puts("Not Prime");
        i--;
    } while(i > 0);


    return 0;
}
