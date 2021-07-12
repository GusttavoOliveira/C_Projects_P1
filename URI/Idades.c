#include <stdio.h>

int main(void){
    int idade, contador, soma;
    double media;

    soma = 0;
    contador = 0;

    scanf("%d", &idade);

    while(idade >= 0){
        soma = soma + idade;
        contador++;
        scanf("%d", &idade);
    }

    media = (double) soma/contador;
    printf("%.2lf\n", media);


    return 0;
}
