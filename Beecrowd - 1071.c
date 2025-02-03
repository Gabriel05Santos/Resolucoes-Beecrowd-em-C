#include <stdio.h>
#include <stdlib.h>
int main(){

    int x, y, aux, impar = 0;

    scanf("%d %d", &x, &y);

    if(x > y){
        aux = x;
        x = y + 1;
        y = aux;
    }

    for(int i = x; i < y; i++){
        if(i % 2 != 0){
            impar += i;
        }
    }

    printf("%d\n", impar);

    return 0;
}
