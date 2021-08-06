#include <stdio.h> 

/*
Programa para realizar a soma de dois números
*/
int main(){
    int num1, num2;
    int soma = 0;

    scanf("%d", &num1);
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("SOMA = %d", soma);
}