#include <stdio.h>

int main(void){
   char c;
   float termo, razao, soma;
   int numDeTermos, i;

   soma = 0;

   puts("Ola, bem vindx!");
   puts("Este programa calcula uma p.a ou uma p.g de acordo com os dados inseridos.");

   printf("Por favor, digite a para uma p.a ou g para uma p.g: ");
   scanf("%c", &c);
   printf("\nQual o primeiro termo da progressao? ");
   scanf("%f", &termo);
   printf("Qual a razao? ");
   scanf("%f", &razao);
   printf("Qual o numero de termos? ");
   scanf("%d", &numDeTermos);

   if( c == 'a'){
        for( i = 1; i <= numDeTermos; i = i + 1){
            printf("%.2f\n", termo);
            soma = soma + termo;
            termo = termo + razao;
        }
    printf("\nA soma dos termos desta p.a foi: %.2f\n", soma);
   }else{
        for( i = 1; i <= numDeTermos; i = i + 1){
            printf("%.2f\n", termo);
            soma = soma + termo;
            termo = termo * razao;
        }
    printf("\nA soma dos termos desta p.g foi: %.2f\n", soma);
   }

    return 0;
}
