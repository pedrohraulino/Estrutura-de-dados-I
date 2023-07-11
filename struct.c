#include<stdio.h>
#include<stdlib.h>

struct aluno
{
    char nome[50];
    int idade;
    int matricula;
};

int main (void){

    struct aluno estruturaAuno; 

    printf("digite o nome do aluno \n");
    scanf(" %[^\n]", estruturaAuno.nome);

    printf("digite a idade do aluno \n");
    scanf(" %d", &estruturaAuno.idade);

    printf("digite o nome do aluno \n");
    scanf(" %d", &estruturaAuno.matricula);


    printf("o nome do aluno de matricula: %d é %s. Ele tem %d anos", estruturaAuno.matricula, estruturaAuno.nome, estruturaAuno.idade);


    return 0;
}