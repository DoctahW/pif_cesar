#include <stdio.h>

void conta_caracteres(char *str, int *vogais, int *consoantes);

int main(){

    char str[] = "Definitivamente";
    int vogais = 0;
    int consoantes = 0;

    conta_caracteres(str, &vogais, &consoantes);

    printf("Vogais: %d\n", vogais);
    printf("Consoantes: %d\n", consoantes);
        return 0;
}

void conta_caracteres(char *str, int *vogais, int *consoantes) {
    while (*str != '\0') {
        if (*str >= 'a' && *str <= 'z') {
            if (*str == 'a' || *str == 'e' || *str == 'i' ||
                *str == 'o' || *str == 'u') {
                (*vogais)++;
            } else {
                (*consoantes)++;
            }
        }
        str++;
    }
}
