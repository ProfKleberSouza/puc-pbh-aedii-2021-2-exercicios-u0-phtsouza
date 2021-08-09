#include <stdio.h>
/*
Programa feito para classificar triângulos.
Entrada: Tamanho dos 3 lados de um triângulos.
Saída: Informa caso o triangulo seja equilátero, esósceles ou escaleno.
*/
int main(){
    int lado1, lado2, lado3;

    // printf("\nInforme o lado 1: ");
    scanf("%d", &lado1);

    // printf("\nInforme o lado 2: ");
    scanf("%d", &lado2);

    // printf("\nInforme o lado 3: ");
    scanf("%d", &lado3);

    if(lado1 > 0 && lado2 > 0 && lado3 > 0){
        if(lado1 == lado2 && lado3 == lado2){
            printf("TRIANGULO EQUILATERO");
        }
        else if(lado1 == lado2 || lado2 == lado3 || lado3 == lado1){
            printf("TRIANGULO ISOSCELES");
        }
        else if(lado1!=lado2 && lado2!=lado3){
            printf("TRIANGULO ESCALENO");
        }
    }
    else{
        printf("OS LADOS NAO FORMAM UM TRIANGULO");
    }
}