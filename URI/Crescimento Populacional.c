#include <stdio.h>

int main(void){
    int popA, popB, testes, anos, i;
    double cresA, cresB;

    anos = 0;
    scanf("%d", &testes);

    for(i = 0; i<testes; i++){

        scanf("%d %d %lf %lf", &popA, &popB, &cresA, &cresB);

        while(1){
            popA = popA * (cresA/100);
            if(cresB > 0)
                popB = popB * (cresB/100);

            anos++;
            if(popA>popB){
                break;
            }

        }

        if(anos > 100){
            printf("Mais de um seculo.\n");
        }else{
            printf("%d anos.\n", anos);
        }

        anos = 0;
    }
    return 0;
}
