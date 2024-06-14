#include <stdio.h>
#include <stdlib.h>

int main (void){

int n1;
int n2;
int somatorio=0;

printf("N1: ");
scanf("%d", &n1);
printf("N2: ");
scanf("%d", &n2);

int menor=n1 < n2 ? n1 : n2; //Se num1 for menor que num2, então menor receberá o valor de num1, ou seja, menor = num1
int maior=n1 > n2 ? n1 : n2; //Se num2 for menor ou igual a num1, então menor receberá o valor de num2, ou seja, menor = num2

for(int i=menor; i <=maior; i++){
somatorio+= i;

}
printf("Somatorio entre %d e %d: %d", menor, maior, somatorio);
return 0;
}