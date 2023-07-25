#include <stdio.h> 

typedef union indiceacademico { 
    float IG; 
    float IRA; 
    float IRT; 
} indiceAcademico;

typedef struct aluno{
    char nome[20];
    int matricula;
    char curso[20];
    indiceAcademico indice;
} Aluno;
int main(void) { 
    Aluno a;
    printf("digite o NOME do aluno: \n");
    scanf(" %[^\n", a.nome);
    printf("digite a MATRICULA do aluno: \n");
    scanf("%d", &a.matricula);
    printf("digite o CURSO do aluno: \n");
    scanf(" %[^\n", a.curso);

    int opcao;
    printf("Escolha o índice acadêmico que deseja utilizar:\n");
    printf("1 - IG \n");
    printf("2 - IRA \n");
    printf("3 - IRT \n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite o valor do IG: ");
            scanf("%f", &a.indice.IG);
            printf("O aluno: %s de matricula: %d, possui um IG de: %.2f no curso de: %s", a.nome, a.matricula, a.indice.IG, a.curso);
            break;
        case 2:
            printf("Digite o valor do IRA: ");
            scanf("%f", &a.indice.IRA);
            printf("O aluno: %s de matricula: %d, possui um IRA de: %.2f no curso de: %s", a.nome, a.matricula, a.indice.IRA, a.curso);
            break;
        case 3:
            printf("Digite o valor do IRT: ");
            scanf("%f", &a.indice.IRT);
            printf("O aluno: %s de matricula: %d, possui um IRT de: %.2f no curso de: %s", a.nome, a.matricula, a.indice.IRT, a.curso);
            break;
        default:
            printf("Opção inválida. \n");
            return 1;
    }
    
    return 0;
}
