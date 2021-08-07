#include <stdio.h>

int main(){
    int n[3];
    int menor, maior;

    for (int i = 0; i < 3; i++) {        
        // printf ("Digite um numero: ");
        scanf ("%d", &n[i]);
    }

    menor = n[2];
    maior = n[0];

    for(int i = 0; i <=2; i++){
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