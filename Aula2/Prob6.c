#include <stdio.h>

void main(){
    int num1,num2,num3;

    printf("Insira 3 inteiros: \n");
    scanf("%d%d%d",&num1,&num2,&num3);

    if ((num1 > num2 || num3)) {
    printf("O maior numero é: %d\n", num1);
    }else if ((num2 > num1 || num3)) {
    printf("O maior numero é: %d\n", num2);
    }else {
    printf("O maior numero é: %d\n", num3);
    }
}