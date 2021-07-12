#include <stdio.h>

int main(void){
    int base, altura;
    float area;

    puts("Ola bem vindo!");
    puts("Esse programa calcula area de um triangulo qualquer.");

    printf("\nDigite o valor da base do triangulo: ");
    scanf("%d", &base);
    printf("\nDigite o valor da altura deste triangulo: ");
    scanf("%d", &altura);

    area = base * altura / 2;

    printf("\n\nA area de um triangulo de base %d e altura %d eh: %.1f\n", base, altura, area);


    return 0;
}
