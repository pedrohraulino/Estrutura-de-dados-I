#include<stdio.h>
#include<stdlib.h>

typedef struct disciplina
{
    char nome[20];
    float nota;

}Disciplina;


typedef struct aluno
{
    char nome[50];
    int idade;
    int matricula;
    Disciplina *disciplina;

} Aluno;

Aluno * cadastroAluno(void){
    Aluno * estruturaAluno =  (Aluno *) malloc (sizeof(Aluno));
    
    if (estruturaAluno  == NULL){
        printf("Não foi possivel alocar a memoria");
        exit(1);
    }
    
    estruturaAluno->disciplina = (Disciplina*) malloc (2*sizeof(Disciplina));
     if (estruturaAluno->disciplina == NULL){
        printf("Não foi possivel alocar a memoria");
        exit(1);
    }

    printf("Digite o nome do aluno: \n");
    scanf(" %[^\n]", estruturaAluno->nome);

    printf("Digite a idade do aluno: \n");
    scanf(" %d", &estruturaAluno->idade);

    printf("Digite a matricula do aluno: \n");
    scanf(" %d", &estruturaAluno->matricula);

    printf("Digite as disciplinas: \n");
    scanf(" %[^\n]", estruturaAluno->disciplina[0].nome);
    scanf(" %[^\n]", estruturaAluno->disciplina[1].nome);

    printf("Digite a nota: \n");
    scanf(" %f", &estruturaAluno->disciplina->nota);

    return estruturaAluno;
}

int main(void)
{   
    Aluno * estruturaAluno = cadastroAluno();

    printf("O nome do aluno de matricula %d é %s. Ele tem %d anos.%s esta matriculado na disciplina: %s  %s com nota: %.2f\n", estruturaAluno->matricula, estruturaAluno->nome, estruturaAluno->idade, estruturaAluno->nome, estruturaAluno->disciplina[0].nome,estruturaAluno->disciplina[1].nome, estruturaAluno->disciplina->nota);

    free(estruturaAluno->disciplina);
    free(estruturaAluno);

    return 0;
}