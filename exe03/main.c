#include <stdio.h> 

int main(){

    int numero;

    printf("Informe um numero qualquer: ");
    scanf("%d",&numero);

    if (numero>0){
        if(numero%2==0){
            printf("NUMERO PAR POSITIVO");
        }
        else{
            printf("NUMERO IMPAR POSITIVO");
        }
    }
    else if(numero<0){
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