#include <stdio.h>
#include <stdlib.h>

int main (void){

int numero;
int a = 1;
int b = 1;

printf("Termo desejado: ");
scanf("%d", &numero);

for (int i=0; i <= numero; i++){
    b = a+b;
    a = b-a;
}
a = b-a;
printf("Fibonacci de %d e %d", numero, a);

return 0;
}