#include <stdio.h>

int main(void){
    int num, soma;

    soma = 0;

    do{
        printf("Escreva qualquer numero inteiro: ");
        scanf("%d", &num);

        soma = soma + num;

    }while( num != 0);

    puts("\nChegamos ao final, voce digitou 0.");
    printf("\nA soma dos numeros que voce digitou eh: %d\n", soma);

    return 0;
}
