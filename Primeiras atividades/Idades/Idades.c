#include <stdio.h>

int main(void){
    int idade;

    puts("Ola, bem vindo!");
    puts("Este programa informa se voce eh jovem, adulto ou idoso de acordo com a sua idade");

    printf("\nPara iniciar digite a sua idade: ");
    scanf("%d", &idade);

    if(idade >= 0 && idade < 21)
        printf("\nVoce eh jovem.\n");
    if(idade >= 21 && idade < 60)
        printf("\nVoce eh adulto.\n");
    if(idade >= 60)
        printf("\nVoce eh idoso.\n");


    return 0;
}
