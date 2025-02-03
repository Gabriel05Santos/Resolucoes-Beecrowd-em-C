#include <stdio.h>
#include <stdlib.h>
int main(){
    int x, quant = 0, quant2 = 0;

    scanf("%d", &x);

    int  n[x];

    for(int i = 0; i < x; i++){
        scanf("%d", &n[i]);
    }

    for(int i = 0; i < x; i++){
        if(n[i] >= 10 && n[i] <= 20){
            quant++;
        } else {
         quant2++;
        }
    }
    printf("%d in\n", quant);
    printf("%d out\n", quant2);

    getchar();
    return 0;
}

