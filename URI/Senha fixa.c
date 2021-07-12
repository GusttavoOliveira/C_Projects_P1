#include <stdio.h>

int main(void){
    int senha;

    senha = 2002;

    do{
        scanf("%d", &senha);

        if(senha != 2002)
            puts("Senha Invalida");

    }while( senha != 2002);

    puts("Acesso Permitido");

    return 0;
}
