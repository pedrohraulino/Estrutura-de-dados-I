#include <stdio.h>

typedef union documemntos
{
   int cpf;
   int cnh;
   int rg;
}docs;

int main(void){
    docs documemntos;
    printf("digite os documento: \n");
    scanf("%d", &documemntos.cpf);
    scanf("%d", &documemntos.rg);
    scanf("%d", &documemntos.cnh);

    printf("\n CPF: %d. RG: %d, CNH: %d", documemntos.cpf,documemntos.rg,documemntos.cnh);

    return 0;
}
