#include <stdio.h>

//Problema 1

/*Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para
cada leitura de senha incorreta informada, escrever a mensagem "Senha Invalida".
Quando a senha for informada corretamente deve ser impressa a mensagem
"Acesso Permitido" e o algoritmo encerrado. Considere que a senha correta é o valor
2020.*/

int main(void){
    int senha;

    senha = 2020;

    do{
        printf("Por favor, insira a senha: ");
        scanf("%d", &senha);

        if(senha != 2020)
            puts("Senha Invalida!\n");

    }while( senha != 2020);

    puts("\nAcesso Permitido!\n");

    return 0;
}
