#include <stdio.h>

int main(){
    int n, posi = 0, aux = 0;

    for(int i = 0; i < 100; i++){
        scanf("%d", &n);
        if(n > aux){
            aux = n;
            posi = i + 1;
        }
    }
    printf("%d\n", aux);
    printf("%d\n", posi);
    return 0;
}





