#include <stdio.h>

int main(void){
    int quant, codigo;
    double total;

    scanf("%d %d", &codigo, &quant);

    switch(codigo){
        case 1:
            total = 4.00 * quant;
            break;
        case 2:
            total = 4.50 * quant;
            break;
        case 3:
            total = 5.00 * quant;
            break;
        case 4:
            total = 2.00 * quant;
            break;
        case 5:
            total = 1.50 * quant;
            break;

    }
    printf("Total: R$ %.2lf\n", total);

    return 0;

}
