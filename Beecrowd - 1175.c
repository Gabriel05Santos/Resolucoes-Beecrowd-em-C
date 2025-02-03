#include <stdio.h>
#include <stdlib.h>

int main(){

    int N[20], k=0, aux;

    for(int i=0; i<20; i++){
        scanf("%d", &N[i]);
    }

    for(int i=0; i<20; i++){
        aux = N[i];
        N[i] = N[19-i];
        N[19-i] = aux;
    }
    for(int i=19; i>=0; i--){
        printf("N[%d] = %d\n", k, N[i]);
        k++;
    }
    return 0;
}
