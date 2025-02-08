#include <stdio.h> 
#include <string.h>

int main() {     
    char nome[1];
    double salario_fixo,vendas_mes,total_receber;
    
    scanf("%s",&nome[1]);
    scanf("%lf",&salario_fixo);
    scanf("%lf",&vendas_mes);
    
    total_receber = (salario_fixo + ((vendas_mes * 15)/100));
    
    printf("TOTAL = R$ %.2lf\n",total_receber);
 return 0; 
 }