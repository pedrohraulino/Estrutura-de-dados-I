#include<stdio.h>
#include<stdlib.h>

int main(void){

    char nomeArquivo[20];
    printf("digite o nome do arquivo \n");
    scanf(" [ˆ\n]");
    
    FILE * arquivo;
    arquivo = fopen(nomeArquivo,"w");

    if (arquivo == NULL)
    {
       printf("erro na abertura do arquivo \n");
       exit(1);
    }
    else{
        printf("arquivo criado \n");
    }

    fputc('A', arquivo);

    
    if(!fclose(arquivo)){
        printf("arquivo fechado com sucesso \n");
    }


    
    

return 0;
}