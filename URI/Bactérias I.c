#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char dna[102], res[102];
    char *resultado;
    int tamanho;

    while (scanf("%s", dna) != EOF){

        scanf("%s", res);

        resultado = strstr(dna, res);

        if(resultado == NULL){
            puts("Nao resistente");
        }else{
            puts("Resistente");
        }

    }

    return 0;
}
