#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int c;
    int nlinhas = 0; 
    FILE *fp;
    fp = fopen("arquivo.txt", "r");

    if (fp == NULL) {
        printf("Erro na abertura do arquivo\n");
        exit(1);
    } else {
        printf("Arquivo aberto\n");
    }

    while ((c = fgetc(fp)) != EOF) {
        if (c == '\n') {
            nlinhas++;
        }
    }

    if (!fclose(fp)) {
        printf("Arquivo fechado com sucesso\n");
    } 

    printf("o numero de linhas e: %d\n", nlinhas);

    return 0;
}
