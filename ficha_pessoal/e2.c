#include <stdio.h>
int main() {
    int i = 2, j = 8;
    int *pi = &i, *pj = &j;

    printf("%p %p\n", pi, pj);
    return 0;
}
