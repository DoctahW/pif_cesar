#include <stdlib.h>
#include <stdio.h>

int main(){
    int n;
    float *notas, media = 0;

    printf("Insira o numero de alunos na classe:");
    scanf("%d", &n);

    notas = (float *)malloc(n*sizeof(float));

    for (int i=0; i<n; i++){
        printf("Insira a nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
    }

    for (int i=0; i<n; i++){
        media += notas[i];
    }
    media /= n;

    free(notas);
    notas = NULL;

    printf("A media das notas da turma e: %.2f\n", media);

}
