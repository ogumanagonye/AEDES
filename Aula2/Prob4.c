#include <stdio.h>

void main(){
    int idade;

    printf("Para doar sangue é necessário uma idade especifica\nInsira sua idade: \n");
    scanf("%d",&idade);

    if ((idade >=18) && (idade <= 67)) {
    printf("Você tem a idade necessária para doar :) \n");
    } else {
    printf("A idade para doar sangue é entre 18 e 67\n infelizmente você não se encaixa :( \n");
    }
}