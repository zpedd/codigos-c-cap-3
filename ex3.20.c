#include <stdio.h>
#include <stdlib.h>

int main (void){


    for(int i = 0; i < 5; i++){
        for(int j=0; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
        printf("\n");

for(int i=5; i >= 1; i--){
    for(int j=1; j <=i; j++){
        printf("*");
    }
    printf("\n");
}
printf("\n");//pula linha

//3 piramide:
for (int i=1; i <= 5; i++){
    for(int j=1; j <= 5-i; j++){ //O segundo loop for é responsável por imprimir os espaços em branco antes dos asteriscos. 
        printf(" ");
    }
    for(int k=1; k<= i; k++){ //O terceiro loop for é responsável por imprimir os asteriscos na linha atual
    printf("*");
    }

printf("\n"); //pula linha
}
printf("\n");

//4 piramide
for(int i = 1; i <= 5; i++){
    for(int j = 1; j < i ; j++){
    printf(" ");
}
for(int k=i; k <= 5; k++){
    printf("*");
    }
    printf("\n");
}

return 0;
}


