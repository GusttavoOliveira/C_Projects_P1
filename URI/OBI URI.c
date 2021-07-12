#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int quant, i, tamanho;
    char palavra[25];

    scanf("%d%*c", &quant);

    for(i=1; i<=quant; i++){
        scanf("%s", palavra);

        tamanho = strlen(palavra);

        if(tamanho == 3){
            if(palavra[0] == 'O' && palavra[1] == 'B'){
                palavra[2] = 'I';
            }
            if(palavra[0] == 'U' && palavra[1] == 'R'){
                palavra[2] = 'I';
            }
        }

        printf("%s%s", palavra, i == quant? "\n": " ");

    }

    return 0;
}
