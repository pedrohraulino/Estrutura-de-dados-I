#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aluno.h"

typedef struct aluno{
    char nome[20];
    float nota;
} Aluno;

Aluno* aluno_cria(char* nome, float nota){
        Aluno* aluno = (Aluno*) malloc(sizeof(Aluno));
    if (aluno == NULL) {
        printf("memoria insuficiente");

        exit(1);
    };
    strcpy(aluno->nome, nome);
    aluno->nota = nota;
};

void aluno_libera(Aluno* a){
    free(a);
};

void aluno_imprime(Aluno* a){
    printf("O nome do aluno e: %s \n", a->nome);
    printf("A nota e: %2.f \n", a->nota);
};

void aluno_ordena(int n, Aluno** v) {
    int i, j;
    Aluno* temp;

    for (i = 0; i <     n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(v[j]->nome, v[j + 1]->nome) > 0) {

                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

void aluno_salva(FILE *fp, int n, Aluno **v) {
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        fprintf(fp, "Nome: %s, Nota: %d\n", v[i]->nome, v[i]->nota);
    }

    fclose(fp);
}