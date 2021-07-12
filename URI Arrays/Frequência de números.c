#include <stdio.h>

#define MAX_NUMERO 2000

int main(void){
    int contador[MAX_NUMERO] = {0};
    int n, x, i;

    scanf("%d", &n);

   for(i = 0; i<n; i++){
        scanf("%d", &x);

        contador[x-1]++;

    }

    for(i=0; i<MAX_NUMERO; i++){

        if(contador[i] != 0){
            printf("%d aparece %d vez(es)\n", i+1, contador[i]);
        }
    }
    return 0;
}
