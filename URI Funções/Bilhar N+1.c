#include <stdio.h>
#include <math.h>

int Distancia(int x1, int x2, int y1, int y2){
    int catetoX, catetoY;
    int distancia;

    catetoX = x1 - x2;
    catetoY = y1 - y2;

    distancia = sqrt((catetoX*catetoX) + (catetoY*catetoY));

    return distancia;

}

int main(void){
    int numBolas, testes, cont1, cont2;
    int xBranca, yBranca, x2, y2, bolaCerta, bolaAnterior;
    int distancia, distanciaAnterior;

    scanf("%d", &testes);

        for(cont1=1; cont1<=testes; cont1++){
            scanf("%d", &numBolas);
            scanf("%d %d", &xBranca, &yBranca);

            for(cont2=1; cont2<=numBolas; cont2++){
                scanf("%d %d", &x2, &y2);

                if(cont2 == 1){
                    distanciaAnterior = Distancia(xBranca, x2, yBranca, y2);
                    bolaAnterior = cont2;
                }else{
                    distancia = Distancia(xBranca, x2, yBranca, y2);
                    bolaCerta = cont2;
                    if(distancia < distanciaAnterior){
                        distanciaAnterior = distancia;
                        bolaAnterior = bolaCerta;
                    }
                }
            }
            printf("%d\n", bolaAnterior);
        }
    return 0;
}
