/**
===============================================================================================
* Nome:         1221 - Primo Rápido
* Autora:       Tamires Seeling
* Descrição:    Este programa lê um número e informa se o mesmo é primo.
===============================================================================================
*/

#include <stdio.h>
#include <math.h> /* Para poder utilizar a função "sqrt". */

int EhPrimo(int x){

    int j; /* A varíavel "i" podia ser utilizada, mas para evidenciar que são diferentes utilizei a variável "j" neste exercício. */
    int soma;

    soma = 0; /* Para zerar o contador. */

    for(j = 2; j <= sqrt(x); j++){
    /*
    Utilizei a função "sqrt" porque pesquisei e vi que um número será primo quando:
    "não tiver divisão inteira por nenhum número primo menor ou igual a sua raiz quadrada."

    A variável "j" começa em 2 para que o programa não precise % o "x" por 1, pois o resto
    será sempre zero. Dessa forma o número será primo quando a "soma" for igual zero.
    */

         if(x % j == 0)
            soma++;
    }

    if (soma == 0)
        return 1;
    else
        return 0;
}

int main (void){

    int N, i, X, resultado;

    scanf("%d", &N);

    for(i = 1; i <= N; i++){

    scanf("%d", &X);

    if ((resultado = EhPrimo(X)) == 1)
        printf("Prime\n");
    else
        printf("Not Prime\n");
    }

    return 0;
}
