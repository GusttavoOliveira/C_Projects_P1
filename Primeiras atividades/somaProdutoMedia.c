#include <stdio.h>

int main(void){
    int x, y, z;
    int soma, produto;
    float media;

    puts("Ola bem vindx!");
    puts("Esse programa calcula a soma, o produto e a media aritmetica entre 3 numeros inteiros.");

    printf("\nPara iniciar, digite o primeiro numero: ");
    scanf("%d", &x);
    printf("Para iniciar, digite o segundo numero: ");
    scanf("%d", &y);
    printf("Para iniciar, digite o terceiro numero: ");
    scanf("%d", &z);

    //Calculo da soma:
    soma = x + y + z;

    //calculo do produto:
    produto = x * y * z;

    //calculo da media:
    media = ( x + y + z ) / 3.0;

    printf("\nA soma desses tres numeros eh: %d", soma);
    printf("\nO produto desses tres numeros eh: %d", produto);
    printf("\nA media desses tres numeros eh: %.2f\n", media);

    return 0;
}
