#include <stdio.h>
#include <math.h>

float Delta(float a, float b, float c){
    return b*b - 4*a*c;
}

int ResolveEquacao2Grau(float a, float b, float c, float *x1, float *x2){
    if (a == 0){
        return -1;
    }

    float delta = Delta(a, b, c);
    if (delta < 0)
        return -2;

    *x1 = (-b + sqrt(delta)) / (2*a);
    *x2 = (-b - sqrt(delta)) / (2*a);
    return 0;
}

int main(void){
    float a, b, c, r1, r2;
    int resultado;

    printf("Digite os coeficientes: ");
    scanf("%f %f %f", &a, &b, &c);

    resultado = ResolveEquacao2Grau(a, b, c, &r1, &r2);

    switch(resultado){
        case -2:
            puts("Nao possui raizes reais.");
            break;
        case -1:
            puts("Nao forma equacao do 2 grau.");
            break;
        case 0:
            printf("x1 = %.2f\nx2 = %.2f\n", r1, r2);
            break;
        default:
            puts("Resultado desconhecido");
    }

    return 0;
}
