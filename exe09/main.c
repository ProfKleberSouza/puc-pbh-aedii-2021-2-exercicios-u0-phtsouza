#include <stdio.h>
#include <string.h>

struct aluno {
   float nota;
   char nome[50];
};

void ordemAlfabetica(struct aluno Sala[]){
   
}

int main() {
   int qntdAlunos, notaTotal = 0, aux;
   char aux2[50];
   float mediaNotas;

   printf("Quantos alunos deseja registrar?");
   scanf("%d",&qntdAlunos);
   
   struct aluno Aluno[qntdAlunos];

   for(int i=0; i<qntdAlunos; i++){
      printf("Informe o nome do aluno: ");
      scanf("%s", &Aluno[i].nome);
      fflush(stdin);
      printf("Informe a nota do aluno: ");
      scanf("%f", &Aluno[i].nota);
      notaTotal += Aluno[i].nota;
   }

   for(int j=0; j<qntdAlunos; j++){
      for(int x = j; x <qntdAlunos; x++){
         if(Aluno[j].nota > Aluno[x].nota){
            aux = Aluno[j].nota;
            Aluno[j].nota = Aluno[x].nota;
            Aluno[x].nota = aux;

            strcpy(aux2, Aluno[j].nome);
            strcpy(Aluno[x].nome, Aluno[j].nome);
            strcpy(aux2, Aluno[x].nome);
         }
      }
   }

   for(int y=0; y<qntdAlunos; y++){
      printf("%s : %f\n", Aluno[y].nome, Aluno[y].nota);
   }

   mediaNotas = notaTotal/qntdAlunos;

   printf("NOTA MEDIA = %.2f", mediaNotas);

}