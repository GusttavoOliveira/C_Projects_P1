/**
===============================================================================================
 Problema:	1160 - Crescimento Populacional
 Autor:     Arthur Henrique
===============================================================================================
*/
#include <stdio.h>

int Anos(int pa, int pb, double g1, double g2){
    int anos = 0;

    while(pa <= pb && anos != 101){
        pa = (int)(pa + (pa * g1 / 100));
        pb = (int)(pb + (pb * g2 / 100));
        anos++;
    }

    return anos;
}

int main(void){
    int casos,pa,pb;
    int i = 0,anos;
    double g1,g2;

    scanf("%d", &casos);

    while(++i <= casos){
        scanf("%d %d", &pa, &pb);
        scanf("%lf %lf", &g1, &g2);

        anos = Anos(pa, pb, g1, g2);

        if(anos==101){
            printf("Mais de 1 seculo.\n");
        }
        if(anos<=100){
            printf("%d anos.\n",anos);
        }
    }

    return 0;
}
