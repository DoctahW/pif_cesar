#include <stdio.h>
#include <stdlib.h>
typedef struct {
  char nome[50];
  float n1;
  float n2;
  float n3;
} Aluno;

int buscar_melhor_aluno(Aluno *v, int n);
float media_aluno(Aluno a);

int main() {
  int size = 3;
  Aluno *alunos;
  alunos = (Aluno *)malloc(size * sizeof(Aluno));
  Aluno a1 = {"Carlos", 6, 3, 8};
  Aluno a2 = {"Ana", 7, 9, 5};
  Aluno a3 = {"Lucas", 4, 8, 6};
  alunos[0] = a1;
  alunos[1] = a2;
  alunos[2] = a3;

  int melhor = buscar_melhor_aluno(alunos, size);
  printf("Melhor aluno da turma: \n");
  printf("Aluno = %s\n", alunos[melhor].nome);
  printf("Nota = %.2f", media_aluno(alunos[melhor]));
}

float media_aluno(Aluno a) {
  float media = (a.n1 + a.n2 + a.n3) / 3;
  return media;
}

int buscar_melhor_aluno(Aluno *v, int n) {
  int big_index;
  int media;
  for (int i = 0; i < n; i++) {
    float tempMedia = media_aluno(v[i]);
    if (tempMedia > media) {
      big_index = i;
    }
  }
  return big_index;
}
