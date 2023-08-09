#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[10];
    char cargo[50];
    float salario;
} Funcionario;

void lerDados(FILE* fl, int n, Funcionario** funcionario) {
    *funcionario = (Funcionario*)malloc(n * sizeof(Funcionario));

    for (int i = 0; i < n; i++) {
        printf("Digite o Nome do funcionario:\n");
        scanf(" %[^\n]", (*funcionario)[i].nome);
        printf("Digite o Cargo:\n");
        scanf(" %[^\n]", (*funcionario)[i].cargo);
        printf("Digite o Salario:\n");
        scanf("%f", &(*funcionario)[i].salario);

        fprintf(fl, "%s %s %.2f\n", (*funcionario)[i].nome, (*funcionario)[i].cargo, (*funcionario)[i].salario);
    }
}

int main() {
    FILE* arquivo = fopen("funcionarios.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int numeroFuncionarios;

    printf("Digite o número de funcionários:\n");
    scanf("%d", &numeroFuncionarios);

    Funcionario* funcionario;
    lerDados(arquivo, numeroFuncionarios, &funcionario);

    fclose(arquivo);

    free(funcionario);

    return 0;
}
