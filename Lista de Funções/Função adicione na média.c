#include <stdio.h>

double AdicioneNaMedia(double valor){
    static int numValores = 0;
    static double soma = 0;

    numValores++;
    soma += valor;

    return soma/numValores;

}

int main(void){
    double valor, media;
    int i, testes;

    puts("Este programa calcula a media aritmetica dos valores inseridos.");
    printf("Quantos valores voce deseja inserir? ");
    scanf("%d", &testes);

    for(i=0; i<testes; i++){
        printf("Digite um valor: ");
        scanf("%lf", &valor);

        media = AdicioneNaMedia(valor);

        printf("A media dos valores digitados eh: %.2lf\n", media);
    }

    return 0;
}
