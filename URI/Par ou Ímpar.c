#include <stdio.h>

int main(void){
    int valor, i, n;

    scanf("%d", &n);

    for(i = n; i > 0; i--){
        scanf("%d", &valor);
        if(valor == 0){
            puts("NULL");
        }else if(valor%2 == 0 && valor > 0){
            puts("EVEN POSITIVE");
        }else if(valor%2 == 0 && valor < 0){
            puts("EVEN NEGATIVE");
        }else if(valor%2 != 0 && valor < 0){
            puts("ODD NEGATIVE");
        }else if(valor%2 != 0 && valor > 0){
            puts("ODD POSITIVE");
        }
    }
    return 0;
}
