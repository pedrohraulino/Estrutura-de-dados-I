#include <stdio.h>
#include <ctype.h>

int main(void) {
    char entrada[121]; // Tamanho 121 para acomodar o nome do arquivo mais o caractere nulo '\0'
    char saida[121];
    int c;

    FILE *Entrada;
    FILE *Saida;

    printf("Digite o nome do arquivo de Entrada: ");
    scanf("%120s", entrada);
    printf("Digite o nome do arquivo de Saída: ");
    scanf("%120s", saida);

    Entrada = fopen(entrada, "rt");

    if (Entrada == NULL) {
        printf("Erro ao abrir o arquivo de Entrada.\n");
        return 1;
    }

    Saida = fopen(saida, "wt");
    if (Saida == NULL) {
        printf("Erro ao abrir o arquivo de Saída.\n");
        fclose(Entrada); 
        return 1;
    }

    while ((c = fgetc(Entrada)) != EOF) {
        fputc(toupper(c), Saida);
    }

    fclose(Entrada);
    fclose(Saida);

    return 0;
}
