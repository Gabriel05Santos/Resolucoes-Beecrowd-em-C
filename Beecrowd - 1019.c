/*Leia um valor inteiro, que é o tempo de
duração em segundos de um determinado evento
em uma fábrica, e informe-o expresso no formato 
horas:minutos:segundos.

Entrada
O arquivo de entrada contém um valor inteiro N.

Saída
Imprima o tempo lido no arquivo de entrada 
(segundos), convertido para 
horas:minutos:segundos, conforme exemplo 
fornecido. */

#include <stdio.h> 
#include <math.h>

int main() {     
     int valor, horas, minutos, segundos;
     
     scanf("%d",&valor);
      
      horas = valor/3600;
      valor %= 3600;
      minutos = valor/60;
      valor %= 60;
      
     printf("%d:%d:%d\n", horas, minutos, valor);

 return 0;
 }