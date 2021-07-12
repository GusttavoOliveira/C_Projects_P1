#include <stdio.h>
#include <math.h>

int EhPrimo(long long int num){
    long long int i;
    int contador = 0;
    double raizNum;

    raizNum = sqrt(num);

    if(num == 2){
        return 1;
    }

    if(num%2 == 0){
        return 0;
    }

    for(i = 1; i <= raizNum ; i++){
        if(i%2 == 0){
            continue;
        }

        if(num%i == 0){
            contador++;
        }

    }
    contador++;

    if(contador == 2){
        return 1;
    }else{
        return 0;
    }
}

int main(void){
    int i, testes;
    long long int num;

    scanf("%d", &testes);

    for(i = 0; i<testes; i++){
        scanf("%lld", &num);

        if(EhPrimo(num)){
            puts("Prime");
        }else{
            puts("Not Prime");
        }

    }

    return 0;
}
