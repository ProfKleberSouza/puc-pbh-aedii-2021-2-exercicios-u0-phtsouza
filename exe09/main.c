// // #include <stdio.h>
// // #include <string.h>

// // struct aluno {
// //    float nota;
// //    char nome[50];
// // };

// // void ordemAlfabetica(struct aluno Sala[], int N){
// //    if(strcmp(Sala[N-3].nome, Sala[N-2].nome) > 0 && strcmp(Sala[N-1].nome, Sala[N-2].nome)> 0){
// //       printf("%s %.1f\n", Sala[N - 2].nome, Sala[N - 2].nota);
// //       if(strcmp(Sala[N - 3].nome, Sala[N - 1].nome)>0){
// //          printf("%s %.1f\n", Sala[N - 1].nome, Sala[N - 1].nota);
// //          printf("%s %.1f", Sala[N - 3].nome, Sala[N - 3].nota);
// //       }
// //       else{
// //          printf("%s %.1f\n", Sala[N - 3].nome, Sala[N - 3].nota);
// //          printf("%s %.1f", Sala[N - 1].nome, Sala[N - 1].nota);
// //       }
// //    }
// //    else if(strcmp(Sala[N-3].nome, Sala[N-1].nome) > 0 && strcmp(Sala[N-2].nome, Sala[N-1].nome)> 0){
// //       printf("%s %.1f\n", Sala[N - 1].nome, Sala[N - 1].nota);
// //       if(strcmp(Sala[N - 3].nome, Sala[N - 2].nome)>0){
// //          printf("%s %.1f\n", Sala[N - 2].nome, Sala[N - 2].nota);
// //          printf("%s %.1f", Sala[N - 3].nome, Sala[N - 3].nota);
// //       }
// //       else{
// //          printf("%s %.1f\n", Sala[N - 3].nome, Sala[N - 3].nota);
// //          printf("%s %.1f", Sala[N - 2].nome, Sala[N - 2].nota);
// //       }
// //    }
// //    else{
// //       printf("%s %.1f\n", Sala[N - 3].nome, Sala[N - 3].nota);
// //       if(strcmp(Sala[N - 1].nome, Sala[N - 2].nome)>0){
// //          printf("%s %.1f\n", Sala[N - 2].nome, Sala[N - 2].nota);
// //          printf("%s %.1f", Sala[N - 1].nome, Sala[N - 1].nota);
// //       }
// //       else{
// //          printf("%s %.1f\n", Sala[N - 1].nome, Sala[N - 1].nota);
// //          printf("%s %.1f", Sala[N - 2].nome, Sala[N - 2].nota);
// //       }
// //    }
// // }

// // int main() {
// //    int qntdAlunos, notaTotal = 0, aux;
// //    char aux2[50];
// //    float mediaNotas;

// //    //printf("Quantos alunos deseja registrar?");
// //    scanf("%d",&qntdAlunos);
   
// //    struct aluno Aluno[qntdAlunos];

// //    for(int i=0; i<qntdAlunos; i++){
// //       //printf("Informe o nome do aluno: ");
// //       scanf("%s %f", &Aluno[i].nome, &Aluno[i].nota);
// //       fflush(stdin);
// //       notaTotal += Aluno[i].nota;
// //    }

// //    for(int j=0; j<qntdAlunos; j++){
// //       for(int x = j; x <qntdAlunos; x++){
// //          if(Aluno[j].nota > Aluno[x].nota){
// //             aux = Aluno[j].nota;
// //             Aluno[j].nota = Aluno[x].nota;
// //             Aluno[x].nota = aux;

// //             strcpy(aux2, Aluno[j].nome);
// //             strcpy(Aluno[j].nome, Aluno[x].nome);
// //             strcpy(Aluno[x].nome, aux2);
// //          }
// //       }
// //    }

// //    mediaNotas = notaTotal/(qntdAlunos*1.0);

// //    printf("NOTA MEDIA = %.1f\n", mediaNotas);
// //    ordemAlfabetica(Aluno, qntdAlunos);

// // }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Alunos {
   char nome[50];
   float nota;
};

