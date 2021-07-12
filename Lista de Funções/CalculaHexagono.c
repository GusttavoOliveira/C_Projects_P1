#include <stdio.h>
#include <math.h>

void CalculaHexagono(float l, float *area, float *perimetro){
    *area = (3*l*l*sqrt(3))/2;
    *perimetro = 6*l;

}

int main(void){
    float lado, area = 0, perimetro = 0;


    puts("Este programa calcula a area e o perimetro de um hexagono qualquer.");
    printf("\nDigite o lado do hexagono: ");
    scanf("%f", &lado);

    CalculaHexagono(lado, &area, &perimetro);

    printf("\nA area do hexagono eh: %.2f", area);
    printf("\nO perimetro do hexagono eh: %.2f\n", perimetro);


    return 0;
}
