#include <stdio.h>
#include <stdlib.h>

int main(void){

int numero;

printf("Forneca um numero maior ou igual a zero: ");
scanf("%d ", &numero);

if(numero >= 0){
    for (int i = 7; i >= 0 ; i-- ){
        printf("%d ", i);
    }
    }else {
        printf("Valor incorreto (negativo)");
    }

    return 0;
}