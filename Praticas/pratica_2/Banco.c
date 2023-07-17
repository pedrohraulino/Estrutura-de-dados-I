#include<stdio.h>
#include<stdlib.h>

typedef struct cadastro
{
    char nome[50];
    float saldo;
    int agencia;
    int numeroConta;
} Cadastro;

Cadastro * cadastroConta(int *quantidade){

    printf("Digite a quantiadde de Contas que deseja cadastrar: \n");
    scanf(" %d", quantidade); 

    Cadastro * dadosConta =  (Cadastro *) malloc (*quantidade*sizeof(Cadastro));
    
    if (dadosConta  == NULL){
        printf("Não foi possivel alocar a memoria");
        exit(1);
    }
    

    for (int contador = 0; contador < *quantidade; contador++)
    {
    printf("Digite o nome: \n");
    scanf(" %[^\n]", dadosConta[contador].nome);
    
    printf("Digite a Agencia: \n");
    scanf(" %d", &dadosConta[contador].agencia);

    printf("Digite o numero da conta: \n");
    scanf(" %d", &dadosConta[contador].numeroConta);

    printf("Digite o saldo: \n");
    scanf(" %f", &dadosConta[contador].saldo);
    }
    
    return dadosConta;
}

void imprimeDados(Cadastro *dadosConta, int *quantidade) {

     for (int contador = 0; contador < *quantidade; contador++)
    {

     printf("A conta %d de agenica %d pertece a %s e tem %.2f de saldo\n", dadosConta[contador].numeroConta, dadosConta[contador].agencia, dadosConta[contador].nome, dadosConta[contador].saldo );
    }

}


int main(void)
{   
    int quantidade = 0;
    
    Cadastro *dadosConta = cadastroConta(&quantidade);

    printf("O Banco tem: %d novas contas \n", quantidade);

    imprimeDados(dadosConta, &quantidade);


    free(dadosConta);

    return 0;
}