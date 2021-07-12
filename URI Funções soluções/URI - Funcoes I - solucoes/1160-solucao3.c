/**
===============================================================================================
 Problema:	1160 - Crescimento Populacional
 Autor:     Jonas Araujo
===============================================================================================
*/
#include <stdio.h>

int Anos (int popA, int popB, double gA, double gB) {
    int popInicialA, popInicialB, anos = 1;
    while(1) {
        popInicialA = popA;
        popInicialB = popB;
        popA = popInicialA + ((popInicialA * gA) / 100);
        popB = popInicialB + ((popInicialB * gB) / 100);
        if(popB >= popA)
            anos++;

        if(anos > 100 || popA > popB)
            break;
    }
    return anos;
}


int main() {
    int i, anos;
    int popA, popB;
    double gA, gB;

    scanf("%d", &i);

    do {
        scanf("%d%d", &popA, &popB);
        scanf("%lf%lf", &gA, &gB);
        anos = Anos(popA, popB, gA, gB);
        if(anos > 100)
            puts("Mais de 1 seculo.");
        else
            printf("%d anos.\n", anos);

        i--;
    } while(i > 0);
    return 0;
}
