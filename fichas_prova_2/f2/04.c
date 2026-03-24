#include <stdio.h>

void intercala(float *a, float *b, float *resultado, int n);

int main() {
    int vetorLen = 3;
    int n = vetorLen*2;
    float a[] = {1.0, 3.0, 5.0};
    float b[] = {2.0, 4.0, 6.0};
    float resultado[n];
    intercala(a, b, resultado, n);
    for (int i=0; i<n; i++) {
        printf("%.2f\n", *(resultado+i));
    }
    printf("\n");
    return 0;
}

void intercala(float *a, float *b, float *resultado, int n) {
    for (int i=0; i<n; i+=2) {
        *resultado++ = *a++;
        *resultado++ = *b++;
    }
}
