#include <stdio.h>
#define MAX 1000

/*
Programa feito para o usuario informar uma sequencia de numeros e após isso informa se o número é positivo
ou nagativo.
Entrada: Números quaisquer e 0 para indicar quando você deseja encerrar.
Saida: Positivo ou negativo de acordo com a ordem que o usuario informou.
*/
int main(){

    int n[MAX];

    for(int i=0; i<MAX; i++){
        // printf("Informe um numero: ");
        scanf("%d", &n[i]);
        if(n[i]==0){
            break;
        }
    }

    for(int i=0; i<1000; i++){
        if(n[i]>0){
            printf("\nPOSITIVO");
        }
        else if(n[i]<0){
            printf("\nNEGATIVO");
        }
        else if(n[i]==0){
            break;
        }
    }
}