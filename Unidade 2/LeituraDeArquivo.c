#include<stdio.h>
#include<stdlib.h>

int main(void){
    char str[100];
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

    scanf(fp,"%s",str);
    printf("%s\n", str);


    if(!fclose(fp)){
        printf("arquivo fechado com sucesso\n");
    }
    

return 0;
}