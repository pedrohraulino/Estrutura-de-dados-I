#include "str.h"

int comprimento (char* s){
    int i;
    int n = 0;
    for (i=0; s[i]!='\0';i++)
    {
        n++;
    }
    return n;
}

void copia (char* dest, char* oring){
    int i;
    for(i=0; oring[i]!='\0'; i++){
        dest[i] = oring[i];
    }
    dest[i] = '\0';
}

void concatena (char* dest, char* oring){
    int i = 0;
    int j;

    while (dest[i] != '\0')
    {
        i++;
    }

    for (j = 0; oring[j] != '\0'; j++)
    {
        dest[i] = oring[j];
        i++;
    }

    dest[i] = '\0';
    
    
}