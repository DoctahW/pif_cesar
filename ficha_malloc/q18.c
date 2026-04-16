#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
int remove_negatives(int *v, int n);

int main(){
    int n = 5;
    int *v = (int*)malloc(n *sizeof(int));
    for (int i =0; i<n; i++) {
        scanf("%d", &v[i]);
    }
    
    int new_size = remove_negatives(v,n);
    
    for (int i = 0; i<new_size; i++) {
        printf("%d", v[i]);
    }
    return 0;
}

int remove_negatives(int *v, int n){
    int count = 0;
    for (int i=0; i<n; i++) {
        if (v[i] < 0) {
            count++;
            for(int j=i; j<n-1; j++ )
                v[j]= v[j+1];
            n--;
            i--;
        }
    }
    v = (int*)realloc(v, n*sizeof(int));
    
    return n;
}

int **matriz = (int **)malloc(l * sizeof(int*))
for
matriz[i] = (int *)malloc(c * sizeof(int))