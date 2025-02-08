#include <stdio.h> 

int main() {     
    float novo_sal, valor_porHora;
    int num,horas_trabalhadas;
    
    scanf("%d", &num);
    scanf("%d", &horas_trabalhadas);
    scanf("%f", &valor_porHora);
    
    novo_sal = (horas_trabalhadas * valor_porHora);
    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %.2f\n",novo_sal);
               
 return 0; 
 }