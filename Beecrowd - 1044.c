/*
Leia 2 valores inteiros (A e B). Após, o programa deve mostrar uma mensagem "Sao Multiplos" ou "Nao sao Multiplos", indicando se os valores lidos são múltiplos entre si.
Entrada:
A entrada contém valores inteiros.

Saída:
A saída deve conter uma das mensagens conforme descrito acima.
*/ 
#include <stdio.h>
void calcular_multiplos(int *A, int *B){
    if(*A > *B){
        if(*A % *B == 0){
            printf("Sao Multiplos\n");
        } else {
            printf("Nao sao Multiplos\n");
        }
    } else if(*B > *A){
        if(*B % *A == 0){
            printf("Sao Multiplos\n");
        } else {
            printf("Nao sao Multiplos\n");
        }
    }
}

int main(){
    int a, b;

    scanf("%d %d", &a, &b);

    calcular_multiplos(&a, &b);

    return 0;
}