#include <stdio.h>
#include <stdlib.h>

int main (void){

    int totalEntrevistados, opcao, sexo, contadorHomem=0, contadorMulher=0, contadorHomemGostou=0, contadorHomemNaoGostou=0,contadorMulherGostou=0, contadorMulherNaoGostou=0;
    printf("Digite o total de pessoas que foram entrevistadas \n");
    scanf("%d", &totalEntrevistados);

    int *vetorSexo = (int*) malloc (totalEntrevistados*sizeof(int));
    int *vetorOpiniao = (int*) malloc (totalEntrevistados*sizeof(int));
    int **vetorVinculado= (int**) malloc (2*sizeof(int*));

    vetorVinculado[0]= vetorSexo;
    vetorVinculado[1]= vetorOpiniao;

    for(int contador = 0; contador<totalEntrevistados; contador++){
       
        do {

            printf("Digite 1 para homem e 2 para mulher \n");
            scanf("%d", &sexo);
            
            if (sexo != 1 && sexo != 2){
            printf("digite um nuemro valido");
            }

        } while (sexo != 1 && sexo != 2);

        do {
            
            printf("Digite 1 para homem e 2 para mulher \n");
            scanf("%d", &opcao);
            
            if (opcao != 1 && opcao != 2){
            printf("digite um nuemro valido");
            }

        } while (opcao != 1 && opcao != 2);
        
        vetorVinculado[0][contador] = sexo;
        vetorVinculado[1][contador] = opcao;
        
        if (sexo ==1)
        {
            contadorHomem++;

            if (opcao == 1){
                contadorHomemGostou++;
            }
            
            else{
               contadorHomemNaoGostou++;
            }
        }

        else if (sexo ==2)
        {
            contadorMulher++;
            
            if (opcao == 1){
                contadorMulherGostou++;
            }
            
            else{
               contadorMulherNaoGostou++;
            }
        }

    }

    printf("O total de pessoas do sexo femino que responderam e gostaram do produto foi de: %d porcentos \n", (contadorMulherGostou*100)/contadorMulher);
    printf("O total de pessoas do sexo masculino que responderam e não gostaram do produto foi de: %d porcentos \n", (contadorHomemNaoGostou*100)/contadorHomem);

    printf("o estrevistado de numero 2 respondeu: %d", vetorVinculado[0][1]);

    free(vetorSexo);
    free(vetorOpiniao);
    free(vetorVinculado);

    return 0;
}