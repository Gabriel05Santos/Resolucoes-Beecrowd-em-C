#include <stdio.h>
#include <stdlib.h>
void calcularImposto(double sal){
    double devido = 0;

    if(sal > 4500.00){
        devido += (sal - 4500.00) * 0.28;
        sal = 4500.00;
    }
    if(sal > 3000.00){
        devido += (sal - 3000.00) * 0.18;
        sal = 3000.00;
    }
    if(sal > 2000.00){
       devido += (sal - 2000.00) * 0.08;
    }
    if(devido == 0){
        printf("Isento\n");
    }
    else {
        printf("R$ %.2lf\n", devido);
    }
}
int main(){
    double salario;

    scanf("%lf", &salario);

    calcularImposto(salario);

    return 0;
}
