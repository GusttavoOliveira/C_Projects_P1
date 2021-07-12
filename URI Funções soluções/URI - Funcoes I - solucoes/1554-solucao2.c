/**
===============================================================================================
 Problema:	1554 - Bilhar N+1
 Autor:     Pedro Henrique
===============================================================================================
*/
#include <stdio.h>
#include <math.h>

#include <stdio.h>
#include <math.h>

float Distancia(int x1, int y1, int x2, int y2){
    float distancia;

    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    return distancia;
}

int main(void){
    int c, n, x1, y1, x2, y2, i, j, menor;
    float distanciaN, menorDif;

    scanf("%d", &c); // numero de casos de teste

    for(i = 1; i <= c; i++){
        scanf("%d", &n);       //numero de bolas
        scanf("%d %d", &x1, &y1); //recebe a posicao da bola branca

        for(j = 1; j <= n; j++){
            scanf("%d %d", &x2, &y2); // recebe a posicao das demais bolas
            distanciaN = Distancia(x1, y1, x2, y2);

            if(j == 1){
                menor = 1;
                menorDif = distanciaN;
            }
            else if(distanciaN < menorDif){
                menor = j ;
                menorDif = distanciaN;
            }
        }
        printf("%d\n", menor);
    }
    return 0;
}
