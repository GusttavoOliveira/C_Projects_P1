#include <stdio.h>

//Problema 6

/*Escreva um programa que solicita ao usu�rio para introduzir dois inteiros positivos
a e b. Al�m de imprimirtodos os n�meros no intervalo fechado nesses dois n�meros,
o programa deve exibir a soma dos valores do intervalo. O programa deve permitir
que o usu�rio introduza primeiro o maior ou o menor valor.*/

int main(void){
    int a, b, soma, aux;

    soma = 0;

    printf("\nPor favor, insira o valor de a: ");
    scanf("%d", &a);
    printf("\nPor favor, insira o valor de b: ");
    scanf("%d", &b);

    if( a > b){
        aux = b;
        b = a;
        a = aux;
    }
    for( a = a; a <= b; a = a + 1){
        printf("%d\n", a);
        soma = soma + a;
    }

    printf("\nA soma dos numeros deste intervalo foi: %d\n", soma);



    return 0;
}
