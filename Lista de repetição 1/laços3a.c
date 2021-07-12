#include <stdio.h>

//Problema 3

/*Escreva um programa que imprima todos os números de -10 a 10:

a. Com while;*/

int main(void){
    int num;

    num = -10;

    while(num <= 10){
        printf("%d\n", num);
        num = num + 1;
    }

    return 0;
}
