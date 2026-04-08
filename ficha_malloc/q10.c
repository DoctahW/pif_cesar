#include <stdio.h>
#include <stdlib.h>

int main() {
  float *alunos, media = 0;
  printf("Digite o número de alunos: ");
  int alunos_num;
  scanf("%d", &alunos_num);
  alunos = (float *)malloc(alunos_num * sizeof(float));
  for (int i = 0; i < alunos_num; i++) {
    printf("Digite a nota do aluno %d: ", i + 1);
    scanf("%f", &alunos[i]);
  }

  for (int i = 0; i < alunos_num; i++) {
    media += alunos[i];
  }

  media /= alunos_num;
  printf("A média das notas é: %.2f\n", media);

  free(alunos);
  return 0;
}
