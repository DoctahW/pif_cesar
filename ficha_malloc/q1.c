// Criar e preencher matriz dinamicamente
// Escreva um programa que:
// • leia dois inteiros n e m
// • aloque dinamicamente uma matriz n x m
// • preencha a matriz com valores de 1 até n*m
// • imprima os elementos
// • libere a memória alocada
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, m;
    printf("Defina o numero  de linhas: ");
    scanf("%d", &n);
    
    printf("Defina o numero de colunas: ");
    scanf("%d", &m);
    
    //**>**>*
    int **matrix = (int**)malloc(n * sizeof(int*));
    //[i]>*>int
    for (int i = 0; i < n; i++){
        matrix[i] = (int*)malloc(m * sizeof(int));
    }
    
    for (int i=0; i< n; i++){
        for (int j = 0; j < m; j++){
            matrix[i][j] = i * m + j + 1;
        }
    }
    
    for (int i=0; i< n; i++){
        for (int j=0; j < m; j++){
            printf("[%d]", matrix[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);
    matrix = NULL;
}