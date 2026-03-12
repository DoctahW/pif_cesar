#include <stdio.h>

void preencherVetorParidade(int t, int *v, int *v2){
    for(int i = 0; i < t; i++){
        if (v[i] % 2 == 0){
            v2[i] = 0;
        }
        else{
            v2[i] = 1;
        }
    }
}

int main(){
    int t =5;
    int v[5]= {2, 5, 8, 7, 4};
    int v2[t];

    preencherVetorParidade(t, v, v2);

    printf("Vetor Paridade: ");
    for(int i = 0; i < t; i++){
        printf("%d ", v2[i]);
    }
}
