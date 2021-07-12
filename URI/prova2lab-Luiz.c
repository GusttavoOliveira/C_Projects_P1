/**
 *  Segunda Avaliação de Laboratório de Introdução à Programação
 *  Nome: Luiz Gusttavo Oliveira de Souza
 *  Matrícula: 20200014961
 */

/****
* Comparacao(): Uma função que compara dois valores e avalia
* qual é o maior ou se os dois são iguais.
*
* Parâmetros:
* num1 (entrada): Um número para ser comparado
* num2 (entrada): Outro número para ser comparado
*
* Retorno:
* -1 : Caso o valor do primeiro parâmetro seja menor que o do segundo.
*  0 : Caso os dois valores sejam iguais.
*  1 : Caso o valor do segundo parâmetro seja menor que o do primeiro.
*
****/
int Comparacao(int num1, int num2){
    if(num1 < num2){                //Caso o primeiro parâmetro seja menor do que o segundo faça:
        return -1;                  //retorna -1 como foi pedido.
    }else if(num2 < num1){          //Se o segundo parâmetro for menor do que o primeiro faça:
        return 1;                   //retorna 1 como foi pedido.
    }else{                          //Se nem o primeiro é menor nem o segundo é menor, significa que os dois são iguais, então faça:
        return 0;                   //retorna 0 como foi pedido.
    }
}

/****
* Troca(): Uma função que troca os valores de duas
* variáveis inteiras, o valor de uma pelo da outra
* e vice-versa.
*
* Parâmetros:
* ptNum1 (entrada e saída): Um ponteiro que apontará para o
*                           endereço da variável contendo o
*                           número para ser trocado com o outro parâmetro.
*
* ptNum2 (entrada e saída): Um ponteiro que apontará para o
*                           endereço da variável contendo o
*                           número para ser trocado com o outro parâmetro.
*
* Retorno: Nenhum.
****/
void Troca(int *ptNum1, int *ptNum2){
    int aux;                        //Define uma variável auxiliar.

    aux = *ptNum1;                  //A variável aux recebe o valor contido no endereço apontado por ptNum1 por acesso indireto.
    *ptNum1 = *ptNum2;              //O valor contido na variável apontada por ptNum2 é armazenado na variável apontada por ptNum1 por acesso indireto.
    *ptNum2 = aux;                  //O valor contido em aux é armazenado na variável apontada por ptNum2 por acesso indireto.

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

            if(Comparacao(numero[i], numero[j]) == 1){ //Usa a função Comparacao() para ver se o elemento é maior do que o elemento do indice seguinte.
                Troca(&numero[i], &numero[j]);  //promove a troca dos elementos com a função da questão 1
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
