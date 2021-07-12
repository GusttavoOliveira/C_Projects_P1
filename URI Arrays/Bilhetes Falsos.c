#include <stdio.h>

int main(void){
    int numBilhete, bilhetes[10000], i, quantBilhetes, quantPessoas, contador = 0;

    while(1){
        scanf("%d %d", &quantBilhetes, &quantPessoas);

        if(quantBilhetes == 0 && quantPessoas == 0){
            break;
        }
        for(i=0; i<quantBilhetes; i++){
            bilhetes[i] = 0;
        }

        for(i=0; i<quantPessoas; i++){
            scanf("%d", &numBilhete);

            bilhetes[numBilhete-1]++;
        }

        for(i=0; i<quantBilhetes; i++){

            if(bilhetes[i] > 1){
                contador++;
            }
        }

        printf("%d\n", contador);

        contador = 0;
    }

    return 0;
}
