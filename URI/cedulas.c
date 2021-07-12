#include <stdio.h>

int main(void){
    int saque, quant, resto;

    scanf("%d", &saque);

    printf("%d", saque);

    if(saque >= 100){
    quant = saque / 100;
    resto = saque % 100;
    printf("\n%d notas de 100 reais.", quant);
    saque = resto;
    }
    if(saque >= 50){
    quant = saque / 50;
    resto = saque % 50;
    printf("\n%d notas de 50 reais.", quant);
    saque = resto;
    }
    if(saque >= 20){
    quant = saque / 20;
    resto = saque % 20;
    printf("\n%d notas de 20 reais.", quant);
    saque = resto;
    }
    if(saque >= 10){
    quant = saque / 10;
    resto = saque % 10;
    printf("\n%d notas de 10 reais.", quant);
    saque = resto;
    }
    if(saque >= 5){
    quant = saque / 5;
    resto = saque % 5;
    printf("\n%d notas de 5 reais.", quant);
    saque = resto;
    }
    if(saque >= 2){
    quant = saque / 2;
    resto = saque % 2;
    printf("\n%d notas de 2 reais.", quant);
    saque = resto;
    }
    if(saque >= 1){
    quant = saque / 1;
    resto = saque % 1;
    printf("\n%d notas de 1 reais.", quant);
    }

    return 0;
}
