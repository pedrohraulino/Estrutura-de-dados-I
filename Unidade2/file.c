#include<stdio.h>
#include<stdlib.h>

int main(void){

    FILE * fp;
    fp = fopen("entrada.txt","wt");

    if (fp == NULL)
    {
       printf("erro na abertura do arquivo");
       exit(1);
    }
    else{
        printf("arquivo criado");
    }
    if(!fclose(fp)){
        printf("arquivo fechado com sucesso");
    }
    

return 0;
}