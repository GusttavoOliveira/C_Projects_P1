#include <stdio.h>

int main(void){
    double imposto;

    scanf("%lf", &imposto);

    /*  N�o posso usar o switch porque s� funciona com express�es que resultam em um n�mero inteiro*/

    if (imposto >= 0.0 && imposto <= 2000.0){
        puts("Isento");
    }else if(imposto >= 2000.01 && imposto <= 2000.0)

    return 0;
}
