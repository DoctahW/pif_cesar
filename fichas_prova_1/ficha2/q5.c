//Implemente uma função que receba duas matrizes A e B de ordem N x N e retorne 1 se /
// B for a transposta de A e 0 caso contrário. Implemente também a main() para testar.
#include <stdio.h>

int checkTranspose(int n,int x[][n],int y[][n]);

int main(){
    int n = 3;

    int matriz[3][3] = {
            {1,  2,  3},
            {5,  6,  7},
            {9, 10, 11}
        };

    int transposta[3][3] = {
        {1, 5,  9},
        {2, 6, 10},
        {3, 7, 11},
    };

    printf("%d", checkTranspose(n, matriz, transposta));

    return 0;
}

int checkTranspose(int n,int x[][n],int y[][n]){

    for (int i=0;i<n;i++){
        for (int j=0; j<n;j++){
            if (x[i][j] == y[j][i]){
                return 1;
            }
        }
    }
    return 0;
}
