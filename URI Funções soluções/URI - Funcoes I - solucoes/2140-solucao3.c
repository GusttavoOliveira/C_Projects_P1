/**
===============================================================================================
 Problema:	2140 - Duas Notas
 Autora:    Renata Mendes
===============================================================================================
*/
#include <stdio.h>

int Troco(int valor, int pago){
    int troco, notas100, notas50, notas20, notas10, notas5, notas2, notasTotal, resultado;

    troco = pago - valor;

    if(troco >= 100){
        notas100 = troco/100;
        troco = troco%100;
    }else {
        notas100 = 0;
    }

    if(troco< 100 && troco >= 50){
        notas50 = troco/50;
        troco = troco%50;
    }else {
        notas50 = 0;
    }

    if(troco < 50 && troco >= 20){
        notas20 = troco/20;
        troco = troco%20;
    }else {
        notas20 = 0;
    }

    if(troco < 20 && troco >= 10){
        notas10 = troco/10;
        troco = troco%10;
    }else {
        notas10 = 0;
    }

    if(troco< 10 && troco >= 5){
        notas5 = troco/5;
        troco = troco%5;
    }else {
        notas5 = 0;
    }

    if(troco < 5 && troco >= 2){
        notas2 = troco/2;
        troco = troco%2;
    }else {
        notas2 = 0;
    }

    notasTotal = notas100 + notas50 + notas20 + notas10 + notas5 + notas2;

    if(notasTotal == 2){
        return 1;
    }else {
        return 0;
    }
}

int main(void){
    int valor, pago;

    while(1){
    scanf("%d %d", &valor, &pago);

    if(valor == 0 && pago == 0){
        break;
        }

    if(Troco(valor, pago)){
        printf("possible\n");
       }else{
        printf("impossible\n");
       }
    }

    return 0;
}