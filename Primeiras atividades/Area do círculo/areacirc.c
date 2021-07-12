#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int raio;
    float area;

    printf("Bem-vindo\n");

    raio = 5;
    area = 3.14 * raio*raio;

    printf("Para r = %d, a = %f\n", raio, area);

    return 0;
}

