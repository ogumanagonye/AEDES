#include <stdio.h>

void main(){
    int num;
    printf("Insira um inteiro para verificação: \n");
    scanf("%d",&num);
    if (num%2==0 ) {
    printf("O valor %d é par. \n", num);
    } else {
    printf("O valor %d é impar. \n", num);
    }
}