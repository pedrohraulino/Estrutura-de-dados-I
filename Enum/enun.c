#include <stdio.h> 

typedef enum boolean { 
   false, true
}bool;




int main() { 
    bool b; 
    printf("Digite O ou 1\n");
    scanf("%d", &b);
    printf("O valor infomrado: %d", b);

    if (b==true)
    {
        printf(" é verdadeiro");
    }

    else{
        printf(" é falso");
    }
    
    return 0;
}
