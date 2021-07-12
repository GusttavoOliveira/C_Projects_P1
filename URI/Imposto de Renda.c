#include <stdio.h>

int main(void){
    double imposto;

    scanf("%lf", &imposto);

    /*  Não posso usar o switch porque só funciona com expressões que resultam em um número inteiro*/

    if (imposto >= 0.0 && imposto <= 2000.0){
        puts("Isento");
    }else if(imposto >= 2000.01 && imposto <= 2000.0)

    return 0;
}
