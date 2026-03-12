#include <stdio.h>


int main() {
    int i = 0, *pi = &i;
    float r = 0, *pf = &r;
    char c = 't', *pc = &c;

    printf("%d %f %c\n", i, r, c);

    *pi = 2;
    *pf = 3.14;
    *pc = 'a';
    printf("%d %f %c\n", i, r, c);
    return 0;
}
