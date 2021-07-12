#include <stdio.h>

int main(void){
    float nota1, nota2, nota3;
    float media;

    printf("Por favor, digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Por favor, digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Por favor, digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3)/3;

    printf("\nA media das notas deste aluno(a) corresponde a: %.1f\n", media);


    return 0;
}
