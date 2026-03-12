#include <stdio.h>

void printVetor(int *n, int *v){
    printf("VETOR: ");
    for(int i = 0; i < *n; i++){
        printf("[%d]", v[i]);
    }
    printf("\n");
}

int main(){
    int v[4] = {1,2,3,4};

    int n = 4;
    printVetor(&n, v);
    return 0;
}
