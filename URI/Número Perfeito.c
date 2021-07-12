#include <stdio.h>

int main(void){
    int valor, i, soma, verificador, j, t;

    soma = 0;
    scanf("%d", &t);

    for(j = 0; j < t; j++){
        scanf("%d", &valor);

        for(i = 1; i < valor; i++){
            verificador = valor % i;

            if(verificador == 0){
                soma = soma + i;
            }
        }

        if(soma == valor){
            printf("%d eh perfeito\n", valor);
        }else if(soma != valor){
            printf("%d nao eh perfeito\n", valor);
        }

        soma = 0;
    }
    return 0;
}
