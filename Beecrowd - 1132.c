#include <stdio.h>
#include <stdlib.h>

int main(){

    int x, y;
    int soma = 0;

    scanf("%d %d", &x, &y);

    if(y >= x){
        for(int i=x; i<y; i++){
            if(i % 13 != 0){
                soma += i;
            }
        }
        printf("%d\n", soma);
    } else {
        for(int i=y; i<x; i++){
            if(i % 13 != 0){
                soma += i;
            }
        }
        printf("%d\n", soma);
    }


    return 0;
}
