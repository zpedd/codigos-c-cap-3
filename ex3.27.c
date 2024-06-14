#include <stdio.h>
#include <stdlib.h>

int main (void){

    float peso;
    float soma = 0.0;
    float media = 0.0;
    float pesomaximo = 0.0;
    int quantidade = 0;

    printf("Entre com peso da pessoa: ");

    while (1) {
        scanf("%f", &peso);

        if (peso < 0) {
            if (quantidade == 0) {
                printf("Media dos pesos acima de 60kg: 0.00\n");
                printf("A pessoa mais pesada possui %.2fkg", pesomaximo);
                return 0;
            }
            break; // Sai do loop se o peso for negativo
        }
        
        if (peso > pesomaximo) {
            pesomaximo = peso; // Atualiza o peso máximo
        }

        if (peso > 60) {
            soma = soma + peso;
            quantidade++;
        }
    }

    if (quantidade > 0) {
        media = soma / quantidade;
    
        printf("Media dos pesos acima de 60kg: %.2f\n", media);
        printf("A pessoa mais pesada possui %.2fkg", pesomaximo);
    }

    return 0;
}