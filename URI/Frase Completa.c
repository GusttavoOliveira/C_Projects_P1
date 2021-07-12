#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    char frase[1002];
    int contador[150] = {0}, verificador = 0;
    int testes, i, tamanho, j;

    scanf("%d%*c", &testes);

    for(i=0; i<testes; i++){

        fgets(frase, 1002, stdin);
        tamanho = strlen(frase);

        if(frase[tamanho-1] == '\n'){
            frase[tamanho-1] = '\0';
        }

        for(j=0; frase[j] != '\0'; j++){

            contador[(int)frase[j]]++;
        }
        contador[' '] = 0;
        contador[','] = 0;

        for(j=0; j<150; j++){
            if(contador[j] != 0){
                verificador++;
            }
        }
        if(verificador >= 13 && verificador < 26){
            puts("frase quase completa");
        }else if(verificador == 26){
            puts("frase completa");
        }else{
            puts("frase mal elaborada");
        }

        for(j=0; j<150; j++){
            contador[j] = 0;
        }
        verificador = 0;
    }
    return 0;
}
