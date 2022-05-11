#include <stdio.h>
void main(){
int num1,num2;

printf("Insira dois numeros inteiros\n");
scanf("%d%d",&num1,&num2);

if (num1 == num2) {
printf("Os valores são iguais. \n");
}else if (num1 > num2) {
    printf("O valor %d é maior que %d", num1,num2);
}else {
printf("O valor %d é maior que %d \n ", num2, num1);
}
}