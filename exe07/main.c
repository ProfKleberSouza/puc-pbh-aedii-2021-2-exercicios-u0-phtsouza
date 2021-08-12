#include <stdio.h>
/*
Programa feito para informar o maior e o menor informado pelo usuario.
Entrada: Quantidade de numeros que deseja informar + os numeros.
Saida: O maior e o menor número dentre os informados.
*/
int main(){

    int i;
    int menor, maior, aux;
    // printf("Informe quantos numeros deseja passar: ");
    scanf("%d",&i); // Armazena o tamanho do vetor.
    scanf("%d",&aux); 
    maior = aux;
    menor = aux;

    for(int j = 0; j<i-1; j++){
        scanf("%d",&aux); 
        if(aux < menor){
            menor = aux;
        }
        if(aux > maior){
            maior = aux;
        }
    }

    printf("MENOR = %d\n", menor);
    printf("MAIOR = %d", maior);
}
