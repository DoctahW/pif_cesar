#include <stdio.h>

void paraMaiusculas(char *str);

int main(){
    char str[] = "Ponteiros e Strings 2024!";

    printf("%s\n", str);
    paraMaiusculas(str);
    printf("%s", str);

    return 0;
}
void paraMaiusculas(char *str){
    while (*str != '\0') {
        if (*str >= 'a' && *str <='z'){
            *str -= 32;
        }
        str++;
    }
}
