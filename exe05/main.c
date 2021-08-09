#include <stdio.h>
/*
Programa feito para calcular a media de 4 notas e falar caso o aluno seja aprovado ou nao.
Entrada: 4 notas.
Saida: Informa se o aluno foi aprovado caso sua media seja maior ou igual a 6.
*/
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