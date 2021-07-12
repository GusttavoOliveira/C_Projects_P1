#include <stdio.h>

int main(void){
    int tamanhoDoVetor, valor, menor, posicaoMenor, i;

    scanf("%d", &tamanhoDoVetor);

    int vetor[tamanhoDoVetor];

    for(i=0; i<tamanhoDoVetor; i++){
        scanf("%d", &valor);

        vetor[i] = valor;
        if(i == 0){
            menor = vetor[i];
            posicaoMenor = i;
        }

        if(i != 0 ){
            if(vetor[i] < vetor[i-1]){
                menor = vetor[i];
                posicaoMenor = i;
            }
        }


    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicaoMenor);


    return 0;
}
