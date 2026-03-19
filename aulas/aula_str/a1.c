#include <stdio.h>

char *findChar(char *str, char c);

int main() {

    char str[] = "Joao Euclides";
    char c = 'd';
    char *ptr = findChar(str, c);
    printf("String Original: %s\n", str);
    printf("String Encontrada: %s\n", ptr);
    printf("Endereço da letra '%c': %p", c, ptr);
    *(ptr) = 0;
    printf("\nString Modificada: %s", str);

    return 0;
}

char *findChar(char *str, char c) {
    while (*str != c && *str!='\0'){
        str++;
    }

    if (*str != '\0') {
        return str;
    }else{
        return NULL;
    }

}
