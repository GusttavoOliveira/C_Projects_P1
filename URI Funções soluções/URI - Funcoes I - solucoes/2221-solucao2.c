/**
 ============================================================================
 Problema  : 2221 - Batalha de Pomekons
 Autor     : Jansen Cruz
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float ValorGolpe(float a, float d, int l, int b){
    if(l % 2 == 0){
        return ((a + d) / 2) + b;
    }
    return (a + d) / 2;
}

int main(void){

	int t, b, ld, lg;
	float ad, dd, ag, dg;

	scanf("%d", &t);

	while(t--){
        scanf("%d", &b);
        scanf("%f %f %d", &ad, &dd, &ld);
        scanf("%f %f %d", &ag, &dg, &lg);

        if(ValorGolpe(ad, dd, ld, b) > ValorGolpe(ag, dg, lg, b)){
            puts("Dabriel");
        } else if(ValorGolpe(ad, dd, ld, b) < ValorGolpe(ag, dg, lg, b)){
            puts("Guarte");
        } else {
            puts("Empate");
        }
	}

	return 0;
}
