#include <stdio.h>

int main(void){
    int sexo;
    float altura;
    float pesoIdeal;

    puts("Ola, bem vindo!");
    puts("Este programa calcula o peso ideal para pessoas da sua altura.");

    printf("\nPara iniciar o calculo, preciso saber seu sexo.\nDigite 1 para homem e 2 para mulher: ");
    scanf("%d", &sexo);
    printf("Agora informe a sua altura em metros: ");
    scanf("%f", &altura);

    if(sexo == 1){
       pesoIdeal = (72.7*altura)-58;
       printf("Seu peso ideal em kg eh: %.2f\n", pesoIdeal);
    }else{
        pesoIdeal = (62.1*altura)-44.7;
        printf("\nSeu peso ideal em kg eh: %.2f\n", pesoIdeal);
    }


    return 0;
}
