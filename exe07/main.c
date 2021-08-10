
// #include <stdio.h>
// /*
// Programa feito para informar o maior e o menor informado pelo usuario.
// Entrada: Quantidade de numeros que deseja informar + os numeros.
// Saida: O maior e o menor número dentre os informados.
// */
// int main(){

//     int i;
//     int menor, maior;
//     // printf("Informe quantos numeros deseja passar: ");
//     scanf("%d",&i); // Armazena o tamanho do vetor.
//     int vet[i];

//     for(int j=0; j<i;j++){
//         // printf("Informe um numero: ");
//         scanf("%d",&vet[j]);
//     }

//     menor = vet[i];
//     maior = vet[0];

//     for(int j = 0; j < i; j++){
//         if(vet[j]<menor){
//             menor = vet[j];
//         }
//         if(vet[j]>=maior){
//             maior = vet[j];
//         }
//     }
//     printf("MENOR = %d\n", menor);
//     printf("MAIOR = %d\n", maior);
// }

#include <stdio.h>

int main() {
   // ENTRADAS: um numero inteiro N 
   int N;
   scanf("%i", &N);
   int aux; 
   scanf("%i", &aux); 
   int maior = aux, menor = aux;
   for(int i = 0; i < N - 1; i++) {
      scanf("%i", &aux);
      aux > maior ? maior = aux : maior; // PROCESSAMENTO
      aux < menor ? menor = aux : menor; // PROCESSAMENTO
   }

   // SAIDA
   printf("MENOR = %i\nMAIOR = %i", menor, maior);
   return 0;
}