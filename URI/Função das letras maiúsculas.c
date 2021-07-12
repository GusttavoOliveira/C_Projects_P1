/**
* Quest�o 2 da Terceira Avalia��o Pr�tica
*
* Defini��es das estruturas do c�digo da imagem
*
* Autor: Luiz Gusttavo Oliveira de Souza
*
* Matr�cula: 20200014961
*
**/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{     //typedef para definir um novo tipo. Pela formata��o do printf com %d, sei que os campos desse tipo estruturado s�o do tipo int.
    int dia;        //variavel dia apontada no printf pelo cli->dataNascimento.dia.
    int mes;        //variavel mes apontada no printf pelo cli->dataNascimento.mes.
    int ano;        //variavel ano apontada no printf pelo cli->dataNascimento.ano.
}tData;             //O nome do tipo estruturado � tData como especifica o enunciado da quest�o.

typedef struct{             //typedef para definir um novo tipo.
    int codigo;             //Como no printf usou-se o formatador %d, sei que � um inteiro e pelo operador de acesso usado como cli->codigo, sei que o nome do campo � "codigo"
    char nome[42];          //Como no printf usou-se o formatador %s, sei que � uma string e pelo operador de acesso usado como cli->nome, sei que o nome do campo � "nome", o numero de elementos foi ao acaso, coloquei o numero que eu colocaria
    char telefone[12];      //Como no printf usou-se o formatador %s, sei que � uma string e pelo operador de acesso usado como cli->telefone, sei que o nome do campo � "telefone", o numero de elementos foi ao acaso, coloquei o numero que eu colocaria.
    tData dataNascimento;   //Neste caso como o operador de acesso foi usado assim: cli->dataNascimento.dia ou .mes ou .ano; Nota-se que o nome do campo � "dataNascimento" e que � um aninhamento de tipos estruturados, no caso, com o tipo tData que foi definido ali encima e j� foi descrito l�
    float saldoDevedor;     //O uso do formatador %.2f denota que este campo � do tipo float e como o parametro que faz acesso a ele � cli->saldoDevedor, nota-se que saldoDevedor � o nome do campo.
}tCliente;                  //O nome do tipo � tCliente como especificado tanto no enunciado da quest�o quanto no cabe�alho da fun��o ExibeDadosCliente.

