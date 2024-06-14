#include <stdio.h>
#include <stdlib.h>

int main (void){

int n1;
int n2;

printf("forneca um numero inteiro: ");
scanf("%d", &n1);
printf("forneca outro numero inteiro: ");
scanf("%d", &n2);

if(n1 <=n2){
    for(int i = n1; i <= n2; i++){
        printf("%d ", i);
    }
}else{
    for(int i = n1; i >= n2; i--){
        printf("%d ", i);
    }
}


return 0;
}