#include <stdio.h>

void separa_transacoes(float *valores, int n, float *positivos, int *qtd_pos,
                       float *negativos, int *qtd_neg);

int main() {
    float valores[] = {120.0, -45.5, 0.0, 300.0, -80.0};
    int n = 5;
    int qtd_pos = 0, qtd_neg = 0;
    float positivos[n], negativos[n];
    separa_transacoes(valores, n, positivos, &qtd_pos, negativos, &qtd_neg);

    printf("Positivos: ");
    for (int i = 0; i < qtd_pos; i++) {
        printf("%.2f ", *(positivos + i));
    }
    printf("\nNegativos: ");
    for (int i = 0; i < qtd_neg; i++) {
        printf("%.2f ", *(negativos + i));
    }
    printf("\n");

}

void separa_transacoes(float *valores, int n, float *positivos, int *qtd_pos,
                       float *negativos, int *qtd_neg) {
    for (int i = 0; i < n; i++) {
        if (*(valores + i) >= 0){
            *(positivos + (*qtd_pos)++) = *(valores + i);
        } else {
            *(negativos + (*qtd_neg)++) = *(valores + i);
        }
    }
}
