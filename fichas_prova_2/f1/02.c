#include <stdio.h>

char *cifra_cesar(char *str, int deslocamento);

int main(){
    char str[] = "abc";
    int desloc = 3;

    printf("Original = %s\n", str);
    cifra_cesar(str, desloc);
    printf("Criptografado = %s", str);

    return 0;
}

char *cifra_cesar(char *str, int deslocamento){
    while (*str != '\0') {
         *str += deslocamento;
         str++;
    }

    return str;
}
