#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){
    if(n == 1)
        return 0;
    else {
        if(n == 2)
            return 1;
        else
           return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(){
    int x, result, aux, testes;

    scanf("%d", &testes);

    do{
        scanf("%d", &x);

        if(x == 1){
            result = 0;
        } else {
            if(x == 2)
                result = 1;
            else
            do{
                (x - 1) + (x - 2);
                aux--;
            }while(aux != 0);
        }
        printf("Fib (%d) = %d\n", x, result);
        testes--;
    }while(testes != 0);

    return 0;
}
