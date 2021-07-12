#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

int main(void){

    char senha[200];
    int tamanho, i;
    int minuscula=0, maiuscula=0, numero=0, espacos=0, invalidCaractere=0;

    while (fgets(senha, 200, stdin) != NULL){

        tamanho = strlen(senha);
        if(senha[tamanho-1] == '\n'){
            senha[tamanho - 1] = '\0';
        }

        for(i=0; senha[i] != '\0'; i++){

            if(senha[i] >= 'a' && senha[i] <= 'z'){
                minuscula++;
            }
            if(senha[i] >= 'A' && senha[i] <= 'Z'){
                maiuscula++;
            }
            if(senha[i] >= '0' && senha[i] <= '9'){
                numero++;
            }
            if(senha[i] == ' '){
                espacos++;
            }
            if((senha[i] > 'Z' && senha[i] < 'a') || (senha[i] < 'A' && senha[i] > '9') || senha[i] > 'z' || senha[i] < '0' ){
                invalidCaractere++;
            }
        }

        if(tamanho-1 < 6 || tamanho-1 > 32){
            puts("Senha invalida.");
        }else if(maiuscula < 1){
            puts("Senha invalida.");
        }else if(minuscula < 1){
            puts("Senha invalida.");
        }else if(numero < 1){
            puts("Senha invalida.");
        }else if(espacos != 0){
            puts("Senha invalida.");
        }else if(invalidCaractere > 0){
            puts("Senha invalida.");
        }else{
            puts("Senha valida.");
        }

        minuscula=0;
        maiuscula=0;
        numero=0;
        espacos=0;
        invalidCaractere = 0;
    }



    return 0;
}
