// "Crie um programa em C que pergunte quantos alunos há na turma e quantas
// notas cada aluno possui. Aloque dinamicamente um vetor de ponteiros (float
// **), onde cada posição aponta para um vetor de float com as notas daquele
// aluno. Leia todas as notas, calcule a média individual de cada aluno e a
// média geral da turma. No final, libere toda a memória alocada."

#include <stdio.h>
#include <stdlib.h>

int main() {
  int alunos_num, notas_num;
  float media_geral = 0, *medias_alunos;
  printf("Digite o número de alunos: ");
  scanf("%d", &alunos_num);
  printf("Digite o número de notas por aluno: ");
  scanf("%d", &notas_num);
  printf("\n\n");

  float **alunos = (float **)malloc(alunos_num * sizeof(float *));
  for (int i = 0; i < alunos_num; i++) {
    alunos[i] = (float *)malloc(notas_num * sizeof(float));
  }

  for (int i = 0; i < alunos_num; i++) {
    for (int j = 0; j < notas_num; j++) {
      float nota;
      scanf("%f", &nota);
      alunos[i][j] = nota;
    }
  }

  medias_alunos = (float *)malloc(alunos_num * sizeof(float));

  for (int i = 0; i < alunos_num; i++) {
    float aluno_sum = 0;
    for (int j = 0; j < notas_num; j++) {
      aluno_sum += alunos[i][j];
    }
    medias_alunos[i] = (aluno_sum / notas_num);
  }

  for (int i = 0; i < alunos_num; i++) {
    free(alunos[i]);
  }
  free(alunos);

  for (int i = 0; i < alunos_num; i++) {
    printf("Media do Aluno %d: ", i + 1);
    printf("%.2f", medias_alunos[i]);
    printf("\n");
    media_geral += medias_alunos[i];
  }

  free(medias_alunos);

  media_geral /= alunos_num;

  printf("\n");
  printf("Media Geral da Turma: ");
  printf("%.2f", media_geral);
}
