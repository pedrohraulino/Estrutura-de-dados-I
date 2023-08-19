#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "contabancaria.h"

typedef struct conta {
    char titular[20];
    float saldo;
    int numero;
} ContaBancaria;

ContaBancaria* criaConta(char *titular, int numero, float saldo) {
    ContaBancaria* conta = (ContaBancaria*) malloc(sizeof(ContaBancaria));
    if (conta == NULL) {
        printf("memoria insuficiente");

        exit(1);
    };

    strcpy(conta->titular, titular);
    conta->numero = numero;
    conta->saldo = saldo;
    return conta;
}

float deposita (ContaBancaria* conta, float depositaSaldo){
    conta->saldo += depositaSaldo;
    printf("O novo saldo apos o deposito e: %2.f\n",conta->saldo);
    return conta->saldo;
};

float saca (ContaBancaria* conta, float sacaSaldo){
    conta->saldo -= sacaSaldo;
    printf("O novo saldo apos o saque e: %2.f\n",conta->saldo);
    return conta->saldo;
};

float transfere (ContaBancaria* conta, float transfereSaldo){
    if(conta->saldo>= transfereSaldo){
        conta->saldo -= transfereSaldo;
        printf("O novo saldo apos a transferecia e: %2.f\n",conta->saldo);
        return conta->saldo;
    }else{
        printf("saldo insuficiente");
    }

};

float saldo (ContaBancaria* conta){
    return conta->saldo;
};

void excluiConta(ContaBancaria* conta){
    free(conta);
};
