#include <stdlib.h>
#include <stdio.h>

void read_New_Greanl(){

}
int main(){
    int answer, Gremio, draw = 0, Inter, amount1=0, amount2=0, grenais = 0;

   do{
    scanf("%d %d", &Inter, &Gremio);

    if(Inter > Gremio){
        amount1 += 1;
    } else if(Gremio > Inter){
        amount2 +=1;
    } else {
        amount1 = 0;
        amount2 = 0;
        draw += 1;
    }

    grenais +=1;

    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d", &answer);

   }while(answer != 2);

    if(amount1 > amount2){
        printf("%d grenais\n", grenais);
        printf("Inter:%d\n", amount1);
        printf("Gremio:%d\n", amount2);
        printf("Empates:%d\n", draw);
        printf("Inter venceu mais\n");
    } else if(amount2 > amount1){
        printf("%d grenais\n", grenais);
        printf("Inter:%d\n", amount1);
        printf("Gremio:%d\n", amount2);
        printf("Empates:%d\n", draw);
        printf("Gremio venceu mais\n");
    } else {
        printf("%d grenais\n", grenais);
        printf("Inter:%d\n", amount1);
        printf("Gremio:%d\n", amount2);
        printf("Empates:%d\n", draw);
        printf("Nao houve vencedor\n");
    }

    return 0;
}


