#include <stdio.h>
#include <stdlib.h>
void par_impar(int *Impar, int *Par){

    for(int i = 0; i < 5; i++){
       printf("par[%d] = %d\n", i, *(Par + i));
    }
    for(int i = 0; i < 5; i++){
        printf("impar[%d] = %d\n", i, *(Impar + i));
    }
    free(Impar);
    free(Par);
}

int main(){
    int *Par = NULL, *valor, *Impar = NULL, k = 0;

    Par = (int *)malloc(5*sizeof(int));

    if(Par == NULL){
        printf("\nErro ao alocar memoria!!\n");
        exit(1);
    }

    Impar = (int *)malloc(5*sizeof(int));

    if(Impar == NULL){
        printf("\nErro ao alocar memoria!!\n");
        exit(1);
    }

    valor = (int *)malloc(15*sizeof(int));

    if(valor == NULL){
        printf("\nErro ao alocar memoria!!\n");
        exit(1);
    }

    for(int i=0; i<15; i++){
        scanf("%d", &valor[i]);

        if(valor[i] % 2 == 0){
           Par[i] = valor;
        }

        if(valor[i] % 2 == 1){
            Impar[i] = valor;
        }

        k++;

        if(k == 5 || k == 10 || k == 15){
          par_impar(Impar, Par);
        }
    }



    return 0;
}

