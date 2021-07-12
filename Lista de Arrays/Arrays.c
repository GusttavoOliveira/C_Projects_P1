#include <stdio.h>
#include <math.h>

//Função da questão 6:
int EhArrayOrdenado(int ar[], int tamanhoDoArray){
    int atual, anterior = ar[0], i;

    for(i=0; i<tamanhoDoArray; i++){
        atual = ar[i];

        if(atual < anterior){
            return 0;
        }
    }

    return 1;


}

//Função da questão 5:
int MaximoValorArray(int ar[], int tamanhoDoArray){
    int i, atual, maior, anterior = 0;

    for(i=0; i<tamanhoDoArray; i++){
        atual = ar[i];

        if(atual > anterior){
            maior = atual;
            anterior = atual;
        }else{
            anterior = atual;
        }
    }

    return maior;

}

//Função da questão 4:
int EmArray(int ar[],int tamanhoDoArray,int elementoProcurado){
    int i;

    for(i=0; i<tamanhoDoArray; i++){
        if(elementoProcurado == ar[i]){
            return 1;
        }
    }
    return 0;

}

//Função pedida na questão 3:
double MediaArray(int ar[], int tamanhoDoArray){
    int soma = 0, i;
    double media;

    for(i = 0; i < tamanhoDoArray; i++){
        soma += ar[i];
    }
    media = (double) soma/tamanhoDoArray;

    return media;
}

int main(void){
    //Parte referente à questão 1:

    /**
    int ar[10], i, soma = 0;

    //Preenche o array da forma que se pede.
    for(i = 0; i < 10; i++){
        ar[i] = (i+1)*10;
    }

    //Apresenta todos os elementos do array em ordem crescente de seus indices.
    for(i = 0; i < 10; i++){
        printf("O elementento #%d eh: %d\n", i+1, ar[i]);
    }

    //Apresenta todos os elementos do array em ordem decrescente de seus indices.
    for(i = 9; i >= 0; i--){
        printf("\nO elementento #%d eh: %d", i+1, ar[i]);
    }

    //Apresenta o quinto elemento do array.
    printf("\n\nO quinto elemento do array eh: %d\n", ar[4]);

    //Apresenta todos os elementos de indice ímpar do array.
    for(i = 0; i < 10; i++){
        if(i%2 != 0){
        printf("\nO elementento de indice #%d eh: %d\n", i, ar[i]);
        }
    }

    //Apresenta a soma de todos os elementos do array.
    for(i = 0; i < 10; i++){
       soma += ar[i];
    }
    printf("\nSoma dos elementos eh: %d\n", soma);


    return 0;
    **/
    int ar[10], i, soma = 0, teste, verificador, maiorValor, ordem;
    double media;

    //Preenche o array da forma que se pede na questão 2:
    puts("Por favor digite 10 elementos para o array.");
    for(i=0; i<10; i++){
        printf("Digite o valor do elemento #%d: ", i+1);
        scanf("%d", &ar[i]);
    }

    //Apresenta todos os elementos do array em ordem crescente de seus indices.
    for(i = 0; i < 10; i++){
        printf("O elementento #%d eh: %d\n", i+1, ar[i]);
    }

    //Apresenta todos os elementos do array em ordem decrescente de seus indices.
    for(i = 9; i >= 0; i--){
        printf("\nO elementento #%d eh: %d", i+1, ar[i]);
    }

    //Apresenta o quinto elemento do array.
    printf("\n\nO quinto elemento do array eh: %d\n", ar[4]);

    //Apresenta todos os elementos de indice ímpar do array.
    for(i = 0; i < 10; i++){
        if(i%2 != 0){
        printf("\nO elementento de indice #%d eh: %d\n", i, ar[i]);
        }
    }

    //Apresenta a soma de todos os elementos do array.
    for(i = 0; i < 10; i++){
       soma += ar[i];
    }
    printf("\nSoma dos elementos eh: %d\n", soma);

    //Exibe a media dos valores do array como se pede na questão 3:
    media = MediaArray(ar, 10);
    printf("\nA media dos elementos desse array eh: %.2lf", media);

    //Teste da questão 4:
    printf("\nEscreva um numero para verificar se ele esta no array: ");
    scanf("%d", &teste);

    verificador = EmArray(ar, 10, teste);

    if(verificador){
        printf("%d existe no array\n", teste);
    }else{
        printf("%d nao existe no array\n", teste);
    }

    //Questão 5:
    maiorValor = MaximoValorArray(ar, 10);

    printf("\n\nO maior valor do array eh: %d\n", maiorValor);

    //Questão 6:
    ordem = EhArrayOrdenado(ar, 10);

    if(ordem){
        puts("\nEste array eh ordenado.");
    }else{
        puts("\nEste array nao eh ordenado.");
    }

    return 0;

}
