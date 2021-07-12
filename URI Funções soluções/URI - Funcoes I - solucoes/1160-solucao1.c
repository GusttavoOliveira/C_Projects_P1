/**
===============================================================================================
 Problema:	1160 - Crescimento Populacional
 Autor:     gui jacome
===============================================================================================
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Anos(int pA,int pB,float gA,float gB){
    int anos = 0;
    while(pA <= pB && anos <= 100){
            pA *= gA/100 +1;
            pB *= gB/ 100 +1;
            anos++;
        }
        return anos;
}

int main(void){
    int pA,pB,i,n,anos = 0;
    float gA,gB;
    scanf("%d",&n);
    for(i = 0; i != n;i++){
        scanf("%d",&pA);
        scanf("%d",&pB);
        scanf("%f",&gA);
        scanf("%f",&gB);

        anos = Anos(pA,pB,gA,gB);

        if(anos > 100){
            printf("Mais de 1 seculo.\n");
        }
        else
            printf("%d anos.\n", anos);
        anos = 0;
}
    return 0;
}
