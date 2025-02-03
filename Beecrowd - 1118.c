#include <stdlib.h>
#include <stdio.h>

int main(){
    float notas, sum = 0;
    int c = 0, amount = 0, n_validas = 0;

    while(1){
        begin:
        if(c == 2)break;
        scanf("%f", &notas);

        if(notas >= 0 && notas <= 10){
            amount++;
            sum+=notas;
            n_validas++;
        } else {
            printf("nota invalida\n");
        }

        if(n_validas == 2){
            float media = sum/amount;
            printf("media = %.2f\n", media);

           while(1){
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &c);
            if(c == 1 ){
                sum = 0;
                amount = 0;
                n_validas = 0;
                break;
             } else if(c == 2){
                break;
             }
           }
        }
    }

    return 0;
}
