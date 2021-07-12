/**
 ============================================================================
 Problema  : 1555 - Funcoes
 Autor     : Larissa Lucena
 ============================================================================
 */
#include <stdio.h>
int FuncaoRafael(int x, int y){
    int r = pow(3*x, 2) + pow(y, 2);
    return r;
}

int FuncaoBeto(int x, int y){
    int b = 2*pow(x, 2) + pow(5*y, 2);
    return b;
}

int FuncaoCarlos(int x, int y){
    int c = -100*x  + pow(y, 3);
    return c;
}

int main (void){
    int i, x, y, rafael, beto, carlos;

    scanf("%d", &i);

    while(i--){
        scanf("%d %d", &x, &y);
        rafael = FuncaoRafael(x, y);
        beto = FuncaoBeto(x, y);
        carlos = FuncaoCarlos(x, y);
        if(beto < rafael && carlos < rafael)
            puts("Rafael ganhou");
        if(rafael < beto && carlos < beto)
            puts("Beto ganhou");
        if(rafael < carlos && beto < carlos)
            puts("Carlos ganhou");
    }

    return 0;
}
