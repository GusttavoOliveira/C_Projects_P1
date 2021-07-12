/**
 ============================================================================
 Problema  : 2221 - Batalha de Pomekons
 Autor     : Guilhermex2013
 ============================================================================
 */
#include <stdio.h>

int ValorGolpe(ataque, defesa, level, bonus){
    int golpe;
    golpe = (ataque + defesa) / 2;
    if (level % 2 == 0){
        golpe += bonus;
    }
    return golpe;
}

int main()
{
    int testes, cont, bonus, atk, def, lvl, Dab, Gua;

    scanf("%d", &testes);
    for (cont = 1; cont <= testes; cont++){
        scanf("%d %d %d %d", &bonus, &atk, &def, &lvl);
        Dab = ValorGolpe(atk, def, lvl, bonus);
        scanf("%d %d %d", &atk, &def, &lvl);
        Gua = ValorGolpe(atk, def, lvl, bonus);
        if (Dab > Gua){
            printf("Dabriel\n");
        }
        else if(Gua > Dab){
            printf("Guarte\n");
        }
        else{
            printf("Empate\n");
        }
    }
    return 0;
}