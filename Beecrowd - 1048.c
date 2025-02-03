#include <stdio.h>
#include <stdlib.h>

void calcularSalario(float sal){
    float new_salary = 0, readjustement = 0;
    float perc;

    if(sal <= 400.00){
        perc = 0.15;
        readjustement = (sal * perc);
        new_salary = sal + readjustement;
    }
    if(sal >= 400.01 && sal <= 800.00){
        perc =  0.12;
        readjustement = (sal * perc);
        new_salary = sal + readjustement;
    }
    if(sal >= 800.01 && sal <= 1200.00){
        perc = 0.10;
        readjustement = (sal * perc);
        new_salary = sal + readjustement;
    }
    if(sal >= 1200.01 && sal <= 2000.00){
        perc = 0.07;
        readjustement = (sal * perc);
        new_salary = sal + readjustement;
    }
    if(sal > 2000.00){
        perc = 0.04;
        readjustement =  (sal * perc);
        new_salary = sal + readjustement;
    }
    printf("Novo salario: %.2f\n", new_salary);
    printf("Reajuste ganho: %.2f\n", readjustement);
    printf("Em percentual: %.0f %\n", perc * 100);
}
int main(){

    float salario;

    scanf("%f", &salario);

    calcularSalario(salario);

    return 0;
}
