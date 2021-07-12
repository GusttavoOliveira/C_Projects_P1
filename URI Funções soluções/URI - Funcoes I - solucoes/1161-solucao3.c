/**
===============================================================================================
 Problema:	1161 - Soma de Fatoriais
 Autora:    Renata Mendes
===============================================================================================
*/
#include <stdio.h>

long long int Fatorial(long long int numero){
    long long int contador, fatorial = 1;

    for(contador = 1; contador <= numero; contador++){
        fatorial = fatorial * contador;
    }

return fatorial;
}

int main(void){
    long long int testes, i, a, b, soma;

    while(scanf("%lld %lld", &a, &b) != EOF){
        soma = Fatorial(a) + Fatorial(b);
        printf("%lld\n", soma);
    }

return 0;
}
