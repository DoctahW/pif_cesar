#include <stdio.h>

int main(){
   int mtx[3][3];

   for (int i=0;i<3;i++){
       for (int j=0;j<3;j++){
           scanf("%d", &mtx[i][j]);
       }
   }

   for (int i=0;i<3;i++){
       for (int j=0;j<3;j++){
           //printf("m[%d][%d] = [%d]", i, j, mtx[i][j]);
           printf("%d ", mtx[i][j]);
       }
       printf("\n");
   }

    return 0;
}

// i+j = len(matriz) - 1 = diagonal inversa
// i == j = diagonal regular
// matrizes transpostas = inversão linha e coluna = t[j][i]
