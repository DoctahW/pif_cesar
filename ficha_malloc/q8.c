// 8. Vetor Redimensionável
// Escreva uma função que receba um ponteiro para um vetor de inteiros alocado
// dinamicamente e seu tamanho atual. A função deve ler novos números do usuário
// até que ele digite 0. Se o vetor ficar cheio, use realloc para dobrar o
// tamanho dele. Não esqueça de tratar o caso de falha no realloc.

#include <stdio.h>
#include <stdlib.h>

int main() {
  int tamanho = 5;
  int counter = 0;
  int *vetor = (int *)malloc(tamanho * sizeof(int));

  while (1) {
    int user;
    scanf("%d", &user);
    
    if (user == 0) break;
    
    if (counter >= tamanho) {
      tamanho *= 2;
      vetor = (int *)realloc(vetor, tamanho * sizeof(int));
      if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
      }
    }
    vetor[counter] = user;
    counter++;
  }
  for (int i = 0; i < counter; i++) {
    printf("%d ", vetor[i]);
  }
  printf("\n");
  free(vetor);
  return 0;
}
