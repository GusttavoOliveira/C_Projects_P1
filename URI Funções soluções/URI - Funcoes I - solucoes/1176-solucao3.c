/**
===============================================================================================
 Problema:	1176 - Fibonacci em Vetor
 Autor:     João Marcelo Candido
===============================================================================================
*/
#include <stdio.h>

long long Calc_fib (int n)
{
    int i;
    long long atual= 0,
              ant1 = 0,
              ant2 = 1;

    for(i = 1; i <= n; i++)
    {
        atual = ant1 + ant2;
        ant2 = ant1;
        ant1 = atual;
    }
        return atual;
}

int main ()
{
    int t,n;
    scanf("%d",&t);

    do{
    scanf("%d",&n);
    printf("Fib(%d) = %lld\n",n,Calc_fib(n));
    t--;
 }while(t > 0);
}
