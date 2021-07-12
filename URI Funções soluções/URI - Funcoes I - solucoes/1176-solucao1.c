/**
===============================================================================================
 Problema:	1176 - Fibonacci em Vetor
 Autora:    Tamires Seeling
===============================================================================================
*/

#include <stdio.h>

unsigned long long int Fib(unsigned long long int N){

    unsigned long long int atual;
    unsigned long long int anterior2;
    unsigned long long int anterior1;
    int j;

    if (N == 0)
        atual = 0;

    if (N == 1)
        atual = 1;

    if (N == 2)
        atual = 1;

    if (N != 0 && N != 1 && N != 2){
        anterior2 = 1;
        anterior1 = 1;

        for (j = 3; j <= N; j++){
            atual = anterior2 + anterior1;
            anterior2 = anterior1;
            anterior1 = atual;
        }
    }

    return atual;
}

int main (void){

    unsigned long long int T, N, i, j, atual, anterior1, anterior2;

    scanf("%llu", &T);

    for (i = 1; i <= T; i++){

        scanf("%llu", &N);

        atual = Fib(N);
        printf("Fib(%llu) = %llu\n", N, atual);
    }

    return 0;
}
