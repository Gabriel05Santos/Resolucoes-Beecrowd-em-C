#include <stdio.h> 
#include <math.h>

int main() {     
     
     int tempo_gasto, km_percorridos, distancia ;
     float litros;
     
     scanf("%d", &tempo_gasto);
     scanf("%d", &km_percorridos);
     
     distancia = tempo_gasto * km_percorridos;
     litros = distancia/12.0;
     
     printf("%.3f\n",litros);
 return 0;
 }