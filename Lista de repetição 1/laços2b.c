#include <stdio.h>

//Problema 2

/*Escreva um programa que imprima todos os números de 0 a 10:

b. Com do-while */

int main(void){
    int num;

    num = 0;

    do{
        printf("%d\n", num);
        num = num + 1;
    }while(num <= 10);

    return 0;
}
