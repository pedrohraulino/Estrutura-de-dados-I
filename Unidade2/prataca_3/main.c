#include <stdio.h>
#include <stdlib.h>
#include "contabancaria.h"

int main(void) {

    ContaBancaria* conta = criaConta("João", 123, 1000.0);

    deposita(conta, 500.0);
    saca(conta, 100.0);
    transfere(conta, 300.0);

    printf("Saldo da conta 1: %.2f\n", saldo(conta));

    excluiConta(conta);

    return 0;
}
