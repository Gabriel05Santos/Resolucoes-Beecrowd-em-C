/*
Leia 3 valores reais (A, B e C) e verifique se eles formam ou não um triângulo. 
Em caso positivo, calcule o perímetro do triângulo e apresente a mensagem:

Perimetro = XX.X

Em caso negativo, calcule a área do trapézio que tem A e B como 
base e C como altura, mostrando a mensagem

Area = XX.X

Entrada:
A entrada contém três valores reais.

Saída:
O resultado deve ser apresentado com uma casa decimal.
*/
#include <stdio.h>

void calcular_perimetro(double *a, double *b, double *c, double *perimetro){
    *perimetro = *a + *b + *c;
}

void calcular_area(double *a, double *b, double *c, double *area){
    *area = ((*a + *b) * (*c))/2;
}

int main(){
    double a, b, c;
    double perim, area, ap;

    scanf("%lf %lf %lf", &a, &b, &c);

    if(a + b > c && b + c > a && c + a > b){
        calcular_perimetro(&a, &b, &c, &perim);
        printf("Perimetro = %.1lf\n", perim);
    } else {
        calcular_area(&a, &b, &c, &area);
        printf("Area = %.1lf\n", area);
    }
  
    return 0;
}