#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int numeroDeQuestoes, aprovado = 0, correto = 0, contador = 0;
    printf("Digite o número de questões da prova: \n");
    scanf("%d", &numeroDeQuestoes);

    char *gabarito = (char *)malloc(numeroDeQuestoes * sizeof(char));
    char **alunos = (char **)malloc(numeroDeQuestoes * sizeof(char *));
    char *aluno = (char *)malloc(10 * sizeof(char));
    float *notaAluno = (float *)malloc(10 * sizeof(float));

    alunos[0] = aluno;
    alunos[1] = notaAluno;

    for (contador = 0; contador < numeroDeQuestoes; contador++) {
        do {
            printf("Digite a alternativa correta da questão %d: \n", contador + 1);
            scanf(" %c", &gabarito[contador]);

            if (gabarito[contador] != 'a' && gabarito[contador] != 'b' && gabarito[contador] != 'c' && gabarito[contador] != 'd') {
                printf("Digite uma alternativa válida.\n");
            }

        } while (gabarito[contador] != 'a' && gabarito[contador] != 'b' && gabarito[contador] != 'c' && gabarito[contador] != 'd');
    }

    for (contador = 0; contador < 10; contador++) {
        correto = 0;

        for (int contadorRespostas = 0; contadorRespostas < numeroDeQuestoes; contadorRespostas++) {
            printf("Digite a alternativa correta da questão %d para o aluno %d: \n", contadorRespostas + 1, contador + 1);
            scanf(" %c", &alunos[0][contadorRespostas]);

            if (alunos[0][contadorRespostas] == gabarito[contadorRespostas]) {
                correto++;
            }
        }

        notaAluno[contador] = correto * 10.0 / numeroDeQuestoes;

        if (notaAluno[contador] >= 6) {
            aprovado++;
        }
    }

    printf("A porcentagem de alunos aprovados foi de: %.1f%%\n", (aprovado * 100.0) / 10);

    for (contador = 0; contador < 10; contador++) {
        printf("A nota do aluno %d foi: %.1f\n", contador + 1, notaAluno[contador]);
    }


    free(gabarito);
    free(aluno);
    free(alunos);

    return 0;
}
