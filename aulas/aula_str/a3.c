#include <stdio.h>

void ultimateChecker(char str[], int len, char ch, int *num, int *letter, int *special);

int main() {
    char str[50];
    int num = 0, letter = 0, special = 0;

    char ch = getchar();

    ultimateChecker(str, 50, ch, &num, &letter, &special);

    printf("%s\n", str);
    printf("Numeros: %d, Letras: %d, Caracteres especiais: %d\n", num, letter, special);

    return 0;
}

void ultimateChecker(char str[], int len, char ch, int *num, int *letter, int *special) {
    int i = 0;
    char newStr[50];

    while (ch != '\n' && i < 50) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            newStr[i] = 'i';
        } else if (ch >= '0' && ch <= '9') {
            str[i] = ch;
            (*num)++;
        } else if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') {
            str[i] = ch;
            (*letter)++;
        } else {
            str[i] = ch;
            (*special)++;
        }
        i++;
        ch = getchar();
    }
    str[i] = '\0';
}
