#include <stdio.h>

long long int Fatorial(int num){
    int i;
    long long int fatorial;
    fatorial = 1;

    if(num == 0){
        return 1;
    }

    for(i = 1; i <= num; i++){
        fatorial *= i;
    }
    return fatorial;
}

int main(void){
    int num1, num2;
    long long int  somaFatorial;

    while(scanf("%d %d", &num1, &num2) != EOF){

    somaFatorial = Fatorial(num1) + Fatorial(num2);
    printf("%lld\n", somaFatorial);

}
    return 0;
}
