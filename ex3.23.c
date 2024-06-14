#include <stdio.h>
#include <stdlib.h>

int main (void){

int alunos=10;
float nota;
float soma=0.0;
float media;

printf("Forneca a nota de 10 alunos: \n", alunos);
for(int i=1; i <= alunos; i++){
    printf("Nota %02d:", i);
    scanf("%f", &nota);
    if(nota<0 || nota >10){
        printf("Nota invalida!");
        i--;
    }else{
        soma= soma + nota;
    }
}
media = soma / alunos;
printf("\nA media aritmetica das dez notas e: %.2f", media);


return 0;
}
