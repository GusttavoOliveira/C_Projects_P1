#include <stdio.h>

int main(void){
    int i, termoAtual, termoAnterior, numTermos, penultimo;

    termoAtual = 1;
    penultimo = 1;
    termoAnterior = 1;

    puts("Ola, bem vindx");
    puts("Este programa exibe a sequencia de Fibonacci ate o termo de numero que o usuario desejar.");

    printf("\nPor favor, digite aqui quantos termos da sequencia de Fibonacci voce quer que sejam exibidos: ");
    scanf("%d", &numTermos);

    for(i = 1; i < numTermos; i = i+1){
        if(i == 1)
            printf("%d\n", penultimo);

        printf("%d\n", termoAtual);
        termoAnterior = termoAtual;
        termoAtual = termoAnterior + penultimo;
        penultimo = termoAnterior;

    }

    return 0;
}
