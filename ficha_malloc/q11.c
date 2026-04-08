// 11. Inversão de Vetor
// Peça ao usuário um valor N. Aloque dinamicamente um vetor de inteiros de
// tamanho N. Preencha o vetor com dados do usuário e, em seguida, crie um
// segundo vetor dinâmico para armazenar os elementos do primeiro vetor em ordem
// inversa. Imprima o segundo vetor e libere ambos.

#include <stdio.h>
#include <stdlib.h>
int main() {
  int N;
  scanf("%d", &N);
  int *vetor = (int *)malloc(N * sizeof(int));

  for (int i = 0; i < N; i++) {
    scanf("%d", &vetor[i]);
  }

  int *vetor_i = (int *)malloc(N * sizeof(int));

  for (int i = N - 1; 0 <= i; i--) {
    vetor_i[N - 1 - i] = vetor[i];
  }

  printf("Vetor invertido: ");
  for (int i = 0; i < N; i++) {
    printf("%d ", vetor_i[i]);
  }
  printf("\n");
  free(vetor);
  free(vetor_i);

  return 0;
}
