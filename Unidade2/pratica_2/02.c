#include <stdio.h>
#include <stdlib.h>

typedef struct aluno {
    char nome[10];
    float nota;
} Aluno;

void lerNotas(FILE* fl, int n, Aluno** aluno) {
    *aluno = (Aluno*)malloc(n * sizeof(Aluno));

    for (int i = 0; i < n; i++) {
        printf("Digite o Nome do Aluno:\n");
        scanf(" %[^\n]", (*aluno)[i].nome);
        printf("Digite a nota:\n");
        scanf("%f", &(*aluno)[i].nota);

        fprintf(fl, "%s %.2f\n", (*aluno)[i].nome, (*aluno)[i].nota);
    }
}

int main() {
    FILE* arquivo = fopen("notasAlunos.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int numeroAlunos;

    printf("Digite o número de alunos:\n");
    scanf("%d", &numeroAlunos);
    fprintf(arquivo, "%d\n", numeroAlunos);

    Aluno* aluno;
    lerNotas(arquivo, numeroAlunos, &aluno);

    fclose(arquivo);

    free(aluno);

    return 0;
}
