#include <stdio.h>

double Consumo(int distancia, double combustivel){
    double consumo;

    consumo = distancia/combustivel;
    return consumo;
}

int main (void){
    double consumo, combustivel;
    int distancia;

    scanf("%d %lf", &distancia, &combustivel);

    consumo = Consumo(distancia, combustivel);
    printf("%.3lf km/l\n", consumo);

    return 0;

}
