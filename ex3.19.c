#include <stdio.h>
#include <stdlib.h>

int main (void){

for (int i=0; i < 5; i++){
    for(int j=0; j <= i; j++){
        printf("*");
    }
    printf("\n");
}
for (int i=4; i > 0; i--){
    for( int j=1; j<=i; j++){
        printf("*");
    }
    printf("\n");
}
return 0;
}

