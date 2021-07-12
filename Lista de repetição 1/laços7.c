#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int palpite, numeroCorreto;
	int contador;

	contador = 1;
    srand(time(NULL));
    numeroCorreto = rand() % 100;
	puts("Bem-vindo!");

	puts("Adivinhe o numero:");
	scanf("%d", &palpite);

    while(palpite != numeroCorreto){
        if (palpite > numeroCorreto){
            puts("Palpite alto!");
        }else{
            puts("Palpite foi baixo!");
        }

        contador = contador + 1;
        printf("Digite seu novo palpite: ");
        scanf("%d", &palpite);
    }
    puts("Voce ganhou!");
    printf("\nVoce fez %d palpites.\n", contador);
	puts("Fim do jogo.");

	return 0;
}

