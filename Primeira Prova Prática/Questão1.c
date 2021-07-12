#include <stdio.h>

int main(void){
    int x=22;               //Inteiro que será usado para guardar os números exibidos na tela. X é iniciada com 22 para que na primeira execução do laço já seja exibida como x = x - 2.
    while(x){               //A condição do while é o próprio x, dessa forma ela será verdadeira enquanto x não for zero.
    printf("%d\n", x-=2);   //Exibe a variável x descrescida de duas unidades sempre, ao mesmo tempo já guarda esse novo valor dentro dessa variável.
    if(x==2)                //Depois de algumas iterações, quando x estiver guardando o número 2, ele será exibido e depois entrará nesse if.
    break;}                 //O if contem o break que faz o while para de ser executado e pula para a instrução return.
    return 0;
}

/*  Numa tentativa de deixar o código mais obscuro eu usei uma variável só, contendo um identificador não significativo.
Como condição do "while quase infinito" eu não usei o 1(jargão), eliminei o máximo de espaços verticais e tirei as endentações e
usei operadores de atribuição aritmética dentro da função printf() */

/*Sem o if o while não seria infinito, na próxima iteração x se tornaria 0 e seria o fim do while.*/
