#include <stdio.h> 

int main() {     
    double A, B, C;
    double Retangulo, Area_Circulo, Area_TriRet, Area_Trapezio, Quadrado;
    
    scanf("%lf %lf %lf", &A, &B, &C);
   
     Area_TriRet = (A * C)/2;
     Area_Trapezio = ((A + B)*C)/2;
     Area_Circulo =  3.14159 * (C * C);
     Retangulo = A * B;
     Quadrado = A * B;
        printf("TRIANGULO: %.3lf\n",Area_TriRet);
        printf("CIRCULO: %.3lf\n",Area_Circulo); 
        printf("TRAPEZIO: %.3lf\n",Area_Trapezio); 
        printf("QUADRADO: %.3lf\n",Quadrado);
        printf("RETANGULO: %.3lf\n",Retangulo);
 
 return 0;
 }