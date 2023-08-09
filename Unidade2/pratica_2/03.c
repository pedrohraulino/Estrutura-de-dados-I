#include <stdio.h>
#include <stdlib.h>

typedef struct fruta {
    char nome[10];
    float preco;
} Fruta;

void lerFutas(FILE* fl, int n, Fruta** fruta) {
    int numFrutas = 0;
    char resposta;

    do {
        numFrutas++;

        *fruta = (Fruta*)malloc(n * sizeof(numFrutas));

        printf("Digite o nome da Fruta:\n");
        scanf(" %[^\n]", (*fruta)[numFrutas].nome);
        printf("Digite o preco:\n");
        scanf("%f", &(*fruta)[numFrutas].preco);

        fprintf(fl, "%s %.2f\n", (*fruta)[numFrutas].nome, (*fruta)[numFrutas].preco);

        printf("Deseja cadastrar outra fruta? (s/n): ");
        scanf(" %c", &resposta);
    } while (resposta == 's' || resposta == 'S');
}


int main() {
    FILE* arquivo = fopen("frutas.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int numeroAlunos;

    printf("Digite o número de alunos:\n");
    scanf("%d", &numeroAlunos);
    fprintf(arquivo, "%d\n", numeroAlunos);

    Fruta* fruta;
    lerFutas(arquivo, numeroAlunos, &fruta);

    fclose(arquivo);

    free(fruta);

    return 0;
}
