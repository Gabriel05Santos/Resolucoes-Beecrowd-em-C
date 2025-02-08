/*
Faça um programa que leia um vetor N[20]. Troque a seguir, o primeiro 
elemento com o último, o segundo elemento com o penúltimo, etc., até trocar o 10º 
com o 11º. Mostre o vetor modificado.
Entrada:
A entrada contém 20 valores inteiros, positivos ou negativos.
Saída:
Para cada posição do vetor N, escreva "N[i] = Y", onde i é a posição do 
vetor e Y é o valor armazenado naquela posição.
*/
#include <stdio.h>
#include <stdlib.h>
#define max 5
int main(){

    int N[max];
    int aux;

    for(int i=0; i<max; i++){
        scanf("%d", &N[i]);
    }
    
    for(int i=0; i<max; i++){
        aux=N[i];
    }
     for(int i=20; i<max; i--){
        N[i]=aux;
        printf("N[%d] = %d", i, N[i]);
    }
    return 0;
}