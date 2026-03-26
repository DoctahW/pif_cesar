#include <stdio.h>

void concatenar(char *destino, char *origem);

int main() {
    char str1[100];
    char str2[100];
    printf("Digite a string de destino: ");
    scanf("%s", str1);
    printf("Digite a string de origem: ");
    scanf("%s", str2);
    concatenar(str1, str2);
    printf("Resultado: %s\n", str1);
    return 0;
}

void concatenar(char *destino, char *origem) {
    int i = 0, j = 0;
    while (*(destino + i) != '\0') {
        i++;
    }
    while (*(origem + j) != '\0') {
        *(destino + i) = *(origem + j);
        i++;
        j++;
    }
    destino[i] = '\0';
}
