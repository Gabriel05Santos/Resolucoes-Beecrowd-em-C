/*
Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem 
crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.

Entrada
A entrada contem três números inteiros.

Saída
Imprima a saída conforme foi especificado.
*/
#include <stdio.h>
int main (){

    int num[3];
    
    for(int i=0; i<3; i++){
    scanf("%d", &num[3]);
    }
    
    for(int i=0; i<3; i++){
    if(num[0] <= num[1] && num[1] <= num[2]){
        if(num[0] >= num[2]){
            printf("%d\n", num[0]);
            printf("%d\n", num[2]);
            printf("%d\n", num[1]);
        } else if (num[0] < num[2]){
            printf("%d\n", num[2]);
            printf("%d\n", num[1]);
            printf("%d\n", num[0]);
        }
    } else if(num[0] <= num[1] && num[1] > num[2]){
        if(num[0] >= num[2]){
            printf("%d\n", num[1]);
            printf("%d\n", num[0]);
            printf("%d\n", num[2]);
        } else {
            printf("%d\n", num[1]);
            printf("%d\n", num[2]);
            printf("%d\n", num[0]);
        }
    } else if(num[0] > num[1] && num[1] <= num[2]){
        if(num[0] >= num[2]){
            printf("%d\n", num[0]);
            printf("%d\n", num[2]);
            printf("%d\n", num[1]);
        } else {
            printf("%d\n", num[2]);
            printf("%d'\n", num[0]);
            printf("%d\n", num[1]);
        }
    } else if(num[0] > num[1] && num[1] > num[2]){
        if(num[0] >= num[2]){
            printf("%d\n", num[0]);
            printf("%d\n", num[1]);
            printf("%d\n", num[2]);
        } else {
            printf("%d\n", num[1]);
            printf("%d\n", num[2]);
            printf("%d\n", num[0]);
        }
    }
            printf("%d\n", num[0]);
            printf("%d\n", num[1]);
            printf("%d\n", num[2]);
    }
    return 0;
}
