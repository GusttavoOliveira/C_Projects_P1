#include <stdio.h>

int main(void){
    int i, correto, palpites, resutado = 0;

    scanf("%d", &correto);

    for(i = 0; i < 5; i++){
        scanf("%d", &palpites);

        if(palpites == correto)
            resutado++;
    }

    printf("%d\n", resutado);
    return 0;
}
