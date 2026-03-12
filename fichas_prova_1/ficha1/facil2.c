#include <stdio.h>


int isCrescent(int num,int m[][3]);

int main(){
    int n = 3;
    int mtx[][3] = {{1,3,5},{2,4,8},{0,7,9}};

    int isit = isCrescent(n,mtx);

    printf("%d", isit);

    return 0;
}

int isCrescent(int num, int m[][3]){
    for (int l=0; l<3;l++){
        for (int c=0; c<2;c++){
            if (m[l][c]>m[l][c+1]){
                return 0;
            }
        }
    }
    return 1;
}
