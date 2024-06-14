#include <stdio.h>
#include <stdlib.h>

int main (void){

int n1;
int n2;
int multiplo2 = 0;
int multiplo3 = 0;
int multiplo4 = 0;

printf("Entre com um numero inteiro: ");
scanf("%d", &n1);
printf("Entre com outro numero inteiro: ");
scanf("%d", &n2);

          //operador ternario 
int menor=n1 < n2 ? n1 : n2; //Se num1 for menor que num2, então menor receberá o valor de num1, ou seja, menor = num1
int maior=n1 > n2 ? n1 : n2; //Se num2 for menor ou igual a num1, então menor receberá o valor de num2, ou seja, menor = num2

    for(int i =menor; i <= maior; i++ ){
        if(i % 2 == 0){
            multiplo2++;
        }
        if(i % 3 == 0){
            multiplo3++;
        }
        if(i % 4 == 0){
            multiplo4++;
        }
    }
printf("Multiplos de 2: %d\n", multiplo2);
printf("Multiplos de 3: %d\n", multiplo3);
printf("Multiplos de 4: %d", multiplo4);

return 0;
}