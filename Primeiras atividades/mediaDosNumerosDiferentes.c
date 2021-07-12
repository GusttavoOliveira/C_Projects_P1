#include <stdio.h>

int main(void){
    int num, contador;
    float media, soma;

    soma = 0;
    contador = 0;
    do{
        printf("Escreva qualquer numero inteiro: ");
        scanf("%d", &num);

        contador = contador + 1; //conta o numero de vezes que o usuario digitou um numero qualquer.

        soma = soma + num; //Faz a soma dos numeros digitados.

    }while( num != 0);

    media = soma/(contador - 1);

    puts("\nChegamos ao final, voce digitou 0.");
    printf("\nA media aritmetica dos numeros que voce digitou eh: %.2f\n", media);

    return 0;
}
