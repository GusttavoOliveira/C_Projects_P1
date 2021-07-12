/**
 *  Segunda Avalia��o de Laborat�rio de Introdu��o � Programa��o
 *  Nome: Luiz Gusttavo Oliveira de Souza
 *  Matr�cula: 20200014961
 */

/****
* Comparacao(): Uma fun��o que compara dois valores e avalia
* qual � o maior ou se os dois s�o iguais.
*
* Par�metros:
* num1 (entrada): Um n�mero para ser comparado
* num2 (entrada): Outro n�mero para ser comparado
*
* Retorno:
* -1 : Caso o valor do primeiro par�metro seja menor que o do segundo.
*  0 : Caso os dois valores sejam iguais.
*  1 : Caso o valor do segundo par�metro seja menor que o do primeiro.
*
****/
int Comparacao(int num1, int num2){
    if(num1 < num2){                //Caso o primeiro par�metro seja menor do que o segundo fa�a:
        return -1;                  //retorna -1 como foi pedido.
    }else if(num2 < num1){          //Se o segundo par�metro for menor do que o primeiro fa�a:
        return 1;                   //retorna 1 como foi pedido.
    }else{                          //Se nem o primeiro � menor nem o segundo � menor, significa que os dois s�o iguais, ent�o fa�a:
        return 0;                   //retorna 0 como foi pedido.
    }
}

/****
* Troca(): Uma fun��o que troca os valores de duas
* vari�veis inteiras, o valor de uma pelo da outra
* e vice-versa.
*
* Par�metros:
* ptNum1 (entrada e sa�da): Um ponteiro que apontar� para o
*                           endere�o da vari�vel contendo o
*                           n�mero para ser trocado com o outro par�metro.
*
* ptNum2 (entrada e sa�da): Um ponteiro que apontar� para o
*                           endere�o da vari�vel contendo o
*                           n�mero para ser trocado com o outro par�metro.
*
* Retorno: Nenhum.
****/
void Troca(int *ptNum1, int *ptNum2){
    int aux;                        //Define uma vari�vel auxiliar.

    aux = *ptNum1;                  //A vari�vel aux recebe o valor contido no endere�o apontado por ptNum1 por acesso indireto.
    *ptNum1 = *ptNum2;              //O valor contido na vari�vel apontada por ptNum2 � armazenado na vari�vel apontada por ptNum1 por acesso indireto.
    *ptNum2 = aux;                  //O valor contido em aux � armazenado na vari�vel apontada por ptNum2 por acesso indireto.

}

#include <stdio.h>

int main(){
    int numero[10];                 //define um array de inteiros com 10 elementos (nome: numero)
    int i, j, contadorTrocas = 0;   //define as demais variaveis

    puts("Digite os 10 elementos do array de inteiros:"); //prompt
    for(i=0; i<10; i++){            //faz a leitura dos elementos do array
        scanf("%d", &numero[i]);
    }

    //faz a ordenacao dos elementos do array pelo Metodo da Bolha
    for(i=0; i<10; i++){            //Segura o elemento que vai ser verificado com os demais.
        for(j=i+1; j<10; j++){      //Percorre o array para comparar os elementos com o segurado pelo for anterior.

            if(Comparacao(numero[i], numero[j]) == 1){ //Usa a fun��o Comparacao() para ver se o elemento � maior do que o elemento do indice seguinte.
                Troca(&numero[i], &numero[j]);  //promove a troca dos elementos com a fun��o da quest�o 1
                contadorTrocas++;               //Incrementa um contador sempre que ocorre uma troca.
            }
        }
    }
    //exibe os elementos do array ja ordenado
    puts("\n\nO array ordenado eh:");

    for(i=0; i<10; i++) {
       printf("Elemento de indice %d: %d\n", i, numero[i]);
    }
    //exibe quantas trocas foram realizadas
    printf("O numero de trocas realizadas foi: %d\n", contadorTrocas);

    return 0;
}
