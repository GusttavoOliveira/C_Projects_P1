/**
===============================================================================================
 Problema:	1554 - Bilhar N+1
 Autor:     Guilhermex2013
===============================================================================================
*/
#include <stdio.h>
#include <math.h>

int DistanciaBranca(int xa , int ya, int xb, int yb){

    int distancia, difx, dify;

    difx = xa - xb;
    dify = ya - yb;

    distancia = sqrt(pow(difx, 2) + pow(dify, 2));

    return distancia;
}


int main()
{
    int testes, cont, bolas, contfor, xbranca, ybranca, xauxiliar, yauxiliar, distanciamin, boladistmin, dist, boladist;

    scanf("%d", &testes);
    for (cont = 1; cont <= testes; cont ++){
        scanf("%d", &bolas);
        scanf("%d %d", &xbranca, &ybranca);
        for (contfor = 1; contfor <= bolas; contfor++){
            scanf("%d %d", &xauxiliar, &yauxiliar);
            if (contfor == 1){
                distanciamin = DistanciaBranca(xauxiliar, yauxiliar, xbranca, ybranca);
                boladistmin = contfor;
            }
            else{
                dist = DistanciaBranca(xauxiliar, yauxiliar, xbranca, ybranca);
                boladist = contfor;
                if (dist < distanciamin){
                    distanciamin = dist;
                    boladistmin = boladist;
                }

            }
        }
        printf("%d\n", boladistmin);
    }

    return 0;
}
