#include <stdio.h>

int sumAbove(int N, int m[N][N]);

int main(){
    int N;
    scanf("%d", &N);
    int sum;
    int m[N][N];

    for (int i=0;i<N;i++){
        for (int j=0; j<N; j++){
            scanf("%d", &m[i][j]);
        }
    }

    printf("%d", sumAbove(N, m));

    return 0;
}

int sumAbove(int N, int m[N][N]){
    int sum = 0;
    for (int i=0;i<N;i++){
        for (int j=0; j<N; j++){
            if(i < j){
                sum += m[i][j];
            }
        }
    }
    return sum;
}
