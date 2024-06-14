#include <stdio.h>
#include <stdlib.h>

int main (void){

int n1;
int n2;

printf("forneca um numero inteiro: ");
scanf("%d", &n1);
printf("forneca outro numero inteiro: ");
scanf("%d", &n2);

                 //operador ternario 
int menor=n1 < n2 ? n1 : n2; //Se num1 for menor que num2, então menor receberá o valor de num1, ou seja, menor = num1
int maior=n1 > n2 ? n1 : n2; //Se num2 for menor ou igual a num1, então menor receberá o valor de num2, ou seja, menor = num2

int qtdpares = 0;

for(int i = menor; i <= maior; i++){
    if(i % 2 == 0){
    qtdpares++;    //qtdpares = qtdpares +
    }
}
printf("Numeros pares entre %d e %d: %d", menor, maior, qtdpares);

return 0;
}