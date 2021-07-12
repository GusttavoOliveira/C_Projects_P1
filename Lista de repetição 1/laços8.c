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
	puts("Voce tem 5 tentativas.");

	puts("Adivinhe o numero: ");
	scanf("%d", &palpite);


    while(palpite != numeroCorreto){
        printf("\nEssa foi a sua tentativa %d\n", contador);
        if (palpite > numeroCorreto){
            puts("Palpite alto!\n");
        }else{
            puts("Palpite foi baixo!\n");
        }

        if(contador == 5){
            puts("Voce perdeu!");
            puts("Numero de tentativas esgotado.");

            return 0;
        }

        contador = contador + 1;
        printf("Digite seu novo palpite: ");
        scanf("%d", &palpite);
    }
    puts("Voce ganhou!");
	puts("Fim do jogo.");

	return 0;
}

