#include <stdio.h>

int main(){
   int casos;
   float m, n, g, media;

   scanf("%d", &casos);

   for(int i = 0; i < casos; i++){
    scanf("%f %f %f", &m, &n, &g);
    media = (m*2 + n*3 + g*5)/10;
    printf("%.1f\n", media);
   }
    return 0;
}




