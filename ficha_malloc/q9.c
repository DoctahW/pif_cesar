// 9. Cópia de Strings Personalizada
// Crie uma função char* clonar_string(char* s) que meça o tamanho da string s,
// aloque exatamente a quantidade de memória necessária (incluindo o caractere
// nulo \0) e copie o conteúdo. O programa principal deve liberar a memória após
// o uso.

#include <stdio.h>
#include <stdlib.h>

char *clonar_string(char *s);

int main() {
  char s[] = "teste";

  char *clone = clonar_string(s);

  printf("%s", clone);
  free(clone);
  return 0;
}

char *clonar_string(char *s) {
  int count = 0;
  char *sCount = s;
  while (*sCount != '\0') {
    count++;
    sCount++;
  }

  char *temp = malloc((count + 1) * sizeof(char));

  for (int i = 0; i < count; i++) {
    temp[i] = s[i];
  }
  temp[count] = '\0';

  return temp;
}
