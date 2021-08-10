#include <stdio.h>
#include <string.h>

struct aluno {
   float nota;
   char nome[50];
};

void ordemAlfabetica(struct aluno Sala[], int N){
   if(strcmp(Sala[N-3].nome, Sala[N-2].nome) > 0 && strcmp(Sala[N-1].nome, Sala[N-2].nome)> 0){
      printf("%s %.1f\n", Sala[N - 2].nome, Sala[N - 2].nota);
      if(strcmp(Sala[N - 3].nome, Sala[N - 1].nome)>0){
         printf("%s %.1f\n", Sala[N - 1].nome, Sala[N - 1].nota);
         printf("%s %.1f", Sala[N - 3].nome, Sala[N - 3].nota);
      }
      else{
         printf("%s %.1f\n", Sala[N - 3].nome, Sala[N - 3].nota);
         printf("%s %.1f", Sala[N - 1].nome, Sala[N - 1].nota);
      }
   }
   else if(strcmp(Sala[N-3].nome, Sala[N-1].nome) > 0 && strcmp(Sala[N-2].nome, Sala[N-1].nome)> 0){
      printf("%s %.1f\n", Sala[N - 1].nome, Sala[N - 1].nota);
      if(strcmp(Sala[N - 3].nome, Sala[N - 2].nome)>0){
         printf("%s %.1f\n", Sala[N - 2].nome, Sala[N - 2].nota);
         printf("%s %.1f", Sala[N - 3].nome, Sala[N - 3].nota);
      }
      else{
         printf("%s %.1f\n", Sala[N - 3].nome, Sala[N - 3].nota);
         printf("%s %.1f", Sala[N - 2].nome, Sala[N - 2].nota);
      }
   }
   else{
      printf("%s %.1f\n", Sala[N - 3].nome, Sala[N - 3].nota);
      if(strcmp(Sala[N - 1].nome, Sala[N - 2].nome)>0){
         printf("%s %.1f\n", Sala[N - 2].nome, Sala[N - 2].nota);
         printf("%s %.1f", Sala[N - 1].nome, Sala[N - 1].nota);
      }
      else{
         printf("%s %.1f\n", Sala[N - 1].nome, Sala[N - 1].nota);
         printf("%s %.1f", Sala[N - 2].nome, Sala[N - 2].nota);
      }
   }
}

int main() {
   int qntdAlunos, notaTotal = 0, aux;
   char aux2[50];
   float mediaNotas;

   //printf("Quantos alunos deseja registrar?");
   scanf("%d",&qntdAlunos);
   
   struct aluno Aluno[qntdAlunos];

   for(int i=0; i<qntdAlunos; i++){
      //printf("Informe o nome do aluno: ");
      scanf("%s %f", &Aluno[i].nome, &Aluno[i].nota);
      fflush(stdin);
      notaTotal += Aluno[i].nota;
   }

   for(int j=0; j<qntdAlunos; j++){
      for(int x = j; x <qntdAlunos; x++){
         if(Aluno[j].nota > Aluno[x].nota){
            aux = Aluno[j].nota;
            Aluno[j].nota = Aluno[x].nota;
            Aluno[x].nota = aux;

            strcpy(aux2, Aluno[j].nome);
            strcpy(Aluno[j].nome, Aluno[x].nome);
            strcpy(Aluno[x].nome, aux2);
         }
      }
   }

   mediaNotas = notaTotal/(qntdAlunos*1.0);

   printf("NOTA MEDIA = %.1f\n", mediaNotas);
   ordemAlfabetica(Aluno, qntdAlunos);

}
