#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
   int g, m, i = 0;

   scanf("%d", &g);

   while(i != g){
        scanf("%d", &m);
        if(m % 2 == 0){
            if(m > 0){
                printf("EVEN POSITIVE\n");
            } else if(m < 0){
                printf("EVEN NEGATIVE\n");
            } else {
                printf("NULL\n");
            }
        } else if(m % 2 != 0){
            if(m > 0){
                printf("ODD POSITIVE\n");
            } else {
                printf("ODD NEGATIVE\n");
            }
        }
        i++;
    }
    return 0;
}


