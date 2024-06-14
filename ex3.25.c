#include <stdio.h>
#include <stdlib.h>

int main (void){

    float n1 = 0;
    float somatorio = 0;
    float media;
    int quantidade = 0;

    printf("Entre com um valor: ");

    while (1){
        scanf("%f", &n1);

        if ( n1 < 0){
            break;
        }
        somatorio = somatorio + n1; 
        quantidade++;
        }
        if (quantidade > 0){
            float media = (float) somatorio / quantidade;
            printf("Somatorio: %.2f\n", somatorio);
            printf("Media: %.2f\n", media);
            printf("Quantidade: %d", quantidade);

        }else{
        printf("Somatorio: 0.00\n");
        printf("Media: 0.00\n");
        printf("Quantidade: 0");
        }

    return 0;
}