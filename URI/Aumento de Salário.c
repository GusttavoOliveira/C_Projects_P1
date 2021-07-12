#include <stdio.h>

int main(void){
    double  salario, salarioNovo, reajuste;

    scanf("%lf", &salario);

    if(salario >= 0 && salario <= 400.00){
        reajuste = salario * (15.0/100);
        salarioNovo = salario + reajuste;

        printf("Novo salario: %.2lf\n", salarioNovo);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        puts("Em percentual: 15 \%");
    }else if(salario >= 400.01 && salario <= 800.00){
        reajuste = salario * (12.0/100);
        salarioNovo = salario + reajuste;

        printf("Novo salario: %.2lf\n", salarioNovo);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        puts("Em percentual: 12 \%");
    }else if(salario >= 800.01 && salario <= 1200.00){
        reajuste = salario * (10.0/100);
        salarioNovo = salario + reajuste;

        printf("Novo salario: %.2lf\n", salarioNovo);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        puts("Em percentual: 10 \%");
    }else if(salario >= 1200.01 && salario <= 2000.00){
        reajuste = salario * (7.0/100);
        salarioNovo = salario + reajuste;

        printf("Novo salario: %.2lf\n", salarioNovo);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        puts("Em percentual: 7 \%");
    }else if(salario > 2000.00){
        reajuste = salario * (4.0/100);
        salarioNovo = salario + reajuste;

        printf("Novo salario: %.2lf\n", salarioNovo);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        puts("Em percentual: 4 \%");
    }

    return 0;
}
