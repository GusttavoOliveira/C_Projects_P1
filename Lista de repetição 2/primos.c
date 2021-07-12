#include <stdio.h>

int main(void){
    int num, i, contador;
    float verificador;

    contador = 0;

    printf("Insira um numero e o programa vai informar se ele eh ou nao um numero primo: ");
    scanf("%d", &num);

     for( i = 1; i <= num; i = i + 1){
        verificador = num % i;

        if(verificador == 0)
            contador = contador + 1;
     }

     if(contador == 2){
        printf("\nEste numero eh primo!\n");
     }else{
        printf("\nEste numero nao eh primo!\n");
     }

    return 0;
}
