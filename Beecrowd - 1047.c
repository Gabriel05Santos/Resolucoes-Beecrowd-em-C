#include <stdio.h>
#include <stdlib.h>
void estimateHours(int Begin, int Begin_minute, int End, int End_minute){
    int lenght1, lenght2;

    if(Begin > End || (Begin == End && Begin_minute > End_minute)){
        lenght1 = 24 - Begin + End - 1;
        lenght2 = 60 - Begin_minute + End_minute;
    }
    else if(Begin > End && Begin_minute <= End_minute){
        lenght1 = 24 - Begin + End;
        lenght2 = End_minute - Begin_minute;
    }
    else if(Begin <= End && Begin_minute > End_minute){
        lenght1 = End - Begin - 1;
        lenght2 = 60 - Begin_minute + End_minute;
    }
     else if(Begin <= End && Begin_minute <= End_minute){
        lenght1 = End - Begin;
        lenght2 = End_minute - Begin_minute;
    }
    else {
        lenght1 = 0;
        lenght2 = 0;
    }
    if(Begin == End && Begin_minute == End_minute){
        lenght1 = 24;
        lenght2 = 0;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", lenght1, lenght2);
}

int main(){
    int begin, begin_minute, end, end_minute;

    scanf("%d %d %d %d", &begin, &begin_minute, &end, &end_minute);

    estimateHours(begin, begin_minute, end, end_minute);
    return 0;
}

