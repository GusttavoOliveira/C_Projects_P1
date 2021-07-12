/**
 ============================================================================
 Problema  : 2221 - Batalha de Pomekons
 Autor     : Igor Matheus
 ============================================================================
 */
#include <stdio.h>

int Golpe(int A, int D, int B, int L){
    int golpe;

    golpe = (L % 2 == 0) ? ((A + D)/2) + B : ((A + D)/2);
    return golpe;
}

int main(void){
    int T, B, A, D, L, i;
    int A2, D2, L2, dabriel, guarte;

    scanf("%d", &T);

    for(i = 1; i <= T; i++){
        scanf("%d", &B);
        scanf("%d %d %d", &A, &D, &L);
        scanf("%d %d %d", &A2, &D2, &L2);

        dabriel = Golpe(A, D, B, L);
        guarte = Golpe(A2, D2, B, L2);

        if (dabriel > guarte){
            printf("Dabriel\n");
        }else if (dabriel == guarte){
            printf("Empate\n");
        }else{
            printf("Guarte\n");
        }

    }

    return 0;
}
