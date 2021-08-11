#include <stdio.h>
/*
Programa feito para calcular a media de 4 notas e falar caso o aluno seja aprovado ou nao.
Entrada: 4 notas.
Saida: Informa se o aluno foi aprovado caso sua media seja maior ou igual a 6.
*/
int main(){

    int n1, n2, n3, n4;
    float soma=0;
    float media;

    // printf("Informe sua nota: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    soma = n1 + n2 + n3 + n4;
    media = soma/4.0;

    if(media>=6){
        printf("NOTA = %.1f (APROVADO)",media);
    }
    else{
        printf("NOTA = %.1f (REPROVADO)", media);
    }
}