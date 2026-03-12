#include <stdio.h>

int media(int a[], int n);

int main(){
    int a[] = {4,7,3,10};
    int N = 4;

    int contador = media(a, N);
    printf("%d\n", contador);

    return 0;
}

int media(int a[], int n){
    if (n < 2) return 0;
    int contador = 0;
    float soma;

    for (int i = 1; i < n; i++) {
            float media = soma / i;
            if (a[i] > media){
                contador++;
            }
            soma += a[i];
        }
    return contador;
}
