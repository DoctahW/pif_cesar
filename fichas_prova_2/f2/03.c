#include <stdio.h>

int substitui_fora_do_intervalo(float *pesos, int n, float minimo, float maximo, float substituto);

int main() {
    float pesos[] = {1.2, 0.5, 3.8, 2.1, 4.5};
    float minimo = 1.0, maximo = 3.0, substituto = -1.0;
    printf("Pesos:");
    for (int i=0; i<5; i++) {
        printf("%.2f ", *(pesos+i));
    }
    printf("\n");
    int pesosfora = substitui_fora_do_intervalo(pesos, 5, minimo, maximo, substituto);
    printf("Pesos fora do intervalo: %d\n", pesosfora);
    printf("Pesos Retrabalho: ");
    for (int i=0; i<5; i++) {
        printf("%.2f ", *(pesos+i));
    }
    printf("\n");
}

int substitui_fora_do_intervalo(float *pesos, int n, float minimo, float maximo, float substituto) {
    int pesosfora = 0;

    for (int i=0; i<n; i++){
        if (*(pesos+i)<minimo || *(pesos+i)>maximo) {
            *(pesos+i) = substituto;
            pesosfora++;
        }
    }
    return pesosfora;
}
