#include<stdio.h>
#include<stdlib.h>

typedef struct pessoa
{
    char nome[50];
    char cpf[11];
    float altura;
    int idade;
} Pessoa;

int main(void)
{
    Pessoa dadosPessoa[2];

    for (int contador = 0; contador < 2; contador++){

        printf("Digite o seu nome: \n");
        scanf(" %[^\n]", dadosPessoa[contador].nome);

        printf("Digiteo seu CPF sem os pontos: \n");
        scanf(" %[^\n]", dadosPessoa[contador].cpf);

        printf("Digite a sua altura \n");
        scanf(" %f",&dadosPessoa[contador].altura);

        printf("Digite a sua idade: \n");
        scanf(" %d",&dadosPessoa[contador].idade);
    }

    for (int contador = 0; contador < 2; contador++){    
        printf("A pessoa de CPF %s é %s. Ele tem %.2f cm de altura e tem %d anos.\n", dadosPessoa[contador].cpf, dadosPessoa[contador].nome, dadosPessoa[contador].altura, dadosPessoa[contador].idade);
    }

    return 0;
}
