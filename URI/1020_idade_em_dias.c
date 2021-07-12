#include <stdio.h>

int main(void){

    int dias = 0, anos = 0, meses = 0, idade = 0;
    scanf("%d", &idade);

    if(idade > 365){
        anos = idade/365;
        meses = (idade%365)/30;
        dias = ((idade%365)%30);
    }else if(idade == 365){
        anos = 1;
    }else if (idade < 365){
        meses = idade/30;
        dias = idade%30;
    }

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);
    return 0;
}
