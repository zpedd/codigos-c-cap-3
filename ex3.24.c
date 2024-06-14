#include <stdio.h>
#include <stdlib.h>

int main (void){

int idade;
int menores21 = 0;
int maiores50 = 0;
int pessoaatual = 1;

while ( idade >0 ){
    printf( "Idade da pessoa %02d: ", pessoaatual++);
    scanf( " %d", &idade);

    if(idade >= 0) {
        if(idade <21){
            menores21++;
        }else if(idade > 50){
            maiores50++;
        }
    }

}

printf("Total de pessoas menores de 21 anos: %d\n", menores21);
printf("Total de pessoas com mais de 50 anos: %d", maiores50);


return 0; 
}