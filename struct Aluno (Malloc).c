#include<stdio.h>
#include<stdlib.h>

typedef struct estruturaAluno
{
    char nome[50];
    int idade;
    int matricula;
} Aluno;

int main(void)
{
    Aluno * estruturaAluno =  (Aluno *) malloc (sizeof(Aluno));

    printf("Digite o nome do aluno: \n");
    scanf(" %[^\n]", estruturaAluno->nome);

    printf("Digite a idade do aluno: \n");
    scanf(" %d", &estruturaAluno->idade);

    printf("Digite a matricula do aluno: \n");
    scanf(" %d", &estruturaAluno->matricula);

    printf("O nome do aluno de matricula %d é %s. Ele tem %d anos.\n", estruturaAluno->matricula, estruturaAluno->nome, estruturaAluno->idade);

    return 0;
}
