/**
 *  Segunda Avalia��o de Laborat�rio de Introdu��o � Programa��o
 *  Nome: Luiz Gusttavo Oliveira de Souza
 *  Matr�cula: 20200014961
 **/


#include <stdio.h>

int main(void){
    int linhas, colunas, i, j;      //Define as vari�veis linhas e colunas como as que ser�o dadas na entrada para compor o terreno. i e j servir�o para os la�os for.
    int linhaCorreta = 0, colunaCorreta = 0; //Define duas vari�veis que guardar�o as coordenadas do sabre e inicia elas com 0 para serem exibidas assim caso nenhum sabre seja encontrado.

    scanf("%d %d", &linhas, &colunas);      //L� as dimens�es que ser�o usadas na matriz "terreno".

    int terreno[linhas][colunas];           //Define um array bidimensional representando uma matriz(terreno) com dimens��es "linhas" e "colunas".

    //Preenchimento do terreno.
    for(i=0; i<linhas; i++){                //Usa i para representar as linhas e ir preenchendo
        for(j=0; j<colunas; j++){           //Usa j para representar as colunas e ir preenchendo todas elas em cada linha.
            scanf("%d", &terreno[i][j]);     //L� os elementos dados na entrada da quest�o.
        }
    }

    //Vamos procurar o sabre:
    for(i=0; i<linhas-2; i++){
        for(j=0; j<colunas-2; j++){

            if((terreno[i][j] == 7 && terreno[i][j+1] == 7) && (terreno[i][j+1] == 7 && terreno[i][j+2] == 7)){
                //Se entrou aqui � porque achou tr�s elementos iguais a 7, seguidos na mesma linha.
                //Portanto verifique se os elementos que est�o exatamente embaixo deles 7, 42, 7 respectivamente.
                if((terreno[i+1][j] == 7 && terreno[i+1][j+1] == 42) && (terreno[i+1][j+1] == 42 && terreno[i+1][j+2] == 7)){
                    //Se entrou aqui � porque embaixo do 777 tinha um 7 42 7, agora s� falta verificar se a pr�xima linha tem 777 nessas mesmas colunas.
                    if((terreno[i+2][j] == 7 && terreno[i+2][j+1] == 7) && (terreno[i+2][j+1] == 7 && terreno[i+2][j+2] == 7)){
                        linhaCorreta = i+1;         //Guarda a coordenada da linha do sabre.
                        colunaCorreta = j+1;        //Guarda a coordenada da coluna do sabre.
                        break;                      //Como s� existe um sabre por terreno, posso terminar minhas buscas.
                    }
                }
            }

        }
    }

    if(linhaCorreta != 0 && colunaCorreta != 0)
        printf("%d %d\n", linhaCorreta+1, colunaCorreta+1); //Tenho que adicionar um �s coordenadas j� que a quest�o fala que os terrenos tem linhas e colunas que come�am a contas em 1, e os indices come�am em 0.
    else
        printf("%d %d\n", linhaCorreta, colunaCorreta); //Caso nenhum sabre seja achado, imprimo estas vari�veis com o valor de sua inicia��o sem nenhuma modifica��o.

    return 0;
}

/**
* A estrat�gia que eu usei, depois de ler as dimens�es do terreno, cri�-lo e preench�-lo
* foi criar dois la�os for aninhados que percorrem linha por linha o terreno, verificando se encontram o padr�o desejado.
* Esses la�os s� v�o at� o elemento de indice "m�ximo-2", isso porque ao encontrar o inicio do padr�o desejado eles v�o iniciar uma
* sequ�ncia de IFs que verificar�o os elementos das duas colunas � frente do elemento inicial e das duas linhas abaixo da linha do
* elemento inicial, essa medida evitar� a tentativa de acesso a elementos que n�o pertencem ao array. Dessa forma, ao encontrar um 7
* o programa verifica se os 2 elementos na sua frente tamb�m s�o setes.Se seim, passa para linha de baixo e verifica se os elementos
* imediatamente abaixo s�o 7, 42 e 7. Se sim, passa para linha de baixo e verifica se s�o 777 novamente. Caso todos os IFs sejam satis
* feitos, guardo os valores da linha e da coluna do elemento 42 nas vari�veis linhaCorreta e colunaCorreta e pulo para a instru��o de
* exibir as coordenadas. Caso um dos IFs n�o seja satisfeito a busca continua. Se nenhum sabre for encontrado, imprime linhaCorreta e colunaCorreta
* com seus valores de inicia��o, 0 e 0.
**/
