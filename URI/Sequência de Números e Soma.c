#include <stdio.h>

int main(void){
    int a, b, soma, aux;

    soma = 0;

    while(1){
        scanf("%d", &a);
        scanf("%d", &b);

        if(a <= 0 || b <= 0){
            break;
        }

        if( a > b){
            aux = b;
            b = a;
            a = aux;
        }
        for( a = a; a <= b; a = a + 1){
            printf("%d ", a);
            soma = soma + a;
        }

        printf("Sum=%d\n", soma);

        soma = 0;

    }

    return 0;
}
