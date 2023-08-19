#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aluno.h"

int main (void){
    int numeroDeAluno=5;
    Aluno** aluno = (Aluno**)malloc(5 * sizeof(Aluno*));
    aluno[0] = aluno_cria("Ana", 7.2);
    aluno[1] = aluno_cria("Pedro", 6.6);
    aluno[2] = aluno_cria("Julia", 3.7);
    aluno[3] = aluno_cria("Alves", 5.9);
    aluno[4] = aluno_cria("Carlos", 8.7);

    for (int i = 0; i < 5; i++) {
        aluno_imprime(aluno[i]);
    }

     FILE* arquivo = fopen("alunos.txt", "w");
    if (arquivo != NULL) {
        aluno_salva(arquivo, numeroDeAluno, aluno);
        fclose(arquivo);
    } else {
        printf("Erro ao abrir o arquivo.\n");
    }

    aluno_libera(aluno);
}