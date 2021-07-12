#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char palpite1[10], palpite2[10];
    int i, testes, resultado, num1, num2;

    scanf("%d%*c", &testes);

    for(i=0; i<testes; i++){
        scanf("%s", palpite1);
        scanf("%s", palpite2);

        num1 = strlen(palpite1);
        num2 = strlen(palpite2);

        //verificando se deu empate:
        resultado = strcmp(palpite1, palpite2);

        if(resultado == 0){
            printf("Caso #%d: De novo!\n", i+1);
        }


        if(strcmp(palpite1, "papel") == 0 && strcmp(palpite2, "Spock") == 0){
            resultado = 1;
        }else if(strcmp(palpite2, "papel") == 0 && strcmp(palpite1, "Spock") == 0){
            resultado = 2;
        }else  if(strcmp(palpite1, "papel") == 0 && strcmp(palpite2, "pedra") == 0){
            resultado = 1;
        }else  if(strcmp(palpite2, "papel") == 0 && strcmp(palpite1, "pedra") == 0){
            resultado = 2;
        }else  if(strcmp(palpite1, "Spock") == 0 && strcmp(palpite2, "pedra") == 0){
            resultado = 1;
        }else  if(strcmp(palpite2, "Spock") == 0 && strcmp(palpite1, "pedra") == 0){
            resultado = 2;
        }else  if(strcmp(palpite1, "tesoura") == 0 && strcmp(palpite2, "papel") == 0){
            resultado = 1;
        }else  if(strcmp(palpite2, "tesoura") == 0 && strcmp(palpite1, "papel") == 0){
            resultado = 2;
        }else  if(strcmp(palpite1, "tesoura") == 0 && strcmp(palpite2, "lagarto") == 0){
            resultado = 1;
        }else  if(strcmp(palpite2, "tesoura") == 0 && strcmp(palpite1, "lagarto") == 0){
            resultado = 2;
        }else  if(strcmp(palpite1, "lagarto") == 0 && strcmp(palpite2, "Spock") == 0){
            resultado = 1;
        }else  if(strcmp(palpite2, "lagarto") == 0 && strcmp(palpite1, "Spock") == 0){
            resultado = 2;
        }else  if(strcmp(palpite1, "lagarto") == 0 && strcmp(palpite2, "papel") == 0){
            resultado = 1;
        }else  if(strcmp(palpite2, "lagarto") == 0 && strcmp(palpite1, "papel") == 0){
            resultado = 2;
        }else  if(strcmp(palpite1, "pedra") == 0 && strcmp(palpite2, "lagarto") == 0){
            resultado = 1;
        }else  if(strcmp(palpite2, "pedra") == 0 && strcmp(palpite1, "lagarto") == 0){
            resultado = 2;
        }else  if(strcmp(palpite1, "pedra") == 0 && strcmp(palpite2, "tesoura") == 0){
            resultado = 1;
        }else  if(strcmp(palpite2, "pedra") == 0 && strcmp(palpite1, "tesoura") == 0){
            resultado = 2;
        }else  if(strcmp(palpite1, "Spock") == 0 && strcmp(palpite2, "tesoura") == 0){
            resultado = 1;
        }else  if(strcmp(palpite2, "Spock") == 0 && strcmp(palpite1, "tesoura") == 0){
            resultado = 2;
        }

        if(resultado == 1){
            printf("Caso #%d: Bazinga!\n", i+1);
        }else if(resultado == 2){
            printf("Caso #%d: Raj trapaceou!\n", i+1);
        }

    }

    return 0;
}
