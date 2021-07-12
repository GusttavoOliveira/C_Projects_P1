#include <stdio.h>
//Problema 2

/*Escreva um programa que imprima todos os números de 0 a 10:

a. Com while*/

int main(void){
    int num;

    num = 0;

    while(num <= 10){
        printf("%d\n", num);
        num = num + 1;
    }

    return 0;
}
