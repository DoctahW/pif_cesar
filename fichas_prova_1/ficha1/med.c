#include <stdio.h>

int removeRepetition(int v[], int n, int r[]);

int main(){
    int vo[] = {5,5,5,2,2,7,3,3,1};
    int N = 9;
    int vr[9];


    int lstsize = removeRepetition(vo,N,vr);

    printf("Tamanho do novo array = [%d]\n", lstsize);

    printf("Novo Array = [");
    for (int i = 0; i< lstsize; i++) {
        printf("%d ", vr[i]);
    }
     printf("]");
}

int removeRepetition(int v[], int n, int r[]){
    int ni = 0;

    for (int i=0; i<n; i++){
        int existe = 0;

        for(int j=0; j<ni; j++){
            if (r[j] == v[i]){
                existe = 1;
                break;
            }
        }
        if (!existe) {
            r[ni] = v[i];
            ni++;
        }
    }
    return ni;
}
