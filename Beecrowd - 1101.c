#include <stdio.h>
#include <stdlib.h>
int main(){
    int m, n, aux, soma;

    while(1){
        scanf("%d %d", &m, &n);

        if(m <= 0)break;
        if(n <= 0)break;

        if(m > n){
            aux = m;
            m = n;
            n = aux;
     }

     soma = 0;

        for(int i=m; i<=n; i++){
            printf("%d ", i);
            soma += i;
        }
        printf("Sum=%d\n", soma);
    }

    return 0;
}
