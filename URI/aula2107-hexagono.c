#include <stdio.h>
#include <math.h>

void CalculaHexagono(float l, float *area, float *perimetro){
    *area = (3*l*l*sqrt(3)) / 2;
    *perimetro = 6*l;
}

int main(void){
    float lado, area, perimetro;

    printf("Digite o lado: ");
    scanf("%f", &lado);

    CalculaHexagono(lado, &area, &perimetro);

    printf("Dados do hexagono de lado %.2f:\n"
            "\tArea: %.2f\n\tPerimetro: %.2f\n", lado, area, perimetro);

    return 0;
}
