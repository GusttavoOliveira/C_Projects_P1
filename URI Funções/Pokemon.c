#include <stdio.h>

float ValorDeGolpe(int ataque, int defesa, int level, int bonus){
    if(level % 2 == 0 ){
        return ((ataque + defesa) / 2.0) + bonus;
    }

    return ((ataque + defesa) / 2.0);
}

int main(void){
    int i;
    int testes, bonus, levelD, levelG;
	float ataqueD, defesaD, ataqueG, defesaG;

    scanf("%d", &testes);

    for(i = 0; i < testes; i++){
        scanf("%d", &bonus);
        scanf("%f%f%d", &ataqueD, &defesaD, &levelD);
        scanf("%f%f%d", &ataqueG, &defesaG, &levelG);

         if(ValorDeGolpe(ataqueD, defesaD, levelD, bonus) > ValorDeGolpe(ataqueG, defesaG, levelG, bonus)){
            puts("Dabriel");
        } else if(ValorDeGolpe(ataqueD, defesaD, levelD, bonus) < ValorDeGolpe(ataqueG, defesaG, levelG, bonus)){
            puts("Guarte");
        } else {
            puts("Empate");
        }
    }

    return 0;

}
