#include <stdio.h> 
#include <math.h>

int main() {     
     
     float p1, p2, x1, y1, x2, y2, Distancia;
    
         scanf("%f %f", &x1, &y1);
         scanf("%f %f", &x2, &y2);
     p1 = x2 - x1;
     p2 = y2 - y1;
     
     Distancia = sqrt(pow(p1, 2) + pow(p2, 2));
 
         printf("%.4f\n",Distancia);
 return 0;
 }