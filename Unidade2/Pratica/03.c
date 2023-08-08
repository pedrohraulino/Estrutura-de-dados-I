#include <stdio.h>
#include <ctype.h>

int main(void) {
    char entrada[121]; 
    char saida[121];
    char nome[100];
    char linha[100];
    float n1,n2,n3, media;


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

    while (fgets(linha,100,Entrada)!= NULL) {
        sscanf(linha,"%20[^\t]\t%f\t%f\t%f", nome, &n1, &n2, &n3);
        media = (n1 + n2 + n3)/3;

        fprintf(Saida, "%s\t%.1f\t %s\n", nome, media, (media>=7.0)?"aprovado":"reprovado");

    }

    fclose(Entrada);
    fclose(Saida);

    return 0;
}
