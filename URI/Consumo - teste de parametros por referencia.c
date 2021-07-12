#include <stdio.h>

double Consumo(int *ptrDistancia, double *ptrCombustivel){
    double consumo;

    consumo = *ptrDistancia/ *ptrCombustivel;
    *ptrCombustivel = *ptrCombustivel - 2;
    return consumo;
}

int main (void){
    double consumo, combustivel;
    int distancia;

    scanf("%d %lf", &distancia, &combustivel);

    consumo = Consumo(&distancia, &combustivel);
    printf("%.3lf km/l\n", consumo);
    printf("\nO valor da variavel combustivel eh: %lf\n", combustivel);

    return 0;

}
