#include <stdio.h>

int main(void){
    float altura, base, area;
    float rendimento;
    float volumeLatas, volumePreciso, latas;

    printf("Por favor, digite a altura da parede: ");
    scanf("%f", &altura);
    printf("Agora digite o comprimento da parede: ");
    scanf("%f", &base);

    area = base * altura; //C�lculo da area.
    printf("\nA area da sua parede correspode a: %.2f\n", area);

    printf("\nAgora por gentileza informe o rendimento da tinta escolhida (em metros quadrados por litro): ");
    scanf("%f", &rendimento);
    printf("Digite o volume de uma lata da tinta escolhida (em litros): ");
    scanf("%f", &volumeLatas);

    volumePreciso = area/rendimento; //C�lculo do n�mero de litros necess�rios para cobrir a parede.
    latas = volumePreciso/volumeLatas; //C�lculo do n�mero de latas baseado no n�mero de litros que cobrem uma parede.

    printf("\nA quantidade de latas de tinta necessarias para cobrir essa parede corresponde a: %.2f\n", latas);




    return 0;
}
