#include <stdio.h>

void main(){

    int num;
    printf("Insira um numero inteiro: \n");
    scanf("%d",&num);

    if( num >= 0){
        printf("O numero %d é positivo. \n", num);
    } else {
        printf("O numero %d é negativo. \n", num);
    }
}