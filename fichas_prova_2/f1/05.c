#include <stdio.h>

int extrai_digitos(char *origem, char *destino);

int main(){
    char origem[] = "T3mp:42C #7!";
    char destino[10];

    int count = extrai_digitos(origem, destino);
    printf("Digitos extraidos: %d\n", count);
    printf("Destino: %s\n", destino);

    return 0;
}

int extrai_digitos(char *origem, char *destino){
    int counter = 0;
    while (*origem != '\0') {
        if (*origem >= '0' && *origem <='9'){
            counter++;
            *destino = *origem;
            origem++;
            destino++;
        } else {
            origem++;
        }
    }
    *destino = '\0';
    return counter;
}
