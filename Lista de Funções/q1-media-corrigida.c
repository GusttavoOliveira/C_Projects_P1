/**
 ============================================================================
 Nome      : q1-media.c
 Autor     : lincoln
 Versao    : 1.0
 Copyright : CC BY 4.0
 Descricao : O programa le duas notas e calcula a media com uma funcao.
 ============================================================================
 */
#include <stdio.h>

/****
* Media(): Calcula a media de dois valores.
*
* Parametros:
*    valor1 (entrada): o primeiro valor.
*    valor2 (entrada): o segundo valor.
*
* Retorno: retorna sempre a media dos valores recebidos.
****/
float Media(float valor1, float valor2){
    float soma = valor1 + valor2;
    return soma / 2.0;
}

int main(void){
    float nota1, nota2; /* os valores a serem lidos do usuario */
    float media;        /* para calcular e guardar o resultado */

    /* leitura dos valores */
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    /* calular a media a partir da chamada da funcao */
    media = Media(nota1, nota2);

    /* imprime o resultado */
    printf("A media das notas %.1f e %.1f eh %.1f\n", nota1, nota2, media);

    return 0;
}

/*******************************************\
*  Resposta da letra (a):                   *
*                                           *
* A fun��o recebe como par�metros formais   *
* dois n�meros do tipo int, guarda o resul  *
* tado da soma destes valores numa vari�vel *
* de mesmo tipo e ainda retorna um valor do *
* tipo int tambem. Por isso, ao fazer a divi*
* s�o, acaba executando uma divis�o inteira *
* o que gera como resultado, apenas n�meros *
* inteiros. Nunca retornaria 8.5.           *
\*******************************************/

