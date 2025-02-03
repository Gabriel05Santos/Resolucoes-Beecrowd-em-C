#include <stdio.h>
#include <stdlib.h>

int swap(int *a , int *b){
    int aux;
    if(*a > *b){
        return *a, *b;
    } else if(*b > *a){
        aux = *b;
        *b = *a;
        *a = aux;
        return *a, *b;
    }
}
int main(){
    int a, b, c;
    int *A , *B, *C;

    scanf("%d %d %d", &a, &b, &c);

    A = malloc(sizeof(int));
    B = malloc(sizeof(int));
    C = malloc(sizeof(int));

    if(A && B && C != NULL){
        *A = a;
        *B = b;
        *C = c;
    }

    if(a > c && b > c){
        swap(&a, &b);
        printf("%d\n", c);
        printf("%d\n", b);
        printf("%d\n", a);
        printf("\n");
    } else if(a > c && c > b){
        swap(&a, &c);
        printf("%d\n", b);
        printf("%d\n", c);
        printf("%d\n", a);
        printf("\n");
    } else if(c > a && b > a){
        swap(&c, &b);
        printf("%d\n", a);
        printf("%d\n", b);
        printf("%d\n", c);
        printf("\n");
    } else if(c > a && a > b){
        swap(&c, &a);
        printf("%d\n", b);
        printf("%d\n", a);
        printf("%d\n", c);
        printf("\n");
    }
        printf("%d\n", *A);
        printf("%d\n", *B);
        printf("%d\n", *C);

    return 0;
}
