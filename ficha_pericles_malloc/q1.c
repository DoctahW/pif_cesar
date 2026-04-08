#include <stdio.h>
#include <stdlib.h>

int **criar_matriz_invertida(int **m, int l, int c);

int main() {
  int c, l;

  scanf("%d", &c);
  scanf("%d", &l);

  int **matriz = (int **)malloc(sizeof(int *) * c);
  for (int i = 0; i < c; i++) {
    matriz[i] = (int *)malloc(sizeof(int) * l);
  }

  for (int i = 0; i < c; i++) {
    for (int j = 0; j < l; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }

  for (int i = 0; i < c; i++) {
    for (int j = 0; j < l; j++) {
      printf("%d", matriz[i][j]);
    }
    printf("\n");
  }

  criar_matriz_invertida(matriz, l, c);
  for (int i = 0; i < c; i++) {
    free(matriz[i]);
  }
  free(matriz);
  return 0;
}

int **criar_matriz_invertida(int **m, int l, int c) {

  int **matriz2 = (int **)malloc(sizeof(int *) * c);
  for (int i = 0; i < c; i++) {
    matriz2[i] = (int *)malloc(sizeof(int) * l);
  }

  for (int i = c - 1; i >= 0; i--) {
    for (int j = l - 1; j >= 0; j--) {
      matriz2[c - i - 1][l - j - 1] = m[i][j];
    }
  }

  for (int i = 0; i < c; i++) {
    for (int j = 0; j < l; j++) {
      printf("%d", matriz2[i][j]);
    }
    printf("\n");
  }

  return matriz2;
}
