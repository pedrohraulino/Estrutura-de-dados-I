#include <stdio.h>
#include "str.c"

int comprimento(char* str);
void copia (char* dest, char* oring);
void concatena (char* dest, char* oring);

int main(void){
    char str[101], str1[101], str2[101];

    printf("Digite uma sequencia de caracteres: ");
    scanf("%50[^\n]", str1);
    printf("Digite uma sequencia de caracteres: ");
    scanf(" %50[^\n]", str2);
    copia(str, str1);
    concatena(str, str2);
    printf("O comprimento da concatenação: %d\n", comprimento(str));
    
    return 0;
}
