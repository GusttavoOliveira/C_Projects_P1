#include <stdio.h>

int main(void){
    int x=22;               //Inteiro que ser� usado para guardar os n�meros exibidos na tela. X � iniciada com 22 para que na primeira execu��o do la�o j� seja exibida como x = x - 2.
    while(x){               //A condi��o do while � o pr�prio x, dessa forma ela ser� verdadeira enquanto x n�o for zero.
    printf("%d\n", x-=2);   //Exibe a vari�vel x descrescida de duas unidades sempre, ao mesmo tempo j� guarda esse novo valor dentro dessa vari�vel.
    if(x==2)                //Depois de algumas itera��es, quando x estiver guardando o n�mero 2, ele ser� exibido e depois entrar� nesse if.
    break;}                 //O if contem o break que faz o while para de ser executado e pula para a instru��o return.
    return 0;
}

/*  Numa tentativa de deixar o c�digo mais obscuro eu usei uma vari�vel s�, contendo um identificador n�o significativo.
Como condi��o do "while quase infinito" eu n�o usei o 1(jarg�o), eliminei o m�ximo de espa�os verticais e tirei as endenta��es e
usei operadores de atribui��o aritm�tica dentro da fun��o printf() */

/*Sem o if o while n�o seria infinito, na pr�xima itera��o x se tornaria 0 e seria o fim do while.*/
