/**
 ============================================================================
 Problema  : 1555 - Funcoes
 Autor     : Igor Matheus
 ============================================================================
 */
#include <stdio.h>
#include "math.h"

int FuncaoR(int x, int y){
    int r = (pow(3*x, 2)) + (pow(y, 2));
    return r;
}

int FuncaoB(int x, int y){
    int b = (2 * x * x) + (pow(5*y, 2));
    return b;
}

int FuncaoC(int x, int y){
    int c = (-100 * x) + (pow(y, 3));
    return c;
}

int main(void){
    int X, Y, n, i;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){

        scanf("%d %d", &X, &Y);

        if (FuncaoR(X,Y) > FuncaoB(X,Y) && FuncaoR(X,Y) > FuncaoC(X, Y)){
            printf("Rafael ganhou\n");
        }else if (FuncaoB(X,Y) > FuncaoR(X,Y) && FuncaoB(X,Y) > FuncaoC(X, Y)){
            printf("Beto ganhou\n");
        }else if (FuncaoC(X,Y) > FuncaoR(X,Y) && FuncaoC(X,Y) > FuncaoB(X, Y)){
            printf("Carlos ganhou\n");
        }
    }

    return 0;
}