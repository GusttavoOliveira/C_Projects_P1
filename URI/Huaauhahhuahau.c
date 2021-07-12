#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    char risada[60], verificador[60];
    int i, j=0, tamanho;

    scanf("%s", risada);

    for(i=0; risada[i] != '\0'; i++){

        if(risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u'){
        verificador[j] = risada[i];
        j++;
        }
    }
    verificador[j] = '\0';

    tamanho = strlen(verificador);


    for(i=0, j=tamanho-1; i != tamanho-1; i++, j--){
        if(verificador[i] != verificador[j]){
            puts("N");
            return 0;
        }
    }

    puts("S");

    return 0;
}
