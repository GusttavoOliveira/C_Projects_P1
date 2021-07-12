/**
* Programa de Controle de Disciplina #2
*
* Autor: Luiz Gusttavo Oliveira de Souza
*
* Matrícula: 20200014961
*
**/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//As próximas instruções definem um tipo estruturado chamado tAluno que guardará todos os dados associados a um mesmo aluno como pedem os requisitos do exercício.
//matrícula, nome com no maximo 40 caracteres, 3 notas e nota de recuperação.
typedef struct{
    int matricula;
    char nome[42];
    double nota1, nota2, nota3;
    double notaRec;
}tAluno;


double MediaFinal(tAluno *ptrAluno){
    double mediaComum;
    double mediaTotal;

    mediaComum = (ptrAluno->nota1 + ptrAluno->nota2 + ptrAluno->nota3)/3;

    if(mediaComum >= 4 && mediaComum < 7){
        mediaTotal = ((mediaComum*6) + (ptrAluno->notaRec * 4))/10;
        return mediaTotal;
    }else{
        return mediaComum;
    }

}


int main(void){
    tAluno alunos[30];          // Definição de um array de estruturas usando o tipo definido lá encima. O array tem 30 elementos pois segui a lógica de no máx 30 alunos do programa anterior.
    char disciplina[52];        // Definição de um array de caracteres para guardar o nome da disciplina, no máx 50 caracteres.
    int numAlunos, i;           //Define um inteiro que guarda o número de alunos e uma variável i de indice para que sejam usados nos laços de repetição.
    double media, mediaTotal;   //A primeira variável será usada para guardar a media aritmetica das 3 primeiras notas dos alunos durante as verificações de recuperação, a segunda a media final.
    int flagRec = 1;            //Essa flag serve para exibir uma mensagem caso nenhum aluno tenha ficado em recuperacao.


    /** Primeira Etapa – Início do Programa e Configuração da Disciplina **/

    //Boas vindas:
    puts("-------------------Seja bem-vindx-------------------");
    puts("Este programa vai te ajudar com o controle das notas da turma!");

    //Pedidos do nome da disciplina e do número de alunos como exigido na etapa 1:
    printf("\nPor favor, insira o nome da sua disciplina(no max 50 caracteres): ");         //prompt
    fgets(disciplina, 52, stdin);                                                           //Usa o fgets para armazenar o nome com todos os espaços e o \n num array de char chamando "disciplina"
    printf("Agora por favor, insira a quantidade de alunos da turma(no max 30 alunos): ");  //prompt
    scanf("%d%*c", &numAlunos);                                                             //Usa o  scanf para ler e armazenar o numero de alunos na variável numAlunos, o %*c serve para ignorar o \n.

    //Retirada do '\n' do array "disciplina":
    if(disciplina[strlen(disciplina) - 1] == '\n'){
        disciplina[strlen(disciplina) - 1] = '\0';
    }

    /** Segunda Etapa – Leitura dos Nomes e Matrícula dos Alunos **/

    //Iniciando as notas de recuperação dos alunos com um número negativo para facilitar a formatação do quadro de notas;
    for(i=0; i<numAlunos; i++){
        alunos[i].notaRec = -1;
    }



    //Mensagens explicando sobre o preenchimento dos dados de cada aluno.
    puts("\nPara elaborar uma tabela sobre a turma, sera preciso que agora sejam informados detalhes sobre cada aluno.");
    puts("Preencha os dados conforme for pedido.");

    for(i=0; i<numAlunos; i++){
        printf("\nAluno #%d\n", i+1);           //Indica qual o aluno cujos dados estão sendo preenchidos agora.
        printf("Matricula(max 4 digitos): ");   //Prompt para a matricula. O máximo de 4 digitos serve para facilitar a formatação do quadro de notas
        scanf("%d%*c", &alunos[i].matricula);   //Lê o número da matrícula e armazena no campo "matrícula" da estrutura alunos[i]. O %*c ignora o \n.
        printf("Nome(max 40 caracteres): ");    //Prompt para o nome do aluno com no max 40 caracteres.
        fgets(alunos[i].nome, 42, stdin);       //O fgets faz a leitura de uma string e armazena no campo "nome" da estrutura alunos[i]

        //Retirada do '\n' dos nomes dos alunos:
        if(alunos[i].nome[strlen(alunos[i].nome)-1] == '\n'){
            alunos[i].nome[strlen(alunos[i].nome)-1] = '\0';
        }

    }

    /** Terceira Etapa – Leitura das Notas **/

    puts("\nTendo preenchido os dados dos alunos, agora eh preciso que informe as notas de cada um deles!");

    for(i=0; i<numAlunos; i++){
        printf("\nAluno: %s\n", alunos[i].nome);            //Exibe o nome do aluno cujas notas estão sendo pedidas.
        printf("Digite a primeira nota: ");                 //Prompt
        scanf("%lf", &alunos[i].nota1);                     //Atribui a primeira nota digitada ao campo "nota1" da estrutura alunos[i]
        printf("Digite a segunda nota: ");                  //Prompt
        scanf("%lf", &alunos[i].nota2);                     //Atribui a segunda nota digitada ao campo "nota2" da estrutura alunos[i]
        printf("Digite a terceira nota: ");                 //Prompt
        scanf("%lf", &alunos[i].nota3);                     //Atribui a terceira nota digitada ao campo "nota3" da estrutura alunos[i]


    }

   /** Verificação de recuperação **/

    puts("\nAgora vamos fazer uma verificacao dos alunos que precisaram fazer recuperacao");

    for(i=0; i<numAlunos; i++){
        media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3)/3;    //Calcula a media aritmetica das tres primeiras notas guardadas nas estruturas alunos[i] e guarda na variavel media.

        if(media >= 4 && media < 7){                                        //Caso a media deste aluno "i" seja maior ou igual a 4 e menor do que 7, pede que seja informada a nota de sua recuperacao
            printf("\nAluno: %s\n", alunos[i].nome);                        //Exibe o nome do aluno "i"
            printf("Media atual: %.2lf\n", media);                          //Exibe a media aritmetica das suas primeiras 3 notas
            printf("Insira a nota da recuperacao do(a) aluno(a): ");        //Prompt
            scanf("%lf", &alunos[i].notaRec);                               //Lê a nota da recuperacao e armazena no campo notaRec da estrutura alunos[i].
            flagRec = 0;                                                    //Altera a flag caso algum aluno tenha ficado de recuperacao
        }

        if(flagRec){                                                        //Esta flag apenas exibe uma mensagem simpatica caso nenhum aluno tenha ficado de recuperacao.
            puts("\nNenhum aluno ficou em recuperacao. Parabens a todos.");
        }
    }

    /** Exibição do quadro de notas **/

    //Formatação
    printf("\n\n============================= Quadro de Notas =============================\n\n");
    printf("Disciplina:\t%s\n", disciplina);                                    //Exibe o nome da disciplina
    puts("------------------------------------------------------------------------------------");
    puts("Matricula\tNome\t\tNota 1\tNota 2\tNota 3\tRec\tMedia\tSituacao");    //Compõe um cabeçalho
    puts("------------------------------------------------------------------------------------\n");

    //Este for exibe uma linha a cada iteração, cada linha contem matricula, nome, nota1, nota2, nota3, recuperacao, media total e situação de cada aluno. Um aluno por linha
    for(i=0; i<numAlunos; i++){
        media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3)/3;     //Atribui à variável media o valor da media aritmetica das 3 primeiras notas do aluno "i"
        mediaTotal = MediaFinal(&alunos[i]);                                //Atribui a mediaTotal o valor da media ponderada considerando a recuperação caso ela exista.

        if(alunos[i].notaRec < 0){      //Esta é a mesnagem que aparecerá caso o aluno não tenha feito recuperação, um hífen aparece no lugar da nota de recuperação
            printf("%d\t\t%s\t\t%.2lf\t%.2lf\t%.2lf\t-\t%.2lf\t%s\n", alunos[i].matricula, alunos[i].nome, alunos[i].nota1,
                   alunos[i].nota2, alunos[i].nota3, mediaTotal, media < 4 ? "Reprovado" : "Aprovado");
                   //Se o aluno não fez recuperação é porque ou ele tirou media
                   //comum menor que 4 ou que essa foi maior que 7, por isso basta verificar um dos casos para dizer se ele foi aprovado ou reprovado

        }else{      //Esta é a mesnagem que aparecerá caso o aluno tenha feito recuperação, a sua nota de recuperação é exibida.
            printf("%d\t\t%s\t\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%s\n", alunos[i].matricula, alunos[i].nome, alunos[i].nota1,
                   alunos[i].nota2, alunos[i].nota3, alunos[i].notaRec, mediaTotal, mediaTotal < 5 ? "Reprovado" : "Aprovado");
        }           //Se o aluno fez a recuperação, significa que sua media comum foi entre 4 e 7 e para ser aprovado ou reprovado depende apenas da media final
                    //Por isso basta verificar esta ultima para dizer se ele(a) foi aprovado ou reprovado.


    }


    return 0;
}
