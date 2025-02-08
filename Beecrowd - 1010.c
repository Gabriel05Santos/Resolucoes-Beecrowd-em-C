#include <stdio.h> 
#include <string.h>

int main() {     
    int codigo1, codigo2, quantidP1, quantidP2;
    float valorUnitario1, valorUnitario2, total_pagar, produt1, produt2;
  
    scanf("%d %d %f", &codigo1, &quantidP1, &valorUnitario1);   
    scanf("%d %d %f", &codigo2, &quantidP2, &valorUnitario2);   
    
    total_pagar = quantidP1 * valorUnitario1 + quantidP2 * valorUnitario2;   
    
    printf("VALOR A PAGAR: R$ %.2f\n",total_pagar);
 return 0; 
 }