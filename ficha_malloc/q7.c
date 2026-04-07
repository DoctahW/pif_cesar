// 7. Concatenação de strings com alocação dinâmica
// Escreva um programa que:
// • leia duas strings
// • aloque dinamicamente uma terceira string com tamanho suficiente para
// armazenar a concatenação das duas • copie manualmente os caracteres •
// adicione o terminador '\0' • imprima a string resultante • libere a memória
// Restrições:
// • não usar strcat
// • não usar strcpy
#include <stdio.h>
#include <stdlib.h>

int main() {
  char *v1, *v2, *v3;
  int size1, size2, size3;

  scanf("%d", &size1);
  scanf("%d", &size2);

  size3 = size1 + size2 + 1;

  v1 = (char *)malloc(sizeof(char) * size1);
  v2 = (char *)malloc(sizeof(char) * size2);
  v3 = (char *)malloc(sizeof(char) * size3);

  scanf("%s", v1);
  scanf("%s", v2);

  for (int i = 0; i < size1; i++) {
    v3[i] = v1[i];
  }

  for (int j = 0; j < size2; j++) {
    v3[size1 + j] = v2[j];
  }

  v3[size3 - 1] = '\0';

  printf("%s", v3);
}
