#include <stdio.h>
#include <stdlib.h>
void estimateHours(int begin, int end){
    int lenght;

    if(begin > end){
        lenght = 24 - begin + end;
        printf("\nO JOGO DUROU %d HORA(S)\n", lenght);
    } else if(begin < end){
        lenght = (24 - begin + end) - 24;
        printf("\nO JOGO DUROU %d HORA(S)\n", lenght);
    } else {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
}

int main(){
    int begin_game, end_game;

    scanf("%d %d", &begin_game, &end_game);
    estimateHours(begin_game , end_game);
    return 0;
}
