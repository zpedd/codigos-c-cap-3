#include <stdio.h>
#include <stdlib.h>

int main (void){

int altura;
int i;
int j;

printf("Altura: ");
scanf("%d", &altura);

if (altura != 0){
    if (altura > 0){
        for(i = 1; i <= altura; i++){
            for(j = 1; j <= altura - i; j++){
                printf(" ");
            }
             //pros *
            for(j = 1; j <=2 * i-1; j++){
            printf("*");
        }
          printf("\n");
    }
    }else {
        altura = -altura;
        for(i = altura; i >= 1; i--){
            for (j = 1; j <= altura -i; j++){
                printf(" ");
            }
            for(j = 1; j <= 2 * i-1; j++){
                printf("*");
            }
            printf("\n");
        }
    }
}

return 0;
}