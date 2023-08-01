#include <stdio.h>
#include <stdlib.h>

#define MAX_VAGAS 10
#define MAX_TURMAS 2

struct aluno {
    int mat;
    char nome[81];
    float notas[3];
    float media;
};
typedef struct aluno Aluno;

struct turma {
    char id;
    int vagas;
    Aluno* alunos[MAX_VAGAS];
};
typedef struct turma Turma;

Turma* turmas[MAX_TURMAS];

void inicializaTurma(int n, Turma** turma) {
    int i;
    for (i = 0; i < n; i++) {
        turma[i] = NULL;
    }
}

void criarAluno(Aluno** aluno, int i) {
    if (aluno[i] == NULL) {
        aluno[i] = (Aluno*)malloc(sizeof(Aluno));
    }
    printf("Digite a matricula: ");
    scanf("%d", &aluno[i]->mat);
    printf("Digite o nome: ");
    scanf(" %80[^\n]", aluno[i]->nome);
}

void lancarNotas(Aluno** aluno, int i) {
    aluno[i]->notas[0] = 0;
    aluno[i]->notas[1] = 0;
    aluno[i]->notas[2] = 0;

    printf("Digite as notas de %s:\n", aluno[i]->nome);
    printf("Nota 01: ");
    scanf("%f", &aluno[i]->notas[0]);
    printf("Nota 02: ");
    scanf("%f", &aluno[i]->notas[1]);
    printf("Nota 03: ");
    scanf("%f", &aluno[i]->notas[2]);

    aluno[i]->media = (aluno[i]->notas[0] + aluno[i]->notas[1] + aluno[i]->notas[2]) / 3;
}

void listarAluno(int n, Aluno** aluno, int i) {
    for(i=0; i < n ;i++){
         printf("%s:\n", aluno[i]->nome);
    }
}

