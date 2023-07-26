#include <stdio.h> 

typedef enum mes { 
    janeiro, fevereiro, marco, abril, maio, junho, julho, agosto, setembro,outrubro, novembro, dezembro
} Mes;

typedef struct data {
    int dia;
    Mes mes;
    int  ano;
} Data;

int main(void) { 
    Data data;
    printf("Digite o DIA: \n");
    scanf("%d]", &data.dia);
    printf("digite um mes entre 1 e 12: \n");
    int mes;
    scanf("%d", &mes);

    switch (mes) {
        case 1: data.mes = janeiro; break;
        case 2: data.mes = fevereiro; break;
        case 3: data.mes = marco; break;
        case 4: data.mes = abril; break;
        case 5: data.mes = maio; break;
        case 6: data.mes = junho; break;
        case 7: data.mes = julho; break;
        case 8: data.mes = agosto; break;
        case 9: data.mes = setembro; break;
        case 10: data.mes = outrubro; break;
        case 11: data.mes = novembro; break;
        case 12: data.mes = dezembro; break;
        default:
            printf("Opção inválida. \n");
            return 1;
    }
    printf("Digite o ANO: \n");
    scanf("%d]", &data.ano);

    printf("A data é:%d/%d/%d \n", data.dia, data.mes+1, data.ano);
    
    return 0;
}
