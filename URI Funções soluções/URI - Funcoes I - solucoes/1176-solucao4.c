/**
===============================================================================================
 Problema:	1176 - Fibonacci em Vetor
 Autor:     Jonas Araujo
===============================================================================================
*/
#include <stdio.h>

double Fibonacci(int nTermo) {
    double termo1 = 1, termo2 = 1, numero = 0;
    int t = 0;
    for(t = 0; t < nTermo; t++) {
        termo2 = termo1;
        termo1 = numero;
        numero = termo1 + termo2;
    }
    return numero;
}


int main() {
    int i, termo;
    unsigned long long fibo;

    scanf("%d", &i);

    do {
        scanf("%d", &termo);
        fibo = Fibonacci(termo);
        printf("Fib(%d) = %llu\n", termo, fibo);
        i--;
    } while(i > 0);

    return 0;
}
