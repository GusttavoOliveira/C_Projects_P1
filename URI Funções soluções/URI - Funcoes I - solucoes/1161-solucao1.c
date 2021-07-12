/**
===============================================================================================
 Problema:	1161 - Soma de Fatoriais
 Autor:     Arthur Henrique
===============================================================================================
*/
#include <stdio.h>
#include <stdint.h>

long long int Fatorial(int n){
    long long int fatorial;

    if(n==0){
        return 1;
    }

    for(fatorial = 1; n>=1; n--){
        fatorial *= n;
    }

    return fatorial;
}


int main(void){
    long long int  valor1, valor2, soma;
    int termo1, termo2;

    while(scanf("%d %d", &termo1, &termo2)!= EOF){

        valor1 = Fatorial(termo1);
        valor2 = Fatorial(termo2);

        printf("%lld\n", valor1+valor2);
    }

    return 0;
}
