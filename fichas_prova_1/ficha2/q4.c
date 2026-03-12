#include <stdio.h>
int bigIndex(int n, int v[6]);

int main (){
    int v[6] = {1,2,3,6,5,6};
    int n = 6;

    printf("%d",bigIndex(n,v));
    return 0;
}

int bigIndex(int n, int v[6]){
    int big = 0;
    int id = 0;
    for (int i= 0; i<n; i++){
        if (v[i]>big){
            big = v[i];
        }
    }
    for (int i=0; i<n; i++){
        if (v[i] == big){
            id = i;
            break;
        }
    }
    return id;
}
