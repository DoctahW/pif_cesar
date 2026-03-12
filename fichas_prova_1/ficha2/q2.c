#include <stdio.h>

int checkId(int n, int m[n][n]);

int main(){
    int n ;
    scanf("%d",&n);
    int m[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &m[i][j]);
        }
    }

    for (int i = 0;i<n;i++){
        for(int j =0;j<n;j++){
            if(j==i){
                m[i][j] = 1;
            }
            else{
                m[i][j] = 0;
            }
        }
    }

    printf("%d", checkId(n, m));

    return 0;
}

int checkId(int n,int m[n][n]){
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            if (i == j){
                if (m[i][j] != 1){
                    return 0;
                }
            }else{
                if (m[i][j] != 0){
                    return 0;
                }
            }
        }
    }
    return 1;
}
