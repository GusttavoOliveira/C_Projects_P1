#include <stdio.h>

int main(void){
    float diametro, raio, perimetro, area;

    puts("Ola, bem vindx!");
    puts("Este programa calcula dados essenciais de um circulo baseado no seu diametro.");

    printf("Para iniciar o calculo, digite o diametro do circulo: ");
    scanf("%f", &diametro);

    if(diametro <= 0){
        puts("Este circulo nao existe.");
        return 1;
    }else{
        raio = diametro/2;
        perimetro = 2 * 3.14 * raio;
        area = 3.14 * raio * raio;

        printf("\nQuando o circulo tiver diametro = %.1f\nSeu raio corresponde a %.1f\nSeu perimetro corresponde a %.1f\nSua area corresponde a %.1f\n", diametro, raio, perimetro, area);

    }

    return 0;
}
