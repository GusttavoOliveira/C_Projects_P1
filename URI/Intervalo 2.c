#include <stdio.h>

int main(void){
    int n, x, contadorIn, contadorOut, i;
    scanf("%d", &n);

    contadorIn = 0;
    contadorOut = 0;

    for(i = n; i > 0; i--){
        scanf("%d", &x);

        if(x >= 10 && x <= 20){
            contadorIn++;
        }else{
            contadorOut++;
        }

    }
    printf("%d in\n%d out\n", contadorIn, contadorOut);

    return 0;
}
