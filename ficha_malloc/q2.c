// 2. Ler matriz e encontrar o maior elemento
// Escreva um programa que:
// • leia n e m
// • aloque dinamicamente uma matriz n x m
// • leia os valores do usuário
// • determine e imprima o maior valor da matriz
// • libere a memória corretamente
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, m;
    
    scanf("%d", &n);
    scanf("%d", &m);
    
    int **matriz = (int **)malloc(n*sizeof(int*));
    
    for (int i = 0; i<n; i++) {
        matriz[i] = (int*)malloc(m*sizeof(int));
        for (int j = 0;j<m; j++) {
            int cValue=0;
            scanf("%d", &cValue);
            matriz[i][j] = cValue;
        }
    }
    
    int big = matriz[0][0];
    
    for (int i = 0; i<n; i++) {
        for(int j = 0; j<m; j++){
            if (matriz[i][j] > big)
                big = matriz[i][j];
        }
    }
    
    printf("%d", big);
    for (int i = 0; i<n; i++) {
        free(matriz[i]);
    }
    free(matriz);
}