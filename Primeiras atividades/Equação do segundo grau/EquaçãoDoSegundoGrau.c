#include <stdio.h>
#include <math.h>

int main(void){
    float coefA, coefB, coefC;
    float delta, raiz1, raiz2;

    puts("Ola, bem vindo!");
    puts("Este programa calcula as raizes de uma equacao qualquer do segundo grau.");

    printf("\nDigite os coeficientes da sua equacao na ordem em que se pede:\n");
    printf("a = ");
    scanf("%f", &coefA);
    printf("b = ");
    scanf("%f", &coefB);
    printf("c = ");
    scanf("%f", &coefC);

    //Verificando se existe equacao do segundo grau:
    if(coefA == 0){
        printf("\nEstes coeficientes nao formam uma equacao do segundo grau pois a=0.\n");
        return 1;}

    //Calculo do discriminante:
    delta = (coefB*coefB) - (4 * coefA * coefC);

    //Verifica se tem raízes reais
    if(delta < 0){
        printf("\nNao existem raizes reais pois o discriminante eh menor que zero.\n");
        return 2;
    }
    //Verifica se tem apenas uma raíz.
    if(delta == 0){
        printf("\nEsta equacao possui apenas uma raiz real.\n\n");
        raiz1 = -coefB / (2 * coefA);
        printf("A raiz desta equacao eh: %.1f\n", raiz1);
    }
    if(delta > 0){
        printf("\nEsta equacao tem duas raizes reais distintas.\n\n");
        raiz1 = (-coefB + sqrt(delta)) / (2 * coefA);
        raiz2 = (-coefB - sqrt(delta)) / (2 * coefA);
        printf("As raizes desta equacao sao x'=%.1f e x''= %.1f\n", raiz1, raiz2);
    }






    return 0;
}
