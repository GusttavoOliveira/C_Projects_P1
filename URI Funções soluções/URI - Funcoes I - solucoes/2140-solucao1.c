/**
===============================================================================================
 Problema:	2140 - Duas Notas
 Autor:     Guilhermex2013
===============================================================================================
*/
#include <stdio.h>

int Notas(dinheiro){
    int prova = 0;
    int notas100, notas50, notas20, notas10, notas5, notas2, notas1, resto100, resto50, resto20, resto10, resto5, resto2;

    notas100 = dinheiro / 100;
    resto100 = (dinheiro % 100);

    notas50 = resto100 / 50;
    resto50 = resto100 % 50;

    notas20 = resto50 / 20;
    resto20 = resto50 % 20;

    notas10 = resto20 / 10;
    resto10 = resto20 % 10;

    notas5 = resto10 / 5;
    resto5 = resto10 % 5;

    notas2 = resto5 / 2;
    resto2 = resto5 % 2;

    notas1 = resto2;

    if (notas100 != 0){
        prova++;
    }
    if (notas50 != 0){
        prova++;
    }
    if (notas20 != 0){
        prova++;
    }
    if (notas10 != 0){
        prova++;
    }
    if (notas5 != 0){
        prova++;
    }
    if (notas2 != 0){
        prova++;
    }
    if (notas1 != 0){
        prova++;
    }

    return prova;
}


int main()
{
    int a, b, troco, teste;
   while(1){
    scanf("%d %d", &a, &b);
    if (a == 0 && b == 0){
        break;
    }
    troco = b - a;
    teste = Notas(troco);

    if (teste == 2){
        printf("possible\n");
    }
    else{
        printf("impossible\n");
    }
   }


    return 0;
}