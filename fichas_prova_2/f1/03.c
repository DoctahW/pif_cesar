#include <stdio.h>

int comprimento(char *str);

int main(){
    char str[100];
    scanf("%s", str);
    printf("Comprimento da string: %d\n", comprimento(str));
    return 0;
}

int comprimento(char *str){
    int tamanho = 0;

    while (*str != '\0') {
        tamanho++;
        str++;
    }

    return tamanho;
}
