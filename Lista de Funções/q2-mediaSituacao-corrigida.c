/**
 ============================================================================
 Nome      : q2-mediaSituacao.c
 Autor     : lincoln
 Versao    : 1.0
 Copyright : CC BY 4.0
 Descricao : O programa le duas notas e calcula a media com uma funcao,
             exibindo a situacao do aluno.
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
    return soma / 2;
}

/****
* Situacao(): Indica a situacao de um aluno de acordo com a media.
*
* Parametros:
*    media (entrada): a media do aluno.
*
* Retorno: A funcao retorna um dos seguintes valores:
*               1 - quando media maior ou igual a 7 (aprovado).
*               2 - quando media menor do que 7 e maior ou igual
*                   a 5 (recuperacao).
*               3 - quando a media eh menor do que 5 (reprovado).
****/
int Situacao(float media){

    if(media >= 7.0){
        return 1;
    }else if(media >= 5.0 && media < 7.0){
        return 2;
    }else{
        return 3;
    }

}

int main(void){
    float nota1, nota2; /* os valores a serem lidos do usuario */
    float media;        /* para calcular e guardar o resultado */
    int situacao;       /* para armazenar a situacao do aluno  */

    /* leitura dos valores */
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    /* calular a media e situacao a partir da chamada da funcao */
    media = Media(nota1, nota2);
    situacao = Situacao(media);

    /* imprime o resultado */
    printf("A media das notas %.1f e %.1f eh %.1f\n", nota1, nota2, media);
    printf("A situacao do aluno eh: ");
    switch(situacao){
        case 1:
            puts("Aprovado.");
            break;
        case 2:
            puts("Recuperacao.");
            break;
        case 3:
            puts("Reprovado.");
    }

    return 0;
}
