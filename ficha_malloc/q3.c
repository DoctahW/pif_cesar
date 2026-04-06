// Aumentar o tamanho de um vetor com realloc
// Escreva um programa que:
// • aloque inicialmente um vetor para 5 inteiros
// • leia 5 valores
// • use realloc para aumentar o vetor para 10 posições
// • leia os 5 novos valores
// • imprima todos os 10 elementos
// • libere a memória
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 5, tempN;
    int *v = (int*)malloc(n*sizeof(int));
    
    for (int i =0; i<5; i++){
        scanf("%d", &tempN);
        v[i] = tempN;
    }
    for (int i = 0; i<5; i++) {
        printf("%d", v[i]);
    }
    printf("\n");
    
    n = 10;
    v = realloc(v, n * sizeof(int));
    
    for (int i =5; i<10; i++){
        scanf("%d", &tempN);
        v[i] = tempN;
    }
    
    for (int i = 0; i<10; i++) {
        printf("%d", v[i]);
    }
    printf("\n");
}