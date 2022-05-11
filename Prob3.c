#include <stdio.h>

void main(){
    int dobro;

    printf("Insira um valor e irei multiplicar por dois: \n");
    scanf("%d", &dobro);

    dobro = dobro * 2;

    printf("Aqui está seu valor final: %d \n", dobro);
}