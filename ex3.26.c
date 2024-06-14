#include <stdio.h>
#include <stdlib.h>

int main (void){

    int numero = 0;
    int menor = 0;
    int maior = 0;
    int primeiro = 1;

    printf("Entre com um valor: ");

    while(1){
        scanf("%d", &numero);

        if (numero < 0){
            break;
        }
        if (primeiro){
            menor = numero;
            maior = numero;
            primeiro = 0;
        }else{
            if (numero < menor){
                menor = numero;
            }
            if ( numero > maior){
                maior = numero;
            }
        }
    }

    if (primeiro){
        printf("Menor numero: 0\n");
        printf("Maior numero: 0");
    }else{
        printf("Menor numero: %d\n", menor);
        printf("Maior numero: %d", maior);
    }

    return 0;
}