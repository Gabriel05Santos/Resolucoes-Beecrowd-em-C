/*
Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o 
maior dos 3 lados. A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada:

    se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
    se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
    se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
    se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
    se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
    se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES

Entrada

A entrada contem três valores de ponto flutuante de dupla precisão A (0 < A) , B (0 < B) e C (0 < C).
Saída

Imprima todas as classificações do triângulo especificado na entrada.
*/
#include <stdio.h>

void trocarValores(double* a, double* b){
    double aux;

    aux = *a;
    *a = *b;
    *b = aux;
}

int main(){

    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    if(b > a)
     trocarValores(&a, &b);

    if(c > b){
        trocarValores(&b, &c);
        if(b > a)
        trocarValores(&a, &b);
    }

    if(a >= b + c){
        printf("NAO FORMA TRIANGULO\n");
    } else {
   
    if(b * b + c * c == a * a)  
    printf("TRIANGULO RETANGULO\n");
    
    else if(a * a > b * b + c * c)
    printf("TRIANGULO OBTUSANGULO\n");
    
    else
    printf("TRIANGULO ACUTANGULO\n");

    if(a == b && b == c)
    printf("TRIANGULO EQUILATERO\n");  
    
    else if(a == b || b == c || c == a) 
    printf("TRIANGULO ISOSCELES\n");

    }
   
        return 0;
    }