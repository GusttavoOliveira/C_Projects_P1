#include <stdio.h>

int main(void){
    int vetor[20], valor, i, valorAlto, vetorAux[20];


    valorAlto = 19;
    for(i=0; i<20; i++){
        scanf("%d", &valor);

        vetor[i] = valor;
        vetorAux[valorAlto--] = valor;
    }

    for(i=0; i<20; i++){
        vetor[i] = vetorAux[i];
    }

    for(i=0; i<20; i++){
        printf("N[%d] = %d\n", i, vetor[i]);
    }
    return 0;
}
