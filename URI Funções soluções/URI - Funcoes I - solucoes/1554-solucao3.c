/**
===============================================================================================
 Problema:	1554 - Bilhar N+1
 Autor:     Arthur Henrique
===============================================================================================
*/
#include <stdio.h>
#include <math.h>

long double Distancia(int x1, int x2, int y1, int y2){
    long double distX, distY;

    distX = x2 - x1;
    distY = y2 - y1;

    return sqrt(pow(distX,2) + pow(distY,2));
}

int main(void){
    int testes, bolas;
    int x1, x2, y1, y2;
    int cont1 = 0, cont2 = 0, aux2 = 0;
    long double dist, aux1 = 0;

    scanf("%d", &testes);

    while(++cont1<=testes){
        scanf("%d", &bolas);
        scanf("%d %d", &x1, &y1);

        while(++cont2<=bolas){
            scanf("%d %d", &x2, &y2);

            dist = Distancia(x1, x2, y1, y2);

            if(aux1==0){
                aux1 = dist;
                aux2 = cont2;
            }
            if(dist<aux1){
                aux1 = dist;
                aux2 = cont2;
            }
        }
        printf("%d\n", aux2);
        cont2 = aux1 = 0;
    }

    return 0;
}
