/**
 ============================================================================
 Problema  : 1555 - Funcoes
 Autor     : Luiz Gusttavo
 ============================================================================
 */
#include <stdio.h>

int Rafael(int x, int y){
    return (9*x*x) + (y*y);
}

int Beto(int x, int y){
    return 2*(x*x) + (25*y*y);

}

int Carlos(int x, int y){
    return (-100*x) + (y*y*y);

}

int main(void){
    int x, y;
    int rafael, beto, carlos;
    int i, testes;

    scanf("%d", &testes);

    for(i = 0; i < testes; i++){

        scanf("%d%d", &x, &y);

        rafael = Rafael(x, y);

        beto = Beto(x, y);

        carlos = Carlos(x, y);

        if(rafael > carlos && rafael > beto){
            puts("Rafael ganhou");
        }else if(carlos > rafael && carlos > beto){
            puts("Carlos ganhou");
        }else{
            puts("Beto ganhou");
        }

    }

    return 0;
}
