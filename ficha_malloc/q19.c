#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char nome[50];
    float *notas;
} Aluno;



int main(){
    Aluno a1, a2, a3;
    Aluno a[3] = {a1,a2,a3};
    float media_alunos[3], media_geral = 0;
    int qtd_notas;
    printf("Quantas notas tem cada aluno?");
    scanf("%d", &qtd_notas);
    for (int i = 0; i<3; i++) {
        a[i].notas = (float*)malloc(qtd_notas*sizeof(int));
    }
    for (int i = 0; i<3; i++) {
        printf("Qual o nome do aluno?: ");
        scanf("%s", a[i].nome);
        for (int j = 0; j<qtd_notas; j++){
            printf("Nota [%d]: ", i+1);
            scanf("%f", &a[i].notas[j]);
        }
    }
    
    for (int i = 0; i<3; i++){
        float media_temp = 0;
        for (int j=0; j<qtd_notas; j++) {
            media_temp += a[i].notas[j];
        }
        media_alunos[i] = (media_temp/qtd_notas);    
    }
    
    for (int i = 0;i<3;i++){
        media_geral += media_alunos[i];
    }
    
    media_geral/=3;
    
    for (int i = 0; i<3; i++) {
        printf("Media do Aluno [%d]:\n", i+1);
        printf("%.2f\n", media_alunos[i]);
    }
    
    printf("Media Geral:\n");
    printf("%.2f\n", media_geral);
    for (int i = 0; i<3; i++) {
        free(a[i].notas);
    }
    
    
    return 0;
}

