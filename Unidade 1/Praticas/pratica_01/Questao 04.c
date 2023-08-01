#include <stdio.h>
#include <stdlib.h>

int main (void){

    int quantidade, linhas, linha, colunas, coluna;
    
    printf("digita a quantidade de nomes que deseja guardar \n");
    scanf("%d", &quantidade);

    linhas = quantidade;
    colunas = 50;
    
    if (quantidade > 100){ 
    
        while (quantidade > 100){

            printf("por favor digite um valor menor ou igual a 100");
            scanf("%d", &quantidade);

        }

    }

    char** matriz = (char**)malloc(quantidade * sizeof(char*));   
    int *vetor = (int*) malloc(quantidade * sizeof(int));

    if (matriz == NULL){
       printf("erro ao alocar memoria \n");
       exit(1);
    }

    else{
        printf("alocacao realizada com sucesso \n");
    }


    int contador;

    for (contador = 0; contador < linhas ; contador++){
        matriz[contador] = (char*)malloc(colunas * sizeof(char));
        
    }
    
    for (linha = 0; linha < linhas; linha++)
    {
        printf("digite o nome: \n");
        scanf("%s", matriz[linha]);
        
        printf("digite a idade: \n");
        scanf("%d", &vetor[linha]);

    }

        for (linha = 0; linha < linhas; linha++)
    {
        printf("%d - %s tem %d ano(s)\n",linha+1, matriz[linha],vetor[linha]);

    }


    for (linha = 0; linha < linhas; linha++){
           printf("%s \n", matriz[linha]);
    }


    for (linha = 0; linha < linhas; linha++) {
        free(matriz[linha]);
    }
   
    free(matriz);

    return 0;
}