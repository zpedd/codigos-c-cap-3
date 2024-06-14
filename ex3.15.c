#include <stdio.h>
#include <stdlib.h>

int main (void){

    int numero;
    int fatorial = 1;


    printf("Numero: ");
    scanf("%d", &numero);

    if(numero > 0){
        for(int i = 1; i <= numero; i++){
            fatorial = fatorial * i ;
        }
    }else {
        printf("Nao ha fatorial de numero negativo.");
    }
    if(numero > 0 ){
printf("%d! = %d", numero, fatorial);
    }



return 0;
}