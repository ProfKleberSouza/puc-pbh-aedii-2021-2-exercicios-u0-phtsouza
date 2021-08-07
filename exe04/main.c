#include <stdio.h>

int main(){
    int n[3];
    int menor, maior;

    for (int i = 0; i < 3; i++) {        
        // printf ("Digite um numero: ");
        scanf ("%d", &n[i]);
    }

    menor = n[2]; // Define o menor valor inicial
    maior = n[0]; // Define o maior valor inicial

    for(int i = 0; i <=2; i++){ // Faz a comparação pra procurar os valores
        if(n[i]<menor){
            menor = n[i];
        }
        if(n[i]>maior){
            maior = n[i];
        }
    }

    printf("\nMENOR = %d", menor);
    printf("\nMAIOR = %d", maior);
}