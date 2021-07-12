#include <stdio.h>

int main(void){
    int num, i, contador, n, j;
    double verificador;

    contador = 0;
    scanf("%d", &n);

    for(i = n; i > 0; i--){

        scanf("%d", &num);

        for( j = 1; j <= num; j = j + 1){
            verificador = num % j;

            if(verificador == 0)
                contador = contador + 1;
         }

         if(contador == 2){
            printf("%d eh primo\n", num);
         }else{
            printf("%d nao eh primo\n", num);
         }
         contador = 0;

    }
    return 0;
}
