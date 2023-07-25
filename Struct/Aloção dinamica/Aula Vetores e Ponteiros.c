#include<stdio.h>
#include<stdlib.h>
// declaração da struct que contem as variáveis que vão aramazer os dados do aluno que serão  utilizadas no programa
typedef struct aluno
{   
    int mat;
    char nome[81];
    char end[121];
    char tel[21];
} Aluno;

//Define um vetor de ponteiro para Alunos
#define MAX 100
Aluno* tab[MAX];

// // Função para inicializar o vetor de ponteiros com NULL
void inicializa (int n, Aluno** tab){
    int i;
    for(i=0; i<n; i++){
        tab[i]= NULL;
    }
}

//Funçào para preencher os dados de cada aluno no indice do vetor
void preecher( int n, Aluno** tab, int i){
    if(i<0 || i>=n){
        printf("Indice fora do limite do vetor");
        exit(1);
    }

    if(tab[i]==NULL){
        tab[i]= (Aluno*)malloc(sizeof(Aluno));
    }

    printf("Digite a matricula \n");
    scanf("%d", &tab[i]->mat);
    printf("Digite o nome \n");
    scanf(" %80[^\n]", tab[i]->nome);
    printf("Digite o Endereço: \n");
    scanf(" %120[^\n]", tab[i]->end);
    printf("Digite o Telefone: \n");
    scanf(" %20[^\n]", tab[i]->tel);
}

// Função para libetar a memoria em cada indice do vetor
void retira(int n, Aluno**tab, int i){
    if(i<0 || i>=n){
        printf("Indice fora do limite do vetor");
        exit(1);
    }

    if(tab[i]!=NULL){
        free(tab[i]);
        tab[i]=NULL;
    }
}

// Funçao para imprimir os dados em cada indice do Vetor
void imprime (int n, Aluno**tab, int i){
    if(i<0 || i>=n){
        printf("Indice fora do limite do vetor");
        exit(1);
    }

    if(tab[i]!= NULL){
        printf("Matricula: %d\n", tab[i]->mat);
        printf("Nome: %s\n", tab[i]->nome);
        printf("Endereço: %s\n", tab[i]->end);
        printf("Telefone: %s\n", tab[i]->tel);
    }
}

//Função para impirmir os dados de todos os alunos do vetor 
void imptimeTudo(int n, Aluno**tab){
    int i;
    for(i=0; i<n; i++){
        imprime(n, tab, i);
    }
}

int main(void){
    Aluno*tab[10];
    inicializa(10, tab);
    preecher(10, tab, 0);
    preecher(10, tab, 1);
    preecher(10, tab, 2);
    imptimeTudo(10,tab);
    retira(10, tab, 0);
    retira(10, tab, 1);
    retira(10, tab, 2);   

    return 0;  
}