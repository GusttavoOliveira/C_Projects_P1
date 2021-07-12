#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int numLivros, i, resultado;
    char livros[1005][6], aux[6];
    char *ponteiro;

    while(scanf("%d", &numLivros) != EOF){

        for(i=0; i<numLivros; i++){
            scanf("%s", livros[i]);
        }

        for(i=0; i<numLivros-1; i++){
            resultado = strcmp(livros[i], livros[i+1]);

            if(resultado > 0){
                strcpy(aux, livros[i]);
                strcpy(livros[i], livros[i+1]);
                strcpy(livros[i+1], aux);
                i=-1;
            }


        }

        for(i=0; i<numLivros; i++){
            printf("%s\n", livros[i]);
        }
    }

    return 0;
}
