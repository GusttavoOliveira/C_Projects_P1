#include <stdio.h>
#include <math.h>



/**
*Delta(): Calcula o valor do discriminante.
*
*Parâmetros:
*   a(entrada): coeficiente a.
*   b(entrada): coeficiente b.
*   c(entrada): coeficiente c.
*
*Retorno: Retorna sempre, somente o valor do discrimante.
**/
double Delta(double a, double b, double c){
    double delta;

    delta = (b*b) - (4*a*c);
    return delta;
}

/**
*RaizX1(): Calcula a primeira raiz da equação de segundo grau.
*
*Parâmetros:
*   a(entrada): coeficiente a.
*   b(entrada): coeficiente b.
*   delta(entrada): valor do discriminante.
*
*Retorno: Retorna sempre, a raiz que contem "+" entre o -b e o sqrt(delta).
**/

double RaizX1(double a, double b, double delta){
    double raiz1;

    raiz1 = ((-b) + sqrt(delta)) / (2*a);
    return raiz1;
}

/**
*RaizX1(): Calcula a segunda raiz da equação de segundo grau.
*
*Parâmetros:
*   a(entrada): coeficiente a.
*   b(entrada): coeficiente b.
*   delta(entrada): valor do discriminante.
*
*Retorno: Retorna sempre, a raiz que contem "-" entre o -b e o sqrt(delta).
**/
double RaizX2(double a, double b, double delta){
    double raiz2;

    raiz2 = ((-b) - sqrt(delta)) / (2*a);
    return raiz2;
}


int main(void){
    double a, b, c;
    double raiz1, raiz2, delta;


    puts("Ola, esse programa calcula as raizes de uma equacao do segundo grau.\n");
    puts("Por favor, digite os valores dos coeficientes:");
    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);
    printf("c: ");
    scanf("%lf", &c);

    if(a == 0){
        puts("\nEsses coeficientes nao formam equacao do segundo grau.");
        return 1;
    }

    //Calcula e guarda o valor do discriminante.
    delta = Delta(a, b, c);


    if(delta < 0){
        puts("Nao existem raizes reais.");
        return 2;
    }

    //Calcula e guarda o valor da primeira raiz.
    raiz1 = RaizX1(a, b, delta);

    //Calcula e guarda o valor da segunda raiz.
    raiz2 = RaizX2(a, b, delta);

    printf("\nA raiz de x' eh: %.2lf\n", raiz1);
    printf("A raiz de x'' eh: %.2lf\n", raiz2);

    return 0;
}
