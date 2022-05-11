#include <stdio.h>

void main(){

    int num1,num2;
    printf("Insira dois numeros inteiros: \n");
    scanf("%d%d",&num1,&num2);

    if (num1 == num2) {
    printf("Os valores são iguais. \n");
    } else if (num1 > num2) {
    printf("O numero %d é menor que %d\n", num1,num2);
    }else {
    printf("O numero %d é maior que %d\n", num2,num1);
    }
}