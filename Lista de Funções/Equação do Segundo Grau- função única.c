#include <stdio.h>
#include <math.h>

int ResolveEquacao2Grau(float a, float b, float c, float *x1, float *x2){
    float delta;

    if(a == 0){
        return -1;
    }

    delta = b*b - 4*a*c;

    if(delta < 0){
        return -2;
    }

    *x1 = (-b + sqrt(delta)) / 2*a;
    *x2 = (-b - sqrt(delta)) / 2*a;

    return 0;
}

int main(void){
    float a, b, c, x1 = 0, x2 = 0;
    int retorno;

    puts("Este programa calcula as raizes de uma equacao do segundo grau.");
    printf("Digite o calor de a: ");
    scanf("%f", &a);
    printf("Digite o calor de b: ");
    scanf("%f", &b);
    printf("Digite o calor de c: ");
    scanf("%f", &c);

    retorno = ResolveEquacao2Grau(a, b, c, &x1, &x2);

    switch(retorno){
        case -2:
            puts("\nNao possui raizes reais.");
            break;
        case -1:
            puts("\nNao forma equacao do 2 grau.");
            break;
        case 0:
            printf("\nx' = %.2f\nx'' = %.2f\n", x1, x2);
            break;
        default:
            puts("Resultado desconhecido");
    }

    return 0;
}
