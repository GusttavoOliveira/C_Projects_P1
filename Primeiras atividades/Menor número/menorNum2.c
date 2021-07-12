#include <stdio.h>

int main(void){
    float num1, num2;

    puts("Ola, bem vindo.");
    puts("Este programa exibe o menor dentre dois numeros digitados pelo usuario.");

    printf("\nPara iniciar digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Agora digite o segundo numero: ");
    scanf("%f", &num2);

    if(num1 == num2){
        puts("\nEsses numeros sao iguais.");
    }else if(num1 > num2){
        printf("\nO menor numero eh: %.2f\n", num2);
    }else{
        printf("\nO menor numero eh: %.2f\n", num1);
    }

    return 0;
}
