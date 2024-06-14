#include <stdio.h>
#include <stdlib.h>

int main (void){
    int n1;
    int n2;
    int n3;
    int n4;
    int n5;
    int maior;

    printf("N1: ");
    scanf("%d", &n1);
    maior = n1; 

    printf("N2: ");
    scanf("%d", &n2);
    if(maior < n2){
        maior = n2;
    }
    printf("N3: ");
    scanf("%d", &n3);   
    if(maior < n3){
        maior = n3;
    }
    printf("N4: ");
    scanf("%d", &n4);   
    if(maior < n4){
        maior = n4;
    }
    printf("N5: \n");
    scanf("%d", &n5);   
    if(maior < n5){
        maior = n5;
    }   

if(n1 >= 0 && n2 >= 0 && n3 >= 0 && n4 >= 0 && n5 >= 0){

   for ( int i = maior; i >= 1; i--){
        printf("%04d  ", i);
        if (i <= n1){
            printf("*");
        } else{
            printf(" ");
        }
        if (i <= n2){
            printf("*");
        } else{
            printf(" ");
        }
        if (i <= n3){
            printf("*");
        } else{
            printf(" ");
        }
        if (i <= n4){
            printf("*");
        } else{
            printf(" ");
        }
        if (i <= n5){
            printf("*");
        } else{
            printf(" ");
        }
        printf("\n");
        } 
    }else{
        printf("Forneca apenas numeros positivos.");
}
    return 0;
}