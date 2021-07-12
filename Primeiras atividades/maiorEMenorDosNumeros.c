#include <stdio.h>

int main(void){
    int num, maior, menor, contador;


    do{
        printf("Escreva qualquer numero inteiro: ");
        scanf("%d", &num);
        contador + 1;

        if((num >= maior) || contador == 1)
            maior = num;
        if((num <= menor && num != 0) || contador == 1)
            menor = num;

    }while( num != 0);

    puts("\nChegamos ao final, voce digitou 0.");
    printf("\nO menor numero digitado foi %d e o maior numero digitado foi %d\n", menor, maior);

    return 0;
}
