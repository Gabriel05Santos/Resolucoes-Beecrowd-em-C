#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int quant, *p, i, testes, total = 0, quant_c = 0, quant_s = 0, quant_r = 0;
    char cobaias[4] = {'R', 'C', 'S', '\0'};
    double perc_c, perc_r, perc_s;

    p = &testes;

    scanf("%d", &*p);
    fflush(stdin);

    do{
        scanf("%d %c", &quant, &cobaias[i]);
        fflush(stdin);
        total += quant;
        if(cobaias[i] == 'R'){
            quant_r += quant;
        }
         if(cobaias[i] == 'C'){
            quant_c += quant;
        }
        if(cobaias[i] == 'S'){
            quant_s += quant;
        }
        testes--;
    }while(testes != 0);

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", quant_c);
    printf("Total de ratos: %d\n", quant_r);
    printf("Total de sapos: %d\n", quant_s);
    printf("Percentual de coelhos: %.2lf %\n", perc_c = (quant_c / (double)total) * 100);
    printf("Percntual de ratos: %.2lf %\n", perc_r = (quant_r / (double)total) * 100);
    printf("Percentual de sapos: %.2lf %\n", perc_s = (quant_s / (double)total) * 100);

    return 0;
}
