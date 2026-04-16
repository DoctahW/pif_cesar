#include <stdio.h>
typedef struct {
    char rua[50];
    int numero;
} Endereco;

typedef struct {
    char nome[50];
    int idade;
    Endereco end;
} Aluno;

int main(){
    int n = 3;
    Aluno alunos[3];
    
    for (int i = 0; i < n; i++) {
        Aluno a;
        fgets(a.nome, 50, stdin);
        fgets(a.end.rua, 50, stdin);
        scanf("%d", &a.idade);
        scanf("%d", &a.end.numero);
        while (getchar() != '\n');  // limpa o \n que scanf deixa no buffer
        alunos[i] = a;
    }
    
    for (int i = 0; i < n; i++) {
        printf("%s %d %s %d\n", alunos[i].nome, alunos[i].idade, alunos[i].end.rua, alunos[i].end.numero);
    }
}