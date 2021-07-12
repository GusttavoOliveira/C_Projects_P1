#include <stdio.h>

int main(void){
    int num, contaPares;

    do{
        printf("Escreva qualquer numero inteiro: ");
        scanf("%d", &num);

        if(num % 2 == 0 && num != 0)
            contaPares = contaPares + 1;

    }while( num != 0);

    puts("\nChegamos ao final, voce digitou 0.");
    printf("Voce digitou %d numeros pares.\n", contaPares);

    return 0;
}
