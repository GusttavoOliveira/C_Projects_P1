#include <stdio.h>

#define MAX_TAM 61

int main(void){
    int botasEsquerdas[MAX_TAM];
    int botasDireitas[MAX_TAM];
    int pes, numPes, i, soma = 0;
    char lado;

    while(scanf("%d", &pes) != EOF){
        for(i=30; i<=60; i++){
                botasDireitas[i] = botasEsquerdas[i] = 0;
        }
        while(pes--){
            scanf("%d %c", &numPes, &lado);

            if(lado == 'D'){
                botasDireitas[numPes]++;
            }else{
                botasEsquerdas[numPes]++;
            }

        }
        for(i=30; i<=60; i++){

            (botasDireitas[i] > botasEsquerdas[i]) ? (soma += botasEsquerdas[i]) : (soma += botasDireitas[i]);
        }
        printf("%d\n", soma);
        soma = 0;
        }




    return 0;
}
