/**
 ============================================================================
 Problema  : 1555 - Funcoes
 Autor     : Bertrand Lira
 ============================================================================
 */
#include <stdio.h>

int Rafael(int x, int y){
    int r;

    r = (9*x*x) + (y*y);

    return r;
}

int Beto(int x, int y){
    int b;

    b = 2*(x*x) + (25*y*y);

    return b;
}

int Carlos(int x, int y){
    int c;

    c = -100*x + (y*y*y);

    return c;
}

int MaiorDe3(int b, int c, int r){
    int maior;

    if(b > c && b > r){
        return 1;
    }else if(c > b && c > r){
        return 2;
    }else if(r > c && r > b){
        return 3;
    }

}

int main(void){
    int teste, x, y;
    int b, r, c, maior;

    scanf("%d", &teste);

    while(teste--){
        scanf("%d %d", &x, &y);

        b = Beto(x, y);
        r = Rafael(x, y);
        c = Carlos(x, y);

        maior = MaiorDe3(b, c, r);

        switch(maior){
            case 1:
                printf("Beto ganhou\n");
                break;
            case 2:
                printf("Carlos ganhou\n");
                break;
            case 3:
                printf("Rafael ganhou\n");
                break;
        }
    }

    return 0;
}