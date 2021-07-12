#include <stdio.h>

int main(void){
    int posicaoP, posicaoR;

    scanf("%d %d", &posicaoP, &posicaoR);

    if(posicaoP == 0){
        puts("C");
    }else if(posicaoR == 0){
        puts("B");
    }else {
        puts("A");
    }

    return 0;
}
