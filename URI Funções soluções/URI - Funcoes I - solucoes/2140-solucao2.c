/**
===============================================================================================
 Problema:	2140 - Duas Notas
 Autor:     Jansen Cruz
===============================================================================================
*/
#include <stdio.h>
#include <stdlib.h>


int IsPossible(int v1, int v2){
    int valor;
    int quantidade; /* quantidade de alguma cedula */
    int resto; /* resto que falta do valor */
    int cont = 0;

    valor = v2 - v1;
    /* quantas de 100? */
    quantidade = valor / 100; /* essa eh uma divisao inteira */
    resto = valor % 100; /* quanto sobra ao dividir por 100? */
    if (quantidade > 0){
        cont++;
    }

    valor = resto;

    /* quantas de 50? */
    quantidade = valor / 50;
    if (quantidade > 0){
        cont++;
    }

    valor = valor % 50;

    /* quantas de 20? */
    quantidade = valor / 20;
    if (quantidade > 0){
        cont++;
    }
    valor = valor % 20;

    /* quantas de 10? */
    quantidade = valor / 10;
    if (quantidade > 0){
        cont++;
    }
    valor = valor % 10;

    quantidade = valor / 5;
    if (quantidade > 0){
        cont++;
    }
    valor = valor % 5;

    quantidade = valor / 2;
    if (quantidade > 0){
        cont++;
    }
    if (cont == 2){
        return 1;
    }
    return 0;
}

int main(void){

	int n, m;

	scanf("%d %d", &n, &m);
	do{

        if(IsPossible(n,m)){
            puts("possible");
        } else {
           puts("impossible");
        }

        scanf("%d %d", &n, &m);

	}while(n && m);

	return 0;
}
