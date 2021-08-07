#include <stdio.h> 

/*
Programa para realizar a soma de dois números
*/
int main(){
    int num1, num2;
    int soma = 0;

    // printf("Informe um numero");
    scanf("%d", &num1);
    // printf("Informe outro numero");
    scanf("%d", &num2);

    soma = num1 + num2; // Realiza a soma dos numeros

    printf("SOMA = %d", soma);
}