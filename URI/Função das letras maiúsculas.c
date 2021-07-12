/**
* Questão 2 da Terceira Avaliação Prática
*
* Definições das estruturas do código da imagem
*
* Autor: Luiz Gusttavo Oliveira de Souza
*
* Matrícula: 20200014961
*
**/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{     //typedef para definir um novo tipo. Pela formatação do printf com %d, sei que os campos desse tipo estruturado são do tipo int.
    int dia;        //variavel dia apontada no printf pelo cli->dataNascimento.dia.
    int mes;        //variavel mes apontada no printf pelo cli->dataNascimento.mes.
    int ano;        //variavel ano apontada no printf pelo cli->dataNascimento.ano.
}tData;             //O nome do tipo estruturado é tData como especifica o enunciado da questão.

typedef struct{             //typedef para definir um novo tipo.
    int codigo;             //Como no printf usou-se o formatador %d, sei que é um inteiro e pelo operador de acesso usado como cli->codigo, sei que o nome do campo é "codigo"
    char nome[42];          //Como no printf usou-se o formatador %s, sei que é uma string e pelo operador de acesso usado como cli->nome, sei que o nome do campo é "nome", o numero de elementos foi ao acaso, coloquei o numero que eu colocaria
    char telefone[12];      //Como no printf usou-se o formatador %s, sei que é uma string e pelo operador de acesso usado como cli->telefone, sei que o nome do campo é "telefone", o numero de elementos foi ao acaso, coloquei o numero que eu colocaria.
    tData dataNascimento;   //Neste caso como o operador de acesso foi usado assim: cli->dataNascimento.dia ou .mes ou .ano; Nota-se que o nome do campo é "dataNascimento" e que é um aninhamento de tipos estruturados, no caso, com o tipo tData que foi definido ali encima e já foi descrito lá
    float saldoDevedor;     //O uso do formatador %.2f denota que este campo é do tipo float e como o parametro que faz acesso a ele é cli->saldoDevedor, nota-se que saldoDevedor é o nome do campo.
}tCliente;                  //O nome do tipo é tCliente como especificado tanto no enunciado da questão quanto no cabeçalho da função ExibeDadosCliente.

