#include <stdio.h>

int main(void){
    int a, b, c;
    int maior;

    puts("Ola, bem vindo!");
    puts("Este programa informa qual o maior dos tres numeros que voce digitar.");

    printf("\nPara iniciar, digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Agora, digite o segundo valor: ");
    scanf("%d", &b);
    printf("E agora, digite o terceiro valor: ");
    scanf("%d", &c);

    if(a >= b){
        maior = a;
    }else{
        maior = b;
    }

    if(c >= maior)
        maior = c;

    printf("\n%d foi o maior numero.\n", maior);


    return 0;
}
