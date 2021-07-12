#include <stdio.h>

int main(void){
    int num, contaPares;

    do{
        printf("Escreva qualquer numero inteiro: ");
        scanf("%d", &num);
    }while( num != 0);

    puts("\nChegamos ao final, voce digitou 0.");


    return 0;
}
