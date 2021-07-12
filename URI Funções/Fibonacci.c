#include <stdio.h>

unsigned long long Fib(int posicao){
    unsigned long long termoAnterior = 1, termoAtual = 1, penultimo = 1, i;

    if(posicao == 0){
        return 0;
    }
    if(posicao == 1){
        return 1;
    }
    if(posicao == 2){
        return 1;
    }

    for(i = 3 ; i <= posicao; i++){

        termoAtual = termoAnterior + penultimo;
        penultimo = termoAnterior;
        termoAnterior = termoAtual;
    }
    return termoAtual;


}

int main(void){
    int testes, posicao, i;
    unsigned long long  termoFib;

    scanf("%d", &testes);

    for(i = 0; i<testes; i++){
        scanf("%d", &posicao);

        termoFib = Fib(posicao);

        printf("Fib(%d) = %llu\n", posicao, termoFib);
    }

    return 0;
}
