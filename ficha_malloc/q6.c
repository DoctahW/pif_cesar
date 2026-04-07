// 6. Inserir elemento em posição específica
// Escreva um programa que:

// • leia um inteiro n
// • aloque dinamicamente um vetor de n inteiros
// • leia os elementos
// • leia um valor x e uma posição p
// • aumente o vetor em 1 posição usando realloc
// • insira x na posição p, deslocando os elementos à direita
// • imprima o vetor final
// • libere a memória
// Considere posições válidas de 0 até n.
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, x, p;
  int *vint;

  scanf("%d", &n);
  vint = (int *)malloc(n * sizeof(int));

  for (int i = 0; i < n; i++) {
    scanf("%d", vint + i);
  }

  scanf("%d", &x);
  scanf("%d", &p);

  n += 1;

  vint = realloc(vint, n * sizeof(int));

  for (int i = n - 1; 0 > p; i--) {
    vint[i] = vint[i - 1];
  }

  vint[p] = x;

  for (int i = 0; i < n; i++) {
    printf("%d", vint[i]);
  }
}
