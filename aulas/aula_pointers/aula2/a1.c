//Uma variavel A & B trocar variavel
//

#include <stdio.h>
void troca(int *a, int *b);

int main() {
    int a = 5, b = 10;
    printf("%d\n", a);
    printf("%d\n", b);
    troca(&a, &b);
    printf("%d\n", a);
    printf("%d\n", b);
    return 0;
}

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
