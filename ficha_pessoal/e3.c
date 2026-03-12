#include <stdio.h>
int main() {
    int i = 2, j = 8;
    int *pi = &i, *pj = &j;

    printf("%d = %p\n", i, pi);
    printf("%d = %p\n", j, pj);

    if(pi > pj){
        printf("Valor do Maior Endereço: %d", *pi);
    }
    else{
        printf("Valor do Maior Endereço: %d", *pj);
    }

    return 0;
}
