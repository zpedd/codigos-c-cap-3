
#include <stdio.h>
#include <stdlib.h>

int main (void){

int n1=1;
int n2=1;
int temp;

for(int i =0; i<20; i++){
    printf("%d ", n1);

    temp = n2;
    n2 = n2 + n1;
    n1 = temp;             //ou da pra fazer assim: b = a + b; pula linha ; a= b - a;
}
 
return 0;
}
