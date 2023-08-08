#include<stdio.h>
#include<stdlib.h>

int main(void){
    int c;
    FILE * fp;
    fp = fopen("arquivo.txt","r");

    if (fp == NULL)
    {
       printf("erro na abertura do arquivo\n");
       exit(1);
    }
    else{
        printf("arquivo aberto");
    }

    c=fgetc(fp);
    printf("%c\n",c);


    if(!fclose(fp)){
        printf("arquivo fechado com sucesso\n");
    }
    

return 0;
}