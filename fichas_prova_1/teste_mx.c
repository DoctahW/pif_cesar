#include <stdio.h>

void multi(int t,int m[t][t], int m2[t][t], int nm[t][t]);
void printMatrix(int t, int m[t][t]);
void mountMatrix(int t, int m[t][t]);

int main(){
    int t;
    scanf("%d",&t);
    int m[t][t];
    int m2[t][t];
    int nm[t][t];

    mountMatrix(t,m);
    mountMatrix(t,m2);

    multi(t,m,m2,nm);

    printf("Matriz 1:\n");
    printMatrix(t,m);
    printf("Matriz 2:\n");
    printMatrix(t,m2);
    printf("Nova Matriz:\n");
    printMatrix(t,nm);

    return 0;
}

void mountMatrix(int t, int m[t][t]){
    for (int i=0; i<t; i++){
        for(int j=0; j<t; j++){
            scanf("%d",&m[i][j]);
        }
    }
}

void printMatrix(int t,int m[t][t]){
    for (int i=0; i<t; i++){
        for(int j=0; j<t; j++){
            printf("[%d]", m[i][j]);
        }
        printf("\n");
    }
}

void multi(int t, int m[t][t],int m2[t][t],int nm[t][t]){
    for (int i=0; i<t; i++){
        for(int j=0; j<t; j++){
            nm[i][j] = 0;
            for (int k=0; k<t; k++){
                nm[i][j] += m[i][k] * m2[k][j];
            }
        }
    }
}
