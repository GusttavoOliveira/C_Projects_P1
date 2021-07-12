/**
 *  Segunda Avaliação de Laboratório de Introdução à Programação
 *  Nome: Luiz Gusttavo Oliveira de Souza
 *  Matrícula: 20200014961
 **/


#include <stdio.h>

int main(void){
    int coluna, i, j;           //Define as variáveis usadas para a "coluna alvo" da questão e para os indices das linhas e colunas respectivamente.
    char operacao;              //Define a variável para guardar o tipo de operação a ser realizada.
    double matriz[12][12];      //Define um array bidimensional para ser usado como uma matriz de 12 linhas e 12 colunas.
    double soma = 0;            //Define uma variável soma para guardar a soma dos elementos da coluna alvo

    scanf("%d%*c", &coluna);    //Lê um inteiro e armazena na variável "coluna", para ser o alvo da operação
    scanf("%c", &operacao);     //Lê o caractere que indicará o tipo de operação a ser realizada.

    for(i=0; i<12; i++){        //For para percorrer as linhas da matriz.
        for(j=0; j<12; j++){    //For para as colunas, preenche cada elemento de cada coluna linha por linha.
            scanf("%lf", &matriz[i][j]); //Faz a leitura dos elementos para preencher a matriz.
        }
    }

    //Faz a soma de todos os elementos da coluna alvo.
    for(i=0;i<12;i++){
            soma += matriz[i][coluna];  //Vai adicionando os elementos da mesma coluna linha a linha.
        }

    if(operacao == 'S'){                //Se o caractere de operação tiver sido só S de soma, faça:
        printf("%.1lf\n", soma);           //Exiba o valor de "soma" com uma casa decimal.
    }else{                              //Se não tiver sido 'S', só pode ter sido 'M'. Trabalhando com o usuário bonzinho, isso será sempre verdade.
        printf("%.1lf\n", soma/12);        //Exiba o valor de "soma" dividido por 12(que é o numero de elementos somados) com uma casa decimal.
    }

    return 0;
}


/**
* A estratégia que eu decidi usar foi parecida com a usada pelo professor na apresentação dos arrays de mais de uma dimensão.
* Seguindo o que a questão pede, eu leio o numero da coluna alvo, leio o caractere que indica o tipo de operação, preencho o array
* de acordo com a entrada e separadamente eu percorro a coluna alvo somando seus elementos.
* Por fim, verifico qual o tipo de operação pedido e exibo a variavel soma do jeito que está caso seja essa a operação pedida, ou divido-a
* por 12, que é o numero de elementos somados, antes de exibir caso a operação pedida tenha sido a de Média.
**/
