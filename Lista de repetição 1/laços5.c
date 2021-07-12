#include <stdio.h>

int main(void){
    int a, b;

    printf("\nPor favor, insira o valor de a: ");
    scanf("%d", &a);
    printf("\nPor favor, insira o valor de b: ");
    scanf("%d", &b);

    for( a = a; a <= b; a = a + 1){
        printf("%d\n", a);
    }

    return 0;
}
