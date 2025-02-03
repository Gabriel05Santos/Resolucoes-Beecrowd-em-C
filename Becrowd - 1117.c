#include <stdio.h>
#include <stdlib.h>
int main(){
    float nota, media, soma = 0;
    int quant = 0, n_valida = 0;

    do{
        scanf("%f", &nota);

        if(nota >=0 && nota <=10){
            n_valida++;
            soma += nota;
            quant++;
        } else {
            printf("nota invalida\n");
        }

    }while(n_valida != 2);

    media = soma/quant;
    printf("media = %.2f\n", media);

    return 0;
}
