#include <stdio.h>

int AnosParaUltrapassar(int popA, int popB, double taxaA, double taxaB){
    int anos = 0;

    while(1){
        popA *= taxaA/100 +1;
        popB *= taxaB/ 100 +1;
        anos++;

        if(anos == 101){
            break;
        }

        if(popA > popB){
            break;
        }
    }

   return anos;
}

int main(void){
    int i, testes;
    int anos, popA, popB;
    double taxaA, taxaB;

    scanf("%d", &testes);

    for(i = 0; i<testes; i++){
        scanf("%d%d%lf%lf", &popA, &popB, &taxaA, &taxaB);

        anos = AnosParaUltrapassar(popA, popB, taxaA, taxaB);

        if(anos==101){
            printf("Mais de 1 seculo.\n");
        }
        if(anos<=100){
            printf("%d anos.\n",anos);
        }

    }

    return 0;
}
