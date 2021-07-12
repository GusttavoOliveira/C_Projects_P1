/**
===============================================================================================
 Problema:	1221 - Primo Rápido
 Autor:     Victor Mororó
===============================================================================================
*/
#include <stdio.h>
#include <math.h>

int EhPrimo (long int n){
    int i, d = 1;
    
    if (n <= 1)
        return 0;
    
    for(i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            d++;
        }
        if (d > 2)
            return 0;
    }
    return 1;

}

int main(){
    int i, count;
    long int n;

    scanf("%d", &count);

    for (i = 0; i < count; i++){
        scanf("%li", &n);
        
        if (EhPrimo(n))
            puts("Prime");
        else
            puts("Not Prime");
    }
  
    return 0;
}