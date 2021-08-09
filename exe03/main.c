#include <stdio.h> 
/*
Progrtama feito para informar se um numero é posito ou negativo e par ou impar.
Entrada: um numero qualquer.
Saida: Informa se o numero é positivo ou negativo e se ele é par ou impar.
*/
int main(){

    int numero;

    // printf("Informe um numero qualquer: ");
    scanf("%d",&numero);

    if (numero>0){ // Caso ele seja maior que 0 sera positivo
        if(numero%2==0){ // Caso o resto de sua divisao por 2 sobre 0, ele é par
            printf("NUMERO PAR POSITIVO");
        }
        else{ // Caso contrario ele é impar.
            printf("NUMERO IMPAR POSITIVO");
        }
    }
    else if(numero<0){ // Caso seja menor que 0 sera negativo
        if(numero%2==0){
            printf("NUMERO PAR NEGATIVO");
        }
        else{
            printf("NUMERO IMPAR NEGATIVO");
        }
    }
    else{
        printf("NUMERO NEUTRO");
    }
}