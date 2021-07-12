#include <stdio.h>

int main(void){                                         // Todas as variáveis a seguir são do tipo double, pois como se trata de notas e medias, a probabilidade de que não seja um número inteiro existe.
    double nota1, nota2, nota3, nota4, nota5, nota6;    // Variaveis para guardar as notas das avaliações.
    double notaUnidade1, notaUnidade2, notaUnidade3;    // Variaveis para guardar as notas unificadas de cada unidade.
    double media;                                       // Variavel para guardar a media semestral.
    #define PESOMAIOR 6.0                               // Como foi pedido, constantes simbólicas para os pesos. Peso maior.
    #define PESOMENOR 4.0                               // Peso menor.
    #define SOMADOSPESOS 10.0                           // Uma constante simbólica para a soma dos pesos tambem, para deixar mais legível.

    puts("Ola suposto professor, este programa o auxiliara a calcular as notas e as medias dos alunos."); //prompt de apresentação bem gentil :)
    puts("\nPor favor, insira as notas da Unidade 1");  // Mensagem para especificar e deixar claro quais notas devem ser inseridas. As correspondentes à Unidade 1
    printf("Nota da Disciplina Teorica: ");             // Pede nota da disciplina específica.
    scanf("%lf", &nota1);                               // Guarda a nota pedida acima
    printf("Nota da Disciplina Pratica: ");             // Pede nota da disciplina específica.
    scanf("%lf", &nota2);                               // Guarda a nota pedida acima

    /* Usando o operador ternário eu verifico qual das notas é a maior e baseado nisso indico precisamente
    o calculo a ser feito, caso a primeira seja maior, ela é multiplicada pelo maior peso e a segunda pelo menor peso, depois
    as duas são somadas e é feita a divisão desse valor pela soma dos pesos. Caso a condição seja falsa, significa que a segunda
    nota é maior do que a primeira, sendo assim o procedimento é feito invertendo os pesos na hora da multiplicação.*/

    notaUnidade1 = (nota1 > nota2)?(nota1*PESOMAIOR + nota2*PESOMENOR)/SOMADOSPESOS : (nota2*PESOMAIOR + nota1*PESOMENOR)/SOMADOSPESOS;

    /*Aqui é exibido o valor da nota unificada da unidade 1.*/

    printf("\nA nota unificada da Unidade 1 foi: %.2lf", notaUnidade1);

    /*O mesmo procedimento usado na unidade 1 é refeito para a 2 e para a 3 subtituindo as variáveis das notas
    das avaliações, das notas unificadas e modificando os prompts onde necessário, é claro. Mas os cálculos funcionam
    usando os mesmos princípios*/

    puts("\n\nAgora, insira as notas da Unidade 2");
    printf("Nota da Disciplina Teorica: ");
    scanf("%lf", &nota3);
    printf("Nota da Disciplina Pratica: ");
    scanf("%lf", &nota4);

    notaUnidade2 = (nota3 > nota4)?(nota3*PESOMAIOR + nota4*PESOMENOR)/SOMADOSPESOS : (nota4*PESOMAIOR + nota3*PESOMENOR)/SOMADOSPESOS;

    printf("\nA nota unificada da Unidade 2 foi: %.2lf", notaUnidade2);

    puts("\n\nAgora, insira as notas da Unidade 3");
    printf("Nota da Disciplina Teorica: ");
    scanf("%lf", &nota5);
    printf("Nota da Disciplina Pratica: ");
    scanf("%lf", &nota6);

    notaUnidade3 = (nota5 > nota6)?(nota5*PESOMAIOR + nota6*PESOMENOR)/SOMADOSPESOS : (nota6*PESOMAIOR + nota5*PESOMENOR)/SOMADOSPESOS;

    printf("\nA nota unificada da Unidade 3 foi: %.2lf\n\n", notaUnidade3);

    /*Calculo da media total do semeste: */

    media = (notaUnidade1 + notaUnidade2 + notaUnidade3) / 3; //Uma media aritmética comum entre as 3 notas unificadas.

    /*Exibição da media e verificação e exibição do conceito: */

    if(media >= 9.0 && media <= 10.0){
        printf("A media semestral dx alunx foi: %.2lf\nConceito: A.\n", media);
    }else if(media >= 8.0 && media < 9.0){
        printf("A media semestral dx alunx foi: %.2lf\nConceito: B.\n", media);
    }else if(media >= 7.0 && media < 8.0){
        printf("A media semestral dx alunx foi: %.2lf\nConceito: C.\n", media);
    }else if(media >= 6.0 && media < 7.0){
        printf("A media semestral dx alunx foi: %.2lf\nConceito: D.\n", media);
    }else if(media >= 5.0 && media < 6.0){
        printf("A media semestral dx alunx foi: %.2lf\nConceito: E.\n", media);
    }else if(media < 5.0){
        printf("A media semestral dx alunx foi: %.2lf\nConceito: F.\n", media);
    }

    /*Eu optei por usar IFs e ELSEs para verificar o valor da media e atribuir a mensagem especifica para cada conceito.
    O conceito depende da avaliação da condição dos IFs, os IFs verificam sempre se a media está dentro de um intervalo
    pré determinado e sabendo disso atribui uma mensagem onde exibe a media com 2 casas decimais após a virgula e o conceito
    do(a) aluno(a). Cada condição tem um operador lógico &&(e) para verificar com total certeza de que a média está inserida
    num intervalo tanto pelo "lado menor" quanto pelo "lado maior" do intervalo. Com exceção do último IF que veifica apenas se a média é menor do que 5.*/

    return 0;
}
