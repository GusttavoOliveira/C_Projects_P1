#include <stdio.h>

int main(void){
    int h, p;
    double media;

    scanf("%d %d", &h, &p);

    media = (double) h / p;

    printf("%.2lf\n", media);

    return 0;
}
