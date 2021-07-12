#include <stdio.h>

int main(void){
    int h1, m1, h2, m2, sono;

    do{
        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

        h1 = (h1*60) + m1;
        /*Calcula o número de minutos que se passaram da meia noite
        até a hora que ela foi dormir*/

        h2 = (h2*60) + m2;
        /*Calcula o número de minutos que se passaram da meia noite
        até a hora que ela vai acordar*/

        if(h1 < h2){ //vai dormir e acordar no mesmo dia.
            sono = h2 - h1;
            printf("%d\n", sono);
        }else if( h1 > h2){ //vai dormir num dia e acordar no outro.
            sono = (1440 - h1) + h2;
            printf("%d\n", sono);
        }
    }while(h1 != 0 && m1 != 0 || h2 != 0 && m2 != 0); //Eu coloquei o ||(ou) para evitar curto.


    return 0;
}
