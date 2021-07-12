#include <stdio.h>

int EhPossivel(int valorCompra, int valorPago){
    int troco, resto, quant = 0;

    troco = valorPago - valorCompra;

    /** Testa se dá para pagar com duas notas iguais: **/
    if(troco % 2 == 0 && troco/2 == 2){
        return 1;
    }else if(troco % 5 == 0 && troco/5 == 2){
        return 1;
    }else if(troco % 10 == 0 && troco/10 == 2){
        return 1;
    }else if(troco % 20 == 0 && troco/20 == 2){
        return 1;
    }else if(troco % 50 == 0 && troco/50 == 2){
        return 1;
    }else if(troco % 100 == 0 && troco/100 == 2){
        return 1;
    }

    /**Testa se dá para pagar com duas notas diferentes: **/
    if(troco >= 100){
    quant += troco / 100;
    resto = troco % 100;
    troco = resto;
    }
    if(troco >= 50){
    quant += troco / 50;
    resto = troco % 50;
    troco = resto;
    }
    if(troco >= 20){
    quant += troco / 20;
    resto = troco % 20;
    troco = resto;
    }
    if(troco >= 10){
    quant += troco / 10;
    resto = troco % 10;
    troco = resto;
    }
    if(troco >= 5){
    quant += troco / 5;
    resto = troco % 5;
    troco = resto;
    }
    if(troco >= 2){
    quant += troco / 2;
    resto = troco % 2;
    troco = resto;
    }

    if(quant == 2){
        return 1;
    }else{
        return 0;
    }

}

int main(void){
    int preco, valorPago;
    int ehPossivel;

    while(1){
        scanf("%d %d", &preco, &valorPago);

        if(preco == 0 && valorPago == 0){
            break;
        }

        ehPossivel = EhPossivel(preco, valorPago);
        if(ehPossivel == 1){
            puts("possible");
        }else{
            puts("impossible");
        }

    }

    return 0;
}
