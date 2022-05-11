#include <stdio.h>

void main(){
    int mes;
    printf("Insira um numero de 1 a 12 e verifiue o mês:\n");
    scanf("%d",&mes);

    switch (mes)
{
   case 1:
     printf("Janeiro\n");
   break;

   case 2:
     printf("Fevereiro\n");
   break;

   default:
     printf("Mes inexistente\n");
}
}