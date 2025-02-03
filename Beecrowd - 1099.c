#include <stdio.h>
#include <stdlib.h>

int main(){
    int casos, x, y;

    scanf("%d", &casos);

    while(1){
        if(casos == 0) break;

        scanf("%d %d", &x, &y);

        if(x > y){
            int aux = x;
            x = y;
            y = aux;
        }

        int soma = 0;

        for(int i=x+1; i<y; i++){
            if(i % 2 != 0){
                soma += i;
            }
        }
        printf("%d\n", soma);

        casos--;
    }

    return 0;
}
