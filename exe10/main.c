#include <stdio.h>
/*
Programa feito para mostrar os numeros na ordem inversa pelo qual o usuario enviou
Entrada: 10 valores aleatorios.
Saida: Os valores printados de tras pra frente.
*/
int main() {
   int vet[10];

   for(int i = 0; i<10; i++){
      // printf("Informe um numero: \n");
      scanf("%d", &vet[i]);
   }
   
   for(int j = 9; j>=0; j--){
      printf("%d\n", vet[j]);
   }
}