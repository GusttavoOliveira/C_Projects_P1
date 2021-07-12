/**
* Programa de Controle de Disciplina #1
*
* Autor: Luiz Gusttavo Oliveira de Souza
*
* Matr�cula: 20200014961
*
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_MAX_ALUNOS 30
#define TAM_MAX_NOMES 31

int main(void){
    char disciplina[51], alunos[TAM_MAX_ALUNOS][TAM_MAX_NOMES], matriculas[TAM_MAX_ALUNOS][15];
    int numAlunos, tam, i;
    double nota1[TAM_MAX_ALUNOS], nota2[TAM_MAX_ALUNOS], media;

    /** Primeira Etapa � In�cio do Programa e Configura��o da Disciplina **/

    //Boas vindas:
    puts("-------------------Seja bem-vindo-------------------");
    puts("Este programa vai te ajudar com o controle das notas da turma!");

    //Pedidos do nome da disciplina e do n�mero de alunos como exigido na etapa 1:
    printf("\nPor favor, insira o nome da sua disciplina(no max 50 caracteres): "); //prompt
    fgets(disciplina, 51, stdin);                   //Usa o fgets para armazenar o nome com todos os espa�os e o \n num array de char chamando "disciplina"
    printf("Agora por favor, insira a quantidade de alunos da turma(no max 30 alunos): "); //prompt
    scanf("%d%*c", &numAlunos);                     //Usa o  scanf para ler e armazenar o numero de alunos na vari�vel numAlunos, o %*c serve para ignorar o \n.

    //Retirada do '\n' do array "disciplina":
    tam = strlen(disciplina);
    if(disciplina[tam-1] == '\n'){
        disciplina[tam-1] = '\0';
    }


    /** Segunda Etapa � Leitura dos Nomes e Matr�cula dos Alunos **/

    //Mensagens explicando sobre o preenchimento dos dados de cada aluno.
    puts("\nPara elaborar uma tabela sobre a turma, sera preciso que agora sejam informados detalhes sobre cada aluno.");
    puts("Preencha os dados conforme for pedido.");

    //Este for ir� preencher os arrays de strings que guardar�o o nome de cada aluno e suas matr�culas.
    for(i=0; i<numAlunos; i++){
        printf("\nAluno #%d\n", i+1);               //Informa ao usu�rio qual o "numero" no aluno cujo os dados estao sendo preenchidos.
        printf("Nome(no max 30 caracteres): ");     //prompt
        fgets(alunos[i], TAM_MAX_NOMES, stdin);     //L� os nomes dos alunos e armazena no array de strings "alunos"

        //Retirada do '\n' dos nomes dos alunos:
        tam = strlen(alunos[i]);
        if(alunos[i][tam-1] == '\n'){
        alunos[i][tam-1] = '\0';
        }

        printf("Matricula(max 4 digitos): ");       //prompt, pede 4 digitos pra facilitar a formata��o do quadro de notas
        scanf("%s%*c", matriculas[i]);              //L� o n�mero da matricula dos alunos e armazena no array de strings "matriculas", o %*c serve para ignorar o \n.
    }
    /** Terceira Etapa � Leitura das Notas **/

    puts("\nTendo preenchido os dados dos alunos, agora eh preciso que informe as notas de cada um deles!");

    for(i=0; i<numAlunos; i++){
        printf("\nAluno: %s\n", alunos[i]);         //Informa o nome do aluno atual.
        printf("Primeira nota: ");                  //prompt para a nota1
        scanf("%lf", &nota1[i]);                    //l� e armazena a primeira nota do aluno "i" no elemento de indice i do array nota1
        printf("Segunda nota: ");                   //prompt para a nota2
        scanf("%lf", &nota2[i]);                    //l� e armazena a segunda nota do aluno "i" no elemento de indice i do array nota2
    }

    /** Quarta Etapa � Impress�o do Quadro de Notas **/

    //Formata��o
    printf("\n\n======================== Quadro de Notas ========================\n\n");
    printf("Disciplina:\t%s\n", disciplina); //Exibe o nome da disciplina

    puts("--------------------------------------------------------------------------");
    puts("Matricula\tNome\t\tNota 1\tNota 2\tMedia\tSituacao"); //Comp�e um cabe�alho
    puts("--------------------------------------------------------------------------\n");

    //Este for exibe uma linha a cada itera��o, cada linha contem matricula, nome, nota1, nota2, media e situa��o de cada aluno. Um aluno por linha
    for(i=0; i<numAlunos; i++){

    media = (nota1[i] + nota2[i]) / 2;
    printf("%s\t\t%s\t\t%.2lf\t%.2lf\t%.2lf\t%s\n", matriculas[i], alunos[i], nota1[i], nota2[i], media, media >= 7? "Aprovado": "Reprovado");
    }

    return 0;
}
