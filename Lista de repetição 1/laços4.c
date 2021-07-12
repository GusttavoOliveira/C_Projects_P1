#include <stdio.h>

//Problema 4

/*Escreva um programa que escreve na tela cem vezes, alternadamente, cada frase a
seguir:
• Só aprende a programar quem escreve programas
• Quem não escreve programas não aprende a programar*/


int main(void){
    int i;

    for(i = 1; i <= 200; i = i+1){
        puts("So aprende a programar quem escreve programas");
        puts("Quem nao escreve programas nao aprende a programar");
    }

    return 0;
}
