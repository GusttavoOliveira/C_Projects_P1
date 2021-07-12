#include <stdio.h>

int main(void){
    float altura, peso, imc;

    puts("Ola, bem vindx!");
    puts("Este programa calcula o Indice de Massa Corporal.");

    printf("\nPor favor, insira o seu peso(em kg): ");
    scanf("%f", &peso);
    printf("Agora insira sua altura(em metros): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("\nSeu IMC corresponde a: %.2f kg/m2.\n", imc);

    if( imc <= 18.5 ){
        printf("\nSegundo a OMS, voce eh classificado com: Baixo peso\n");
    }else if( imc > 18.5 && imc <= 25){
        printf("\nSegundo a OMS, voce eh classificado com: Normal\n");
    }else if( imc > 25 && imc <= 30){
       printf("\nSegundo a OMS, voce eh classificado com: Sobrepeso\n");
    }else if( imc > 30){
       printf("\nSegundo a OMS, voce eh classificado com: Obesidade\n");
    }

    return 0;
}
