#include <stdio.h>
#include <stdlib.h>

int main (void){

    int tamanho;
    printf("Digite o tamanho do vetotor \n");
    scanf("%d", &tamanho);

    int *vetor = (int*) malloc (tamanho*sizeof(int));

    if (vetor == NULL){
       printf("erro ao alocar memoria \n");
       exit(1);
    }

    else{
        printf("alocacao realizda com sucesso \n");
    }

    printf("digite os valores do vetor \n");

    int contador;

    for (contador=0; contador < tamanho; contador++){
        scanf("%d", &vetor[contador]);
    }

    for (contador = tamanho -1; contador >= 0; contador--)
    {
        printf("%d \n",vetor[contador]);
    }

    free(vetor);

    return 0;
}