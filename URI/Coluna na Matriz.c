/**
 *  Segunda Avalia��o de Laborat�rio de Introdu��o � Programa��o
 *  Nome: Luiz Gusttavo Oliveira de Souza
 *  Matr�cula: 20200014961
 **/


#include <stdio.h>

int main(void){
    int coluna, i, j;           //Define as vari�veis usadas para a "coluna alvo" da quest�o e para os indices das linhas e colunas respectivamente.
    char operacao;              //Define a vari�vel para guardar o tipo de opera��o a ser realizada.
    double matriz[12][12];      //Define um array bidimensional para ser usado como uma matriz de 12 linhas e 12 colunas.
    double soma = 0;            //Define uma vari�vel soma para guardar a soma dos elementos da coluna alvo

    scanf("%d%*c", &coluna);    //L� um inteiro e armazena na vari�vel "coluna", para ser o alvo da opera��o
    scanf("%c", &operacao);     //L� o caractere que indicar� o tipo de opera��o a ser realizada.

    for(i=0; i<12; i++){        //For para percorrer as linhas da matriz.
        for(j=0; j<12; j++){    //For para as colunas, preenche cada elemento de cada coluna linha por linha.
            scanf("%lf", &matriz[i][j]); //Faz a leitura dos elementos para preencher a matriz.
        }
    }

    //Faz a soma de todos os elementos da coluna alvo.
    for(i=0;i<12;i++){
            soma += matriz[i][coluna];  //Vai adicionando os elementos da mesma coluna linha a linha.
        }

    if(operacao == 'S'){                //Se o caractere de opera��o tiver sido s� S de soma, fa�a:
        printf("%.1lf\n", soma);           //Exiba o valor de "soma" com uma casa decimal.
    }else{                              //Se n�o tiver sido 'S', s� pode ter sido 'M'. Trabalhando com o usu�rio bonzinho, isso ser� sempre verdade.
        printf("%.1lf\n", soma/12);        //Exiba o valor de "soma" dividido por 12(que � o numero de elementos somados) com uma casa decimal.
    }

    return 0;
}


/**
* A estrat�gia que eu decidi usar foi parecida com a usada pelo professor na apresenta��o dos arrays de mais de uma dimens�o.
* Seguindo o que a quest�o pede, eu leio o numero da coluna alvo, leio o caractere que indica o tipo de opera��o, preencho o array
* de acordo com a entrada e separadamente eu percorro a coluna alvo somando seus elementos.
* Por fim, verifico qual o tipo de opera��o pedido e exibo a variavel soma do jeito que est� caso seja essa a opera��o pedida, ou divido-a
* por 12, que � o numero de elementos somados, antes de exibir caso a opera��o pedida tenha sido a de M�dia.
**/
