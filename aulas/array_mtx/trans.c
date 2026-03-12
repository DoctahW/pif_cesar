#include <stdio.h>

int main(){
   int mtx[3][3];
   int t[3][3];

   for (int i=0;i<3;i++){
       for (int j=0;j<3;j++){
           scanf("%d", &mtx[i][j]);
           t[j][i] = mtx[i][j];
       }
   }

   for (int i=0;i<3;i++){
       for (int j=0;j<3;j++){
           printf("%d ", mtx[i][j]);
           printf("%d ", t[j][i]);
       }
       printf("\n");
   }



    return 0;
}
