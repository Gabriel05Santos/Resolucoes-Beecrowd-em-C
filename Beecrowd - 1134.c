#include <stdlib.h>
#include <stdio.h>

int main(){
    int fuel, counter1 = 0, counter2 = 0, counter3 = 0;

    do{
        scanf("%d", &fuel);

        switch(fuel){

        case 1:
        counter1++;
        break;

        case 2:
        counter2++;
        break;

        case 3:
        counter3++;
        break;

        }
    }while(fuel != 4);

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", counter1);
    printf("Gasolina: %d\n", counter2);
    printf("Diesel: %d\n", counter3);

    return 0;
}
