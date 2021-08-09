#include <stdio.h>

int main(){

    float notas[3];
    float soma=0;
    float media;

    for(int i=0; i<4; i++){
        // printf("Informe sua nota: ");
        scanf("%f",&notas[i]);
        soma += notas[i];
    }

    media = soma/4;

    if(media>=6){
        printf("NOTA = %.1f (APROVADO)\n",media);
    }
    else{
        printf("NOTA = %.1f (REPROVADO)", media);
    }
}