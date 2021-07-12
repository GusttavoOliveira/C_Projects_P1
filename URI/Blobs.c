#include <stdio.h>

int main(void){
    int i, t, dias;
    double comida;

    scanf("%d", &t);

    for(i=0; i<t; i++){

        dias = 1;

        scanf("%lf", &comida);

        while(1){

            comida = comida/2.0;
            if(comida<=1.0){
                break;
            }
            dias++;
        }
        printf("%d dias\n", dias);
        dias = 1;
    }

    return 0;
}
