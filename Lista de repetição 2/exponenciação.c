#include <stdio.h>

int main(void){
    int base, expo, aux, i;

    puts("Ola, bem vindx!");
    puts("Este programa calcula uma exponenciacao.");

    printf("\nDigite o valor da base: ");
    scanf("%d", &base);
    printf("Digite o valor do expoente: ");
    scanf("%d", &expo);
    aux = base;

    for(i = 1; i < expo; i = i + 1){
        base = base * aux;
    }

    printf("\nO resultado de %d elevado a %d eh: %d\n", aux, expo, base);

    return 0;
}
