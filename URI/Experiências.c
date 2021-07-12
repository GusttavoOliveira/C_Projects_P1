#include <stdio.h>

int main(void){
    int numCobaias, ratos, sapos, coelhos, total, testes, i;
    double percCoelhos, percSapos, percRatos;
    char tipo;


    ratos = coelhos = sapos = 0;
    tipo = 'C';

    scanf("%d", &testes);

    for(i = 0; i<testes; i++){

        scanf("%d", &numCobaias);
        scanf("%*c%c", &tipo);

        if(tipo == 'C'){
            coelhos = coelhos + numCobaias;
        }else if(tipo == 'S'){
            sapos = sapos + numCobaias;
        }else if(tipo == 'R'){
            ratos = ratos + numCobaias;
        }

    }

    total = ratos+sapos+coelhos;
    percCoelhos = (coelhos*100.0)/total;
    percSapos = (sapos*100.0)/total;
    percRatos = (ratos*100.0)/total;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2lf %%\n", percCoelhos);
    printf("Percentual de ratos: %.2lf %%\n", percRatos);
    printf("Percentual de sapos: %.2lf %%\n", percSapos);


    return 0;
}
