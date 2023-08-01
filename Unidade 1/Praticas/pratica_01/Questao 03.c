#include <stdio.h>
#include <stdlib.h>

int main (void){

    int tamanho, linhas, linha, colunas, coluna;
    
    printf("digita o tamanho\n");
    scanf("%d", &tamanho);

    linhas = tamanho;
    colunas = tamanho;
    int **matriz = (int**) malloc(linhas * sizeof(int*));

    if (matriz == NULL){
       printf("erro ao alocar memoria \n");
       exit(1);
    }

    else{
        printf("alocacao realizda com sucesso \n");
    }

    printf("digite os valores do vetor \n");

    int contador;

    for (contador = 0; contador < linhas; contador++){
        matriz[contador] = (int*) malloc (colunas*sizeof(int));
    }

    for (linha = 0; linha < linhas; linha++){
        for (coluna = 0; coluna < colunas; coluna++){
           matriz[linha][coluna] = rand() % 101;
        }
    }

    for (coluna = 0; coluna < colunas; coluna++){
        for (linha = 0; linha < linhas; linha++){
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }

    for (linha = 0; linha < linhas; linha++) {
        free(matriz[linha]);
    }
   
    free(matriz);

    return 0;
}