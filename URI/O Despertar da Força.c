/**
 *  Segunda Avaliação de Laboratório de Introdução à Programação
 *  Nome: Luiz Gusttavo Oliveira de Souza
 *  Matrícula: 20200014961
 **/


#include <stdio.h>

int main(void){
    int linhas, colunas, i, j;      //Define as variáveis linhas e colunas como as que serão dadas na entrada para compor o terreno. i e j servirão para os laços for.
    int linhaCorreta = 0, colunaCorreta = 0; //Define duas variáveis que guardarão as coordenadas do sabre e inicia elas com 0 para serem exibidas assim caso nenhum sabre seja encontrado.

    scanf("%d %d", &linhas, &colunas);      //Lê as dimensões que serão usadas na matriz "terreno".

    int terreno[linhas][colunas];           //Define um array bidimensional representando uma matriz(terreno) com dimensções "linhas" e "colunas".

    //Preenchimento do terreno.
    for(i=0; i<linhas; i++){                //Usa i para representar as linhas e ir preenchendo
        for(j=0; j<colunas; j++){           //Usa j para representar as colunas e ir preenchendo todas elas em cada linha.
            scanf("%d", &terreno[i][j]);     //Lê os elementos dados na entrada da questão.
        }
    }

    //Vamos procurar o sabre:
    for(i=0; i<linhas-2; i++){
        for(j=0; j<colunas-2; j++){

            if((terreno[i][j] == 7 && terreno[i][j+1] == 7) && (terreno[i][j+1] == 7 && terreno[i][j+2] == 7)){
                //Se entrou aqui é porque achou três elementos iguais a 7, seguidos na mesma linha.
                //Portanto verifique se os elementos que estão exatamente embaixo deles 7, 42, 7 respectivamente.
                if((terreno[i+1][j] == 7 && terreno[i+1][j+1] == 42) && (terreno[i+1][j+1] == 42 && terreno[i+1][j+2] == 7)){
                    //Se entrou aqui é porque embaixo do 777 tinha um 7 42 7, agora só falta verificar se a próxima linha tem 777 nessas mesmas colunas.
                    if((terreno[i+2][j] == 7 && terreno[i+2][j+1] == 7) && (terreno[i+2][j+1] == 7 && terreno[i+2][j+2] == 7)){
                        linhaCorreta = i+1;         //Guarda a coordenada da linha do sabre.
                        colunaCorreta = j+1;        //Guarda a coordenada da coluna do sabre.
                        break;                      //Como só existe um sabre por terreno, posso terminar minhas buscas.
                    }
                }
            }

        }
    }

    if(linhaCorreta != 0 && colunaCorreta != 0)
        printf("%d %d\n", linhaCorreta+1, colunaCorreta+1); //Tenho que adicionar um às coordenadas já que a questão fala que os terrenos tem linhas e colunas que começam a contas em 1, e os indices começam em 0.
    else
        printf("%d %d\n", linhaCorreta, colunaCorreta); //Caso nenhum sabre seja achado, imprimo estas variáveis com o valor de sua iniciação sem nenhuma modificação.

    return 0;
}

/**
* A estratégia que eu usei, depois de ler as dimensões do terreno, criá-lo e preenchê-lo
* foi criar dois laços for aninhados que percorrem linha por linha o terreno, verificando se encontram o padrão desejado.
* Esses laços só vão até o elemento de indice "máximo-2", isso porque ao encontrar o inicio do padrão desejado eles vão iniciar uma
* sequência de IFs que verificarão os elementos das duas colunas à frente do elemento inicial e das duas linhas abaixo da linha do
* elemento inicial, essa medida evitará a tentativa de acesso a elementos que não pertencem ao array. Dessa forma, ao encontrar um 7
* o programa verifica se os 2 elementos na sua frente também são setes.Se seim, passa para linha de baixo e verifica se os elementos
* imediatamente abaixo são 7, 42 e 7. Se sim, passa para linha de baixo e verifica se são 777 novamente. Caso todos os IFs sejam satis
* feitos, guardo os valores da linha e da coluna do elemento 42 nas variáveis linhaCorreta e colunaCorreta e pulo para a instrução de
* exibir as coordenadas. Caso um dos IFs não seja satisfeito a busca continua. Se nenhum sabre for encontrado, imprime linhaCorreta e colunaCorreta
* com seus valores de iniciação, 0 e 0.
**/
