// Remover um elemento de um vetor
// Escreva um programa que:
// • leia um inteiro n
// • aloque dinamicamente um vetor de n inteiros
// • leia os valores do vetor
// • leia um valor x a ser removido
// • remova a primeira ocorrência de x
// • reduza o vetor com realloc
// • imprima o vetor resultante
// Observação:
// • caso x não exista, o vetor deve permanecer inalterado
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, x;
  int *vint;

  scanf("%d", &n);

  vint = (int *)malloc(n * sizeof(int));

  for (int i = 0; i < n; i++) {
    scanf("%d", &vint[i]);
  }

  scanf("%d", &x);

  for (int i = 0; i < n; i++) {
    if (vint[i] == x) {
      vint[i] = vint[i + 1];
      for (int j = i; j < n - 1; j++) {
        vint[j] = vint[j + 1];
      }
      n -= 1;
      break;
    }
  }

  vint = realloc(vint, n * sizeof(int));

  for (int i = 0; i < n; i++) {
    printf("%d", vint[i]);
  }
}
