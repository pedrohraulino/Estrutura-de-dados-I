/*TAD: ContaBancaria*/

/*Tipo exportado*/
typedef struct conta ContaBancaria;

ContaBancaria* criaConta(char *titular, int numero, float saldo);

float deposita (ContaBancaria* conta, float depositaSaldo);
float saca (ContaBancaria* conta, float sacaSaldo);
float transfere (ContaBancaria* conta, float transfereSaldo);
float saldo (ContaBancaria* conta);
void excluiConta(ContaBancaria* conta);



