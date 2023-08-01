#include <stdio.h> 

typedef union tipo { 
    char alimento[20];
    char bebida[20];
    char eletronico[20];
} Tipo;

typedef struct produto{
    float preco;
    Tipo tipo;
} Produto;

int main(void) { 
    Produto produto;

    int opcao;
    printf("Escolha o tipo de produto que deseja cadastrar:\n");
    printf("1 - Alimento \n");
    printf("2 - Bebida \n");
    printf("3 - Eletronico \n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite o nome do alimento ");
            scanf(" %[^\n", produto.tipo.alimento);
            printf("digite o PRECO do produto: \n");
            scanf("%f", &produto.preco);
            printf("O produto: %s tem o peço de: %.2f e é do tipo: Alimento",  produto.tipo.alimento, produto.preco);
            break;
        case 2:
            printf("Digite o nome do alimento ");
            scanf(" %[^\n", produto.tipo.bebida);
            printf("digite o PRECO do produto: \n");
            scanf("%f", &produto.preco);
            printf("O produto: %s tem o peço de: %.2f e é do tipo: Bebida",  produto.tipo.alimento, produto.preco);
            break;
        case 3:
            printf("Digite o nome do alimento ");
            scanf(" %[^\n", produto.tipo.eletronico);
            printf("digite o PRECO do produto: \n");
            scanf("%f", &produto.preco);
            printf("O produto: %s tem o peço de: %.2f e é do tipo: Eletronico",  produto.tipo.eletronico, produto.preco);
            break;
        default:
            printf("Opção inválida. \n");
            return 1;
    }
    
    return 0;
}

