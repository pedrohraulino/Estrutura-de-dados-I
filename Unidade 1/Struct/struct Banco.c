#include<stdio.h>
#include<stdlib.h>

typedef struct banco
{
    char nome[50];
    char conta[6];
    char agencia[4];
    float saldo;
    int senha;
} Banco;

int main(void)
{
    Banco dadosDaConta[5];

    for (int contador = 0; contador < 5; contador++){

        printf("Digite o seu nome: \n");
        scanf(" %[^\n]", dadosDaConta[contador].nome);

        printf("Digiteo a Conta: \n");
        scanf(" %[^\n]", dadosDaConta[contador].conta);
       
        printf("Digiteo a Agencia: \n");
        scanf(" %[^\n]", dadosDaConta[contador].agencia);
       
        printf("Digite a sua senha \n");
        scanf(" %d",&dadosDaConta[contador].senha);

        printf("Digite seu saldo: \n");
        scanf(" %f",&dadosDaConta[contador].saldo);
    }

    for (int contador = 0; contador < 5; contador++){    
        printf("A conta: %s e agencia: %s pertence a: %s. O saldo é: %.2f e a senha para saque é: %d\n", dadosDaConta[contador].conta,dadosDaConta[contador].agencia,dadosDaConta[contador].nome,dadosDaConta[contador].saldo,dadosDaConta[contador].senha);
    }

    return 0;
}