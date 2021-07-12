/**
===============================================================================================
 Problema:	1176 - Fibonacci em Vetor
 Autor:     Pedro Henrique
===============================================================================================
*/
#include <stdio.h>

long long int Fibonacci(int n){
    int i;
    long long int ant1, ant2, atual = 0;

    if (n == 1 || n == 2){
        return 1;
    }else{
        ant2 = 1;
        ant1 = 1;
        for(i = 3; i <= n; i++){
            atual = ant1 + ant2;
            ant2 = ant1;
            ant1 = atual;
        }
        return atual;
    }
}   

int main(void){
    int t, i, n;
    long long int fib;

    scanf("%ld", &t);

    for(i = 1; i <= t; i++){
        scanf("%d", &n);
        fib = Fibonacci(n);
        printf("Fib(%d) = %lli\n", n, fib);
    }
    return 0;
}
