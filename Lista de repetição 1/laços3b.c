#include <stdio.h>

//Problema 3

/*Escreva um programa que imprima todos os números de -10 a 10:

b. Com do-while */

int main(void){
    int num;

    num = -10;

    do{
        printf("%d\n", num);
        num = num + 1;
    }while(num <= 10);

    return 0;
}
