#include <stdio.h>

int main(void){
    int razao, termo, anterior, ehPa;

    termo = -1;
    razao = -100; //Coloquei -100 para o caso de ser uma pa de razao negativa, comportando todas as razões até o -100.
    anterior = -1;
    ehPa = 1;

    puts("Ola, bem vindx!");
    puts("Este programa verifica se a sequencia de numeros digitada por voce eh uma p.a.");
    puts("Caso queira encerrar o programa digite: -1");

    do{
        printf("Digite um termo: ");
        scanf("%d", &termo);

        if(termo != -1){//Só entra no if se o usuario não tentar encerrar o programa sem nenhuma entrada.
            if(anterior == -1){ //É o primeiro termo
                anterior = termo;
            }else{
                if(razao == -100){ //É o segundo termo
                    razao = termo - anterior;
                    anterior = termo;
                }else{
                    if(termo - anterior != razao){
                        ehPa = 0;
                        anterior = termo;
                    }else{
                        anterior = termo;
                    }
                }
            }
        }

    }while(termo != -1);

    if(razao != -100 && ehPa == 1)
        printf("\nEh uma pa de razao %d\n", razao);

    if(razao == -100)
        printf("\nEncerrou sem nenhuma entrada\n");

    if(ehPa == 0)
        puts("\nNao eh pa.");





    return 0;
}
