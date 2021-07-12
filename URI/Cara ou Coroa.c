#include <stdio.h>

int main(void){
    int i, n, joao, maria, moeda;

    maria = 0;
    joao = 0;

    do{
        scanf("%d", &n);
        if(n == 0){
                break;
            }

        for(i = n; i>0; i--){
            scanf("%d", &moeda);

            if(moeda == 0){
                maria++;
            }else if(moeda != 0){
                joao++;
            }

        }
        printf("Mary won %d times and John won %d times\n", maria, joao);

        maria = 0;
        joao = 0;

    }while(n != 0);

    return 0;
}