/* Descricao: procedimento que preenche o vetor de alunos e calcula a media das notas
Entradas: o vetor de struct alunos, o numero inteiro de posicoes do vetor e o endereco da variavel que armazenara a media das notas 
Saidas: o vetor preenchido e a media retornada por referencia */
void preencheVetor(struct Alunos alunos[], int N, float * media) {
   float aux = 0;
   for(int i = 0; i < N; i++) {
      scanf("%s %f", &alunos[i].nome, &alunos[i].nota);
      aux += alunos[i].nota;
   }
   * media = aux / N;
}

/* Descricao: procedimento que preenche o vetor maiores com os 3 alunos que tiveram a maior nota
Entradas: vetor de struct alunos já preenchido, vetor de struct de maiores notas vazio, e a quantidade de alunos
Saida: vetor de maiores preenchido com os 3 alunos que tiveram as maiores notas */
void melhoresAlunos(struct Alunos alunos[], struct Alunos maiores[], int N) {
   int i, j, menorIndex = 0;
   for(i = 0; i < 3; i++) { // inicializa o vetor com as primeiras notas do vetor de alunos
      maiores[i].nota = alunos[i].nota;
      strcpy(maiores[i].nome, alunos[i].nome);
   }
   for(i = 3; i < N; i++) {
      for(j = 0; j < 3; j++) 
         if(maiores[menorIndex].nota > maiores[j].nota)
            menorIndex = j;
      if(alunos[i].nota > maiores[menorIndex].nota) {
         strcpy(maiores[menorIndex].nome, alunos[i].nome);
         maiores[menorIndex].nota = alunos[i].nota;
      }   
   }
}

/* Descricao: procedimento que printa os 3 melhores alunos em ordem alfabetica
Entradas: vetor de struct de maiores notas preenchido
Saida: nome e nota dos 3 melhores alunos em ordem alfabetica */
void ordemAlfabetica(struct Alunos maiores[]) {
   if(strcmp(maiores[0].nome, maiores[1].nome) < 0 && strcmp(maiores[0].nome, maiores[2].nome) < 0) {
      printf("%s %.1f\n", maiores[0].nome, maiores[0].nota);
      if(strcmp(maiores[1].nome, maiores[2].nome) < 0) {
         printf("%s %.1f\n", maiores[1].nome, maiores[1].nota);
         printf("%s %.1f\n", maiores[2].nome, maiores[2].nota);
      }
      else {
         printf("%s %.1f\n", maiores[2].nome, maiores[2].nota);
         printf("%s %.1f\n", maiores[1].nome, maiores[1].nota);
      }
   }
   else if(strcmp(maiores[1].nome, maiores[0].nome) < 0 && strcmp(maiores[1].nome, maiores[2].nome) < 0) {
      printf("%s %.1f\n", maiores[1].nome, maiores[1].nota);
      if(strcmp(maiores[0].nome, maiores[2].nome) < 0) {
         printf("%s %.1f\n", maiores[0].nome, maiores[0].nota);
         printf("%s %.1f\n", maiores[2].nome, maiores[2].nota);
      }
      else {
         printf("%s %.1f\n", maiores[2].nome, maiores[2].nota);
         printf("%s %.1f\n", maiores[0].nome, maiores[0].nota);
      }
   }
   else {
      printf("%s %.1f\n", maiores[2].nome, maiores[2].nota);
      if(strcmp(maiores[0].nome, maiores[1].nome) < 0) {
         printf("%s %.1f\n", maiores[0].nome, maiores[0].nota);
         printf("%s %.1f\n", maiores[1].nome, maiores[1].nota);
      }
      else {
         printf("%s %.1f\n", maiores[1].nome, maiores[1].nota);
         printf("%s %.1f\n", maiores[0].nome, maiores[0].nota);
      }
   }


}

int main() {
   // ENTRADAS: o numero de alunos, o nome dos alunos e a nota deles
   int N;
   float media;
   scanf("%i", &N);
   struct Alunos vetAlunos[N], maiores[3]; // cria um vetor de alunos de N posicoes e um vetor para guardar os 3 melhores alunos

   // PROCESSAMENTO
   preencheVetor(vetAlunos, N, &media); // o vetor eh preenchido
   melhoresAlunos(vetAlunos, maiores, N); // filtra os 3 maiores notas
   printf("NOTA MEDIA = %.1f\n", media); // SAIDA
   ordemAlfabetica(maiores); // printa na tela em ordem alfabetica
   return 0;
}