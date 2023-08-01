#include <stdio.h> 

typedef enum genero { 
    masculino, feminino
} Genero;

typedef struct pessoa {
    char nome[20];
    int idade;
    Genero genero;
} Pessoa;

int main(void) { 
    Pessoa p;
    printf("Digite o NOME da pessoa: \n");
    scanf(" %19[^\n]", p.nome);
    printf("Digite a IDADE da pessoa: \n");
    scanf("%d", &p.idade);
    printf("Digite o GÊNERO da pessoa (0 para masculino, 1 para feminino): \n");
    scanf("%d", &p.genero);

    if (p.genero == masculino) {
        printf("%s tem %d anos e é do sexo Masculino\n", p.nome, p.idade);
    } else {
        printf("%s tem %d anos e é do sexo Feminino\n", p.nome, p.idade);
    }
    
    return 0;
}
