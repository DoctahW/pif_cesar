// 4. Copiar vetor para outro vetor dinâmico
// Escreva um programa que:
// • leia um inteiro n
// • aloque dinamicamente dois vetores de tamanho n
// • leia os valores do primeiro vetor
// • copie os valores para o segundo vetor
// • imprima o segundo vetor
// • libere toda a memória usada
// Restrições:
// • faça a cópia manualmente com laço
// • não use memcpy
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  int *v1, *v2;

  scanf("%d", &n);

  v1 = (int *)malloc(n * sizeof(int));
  v2 = (int *)malloc(n * sizeof(int));

  for (int i = 0; i < n; i++) {
    // Pode usar v1+i tbm
    scanf("%d", &v1[i]);
  }

  for (int i = 0; i < n; i++) {
    printf("%d", v1[i]);
  }

  for (int i = 0; i < n; i++) {
    v2[i] = v1[i];
  }

  printf("Array [1]: ");
  for (int i = 0; i < n; i++) {
    printf("%d", v1[i]);
  }
  free(v1);
  printf("Array [2]: ");
  for (int i = 0; i < n; i++) {
    printf("%d", v2[i]);
  }
  free(v2);
}
