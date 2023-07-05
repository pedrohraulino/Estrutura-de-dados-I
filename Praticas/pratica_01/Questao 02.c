#include <stdio.h>
#include <stdlib.h>

int main (void){

    int linhas, linha, colunas, coluna;
   
    printf("Digite a quantidade de linhas da matriz \n");
    scanf("%d", &linhas);

    printf("Digite a quantidade de colunas da matriz \n");
    scanf("%d", &colunas);

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
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    for (coluna = 0; coluna < colunas; coluna++){
        for (linha = 0; linha < linhas; linha++){
            printf("%d", matriz[linha][coluna]);
        }
        printf("\n");
    }

    int **matrizt = (int**) malloc(linhas * sizeof(int*));

    if (matrizt == NULL){
       printf("erro ao alocar memoria \n");
       exit(1);
    }

    else{
        printf("alocacao realizda com sucesso \n");
    }

    printf("digite os valores do vetor \n");

    for (contador = 0; contador < linhas; contador++){
        matrizt[contador] = (int*) malloc (colunas*sizeof(int));
    }

    for (linha = 0; linha < linhas; linha++){
        for (coluna = 0; coluna < colunas; coluna++){
            matrizt[linha][coluna]=matriz[coluna][linha];
        }
    }

    for (coluna = 0; coluna < colunas; coluna++){
        for (linha = 0; linha < linhas; linha++){
            printf("%d", matrizt[linha][coluna]);
        }
        printf("\n");
    }

    for (linha = 0; linha < linhas; linha++)
    {
        free(matriz[linha]);
    }
   
    for (linha = 0; linha < linhas; linha++)
    {
        free(matrizt[linha]);
    }
    
    free(matrizt);
   
    free(matriz);

    return 0;
}