#include <stdio.h>

int main(void) {
    int raio;
    float area;

    puts("Oi, bem vindo ao programa da area do circulo\n");
    printf("Digite aqui o raio do seu circulo: ");
    scanf("%d", &raio);

    area = 3.14 * raio * raio;

    printf("\nA area do circulo de raio %d corresponde a %.3f.\n", raio, area);

    return 0;

}
