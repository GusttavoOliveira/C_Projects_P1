#include <stdio.h>

int main(void){
    int anterior, valor, maior, posicao, i;

    anterior = -1;

    for(i = 1; i <= 100; i++){
        scanf("%d", &valor);

        if(anterior == -1){ //É o primeiro "valor".
            anterior = valor;
        }else if( valor >= anterior){
            maior = valor;
            posicao = i;
            anterior = valor;
        }
    }
    printf("%d\n%d\n", maior, posicao);

    return 0;
}
