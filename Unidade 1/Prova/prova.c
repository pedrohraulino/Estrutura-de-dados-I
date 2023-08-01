#include <stdio.h>
        #include <stdlib.h>

        typedef struct Professor{
            char nome[20];
            int disciplinas;
            int horas;
        }professor;

        
        void preencherDados(professor p){
        
            printf("Digite o nome do professor \n");
            scanf(" %s", p.nome );
            
            printf("Digite o total de disciplinas \n");            
            scanf("%d", &p.disciplinas );
            
            printf("Digite a carga horaria \n");
            scanf("%d", &p.horas );

        };

        void imprimiDados(professor p){
            printf("O nome do professor e: %s \n", p.nome );
            printf("Tem um total de: %d disciplinas \n", p.disciplinas);
            printf("Carga horaria de: %d \n", p.horas);
        };

        void alteraCargaHoraria(professor p){

            int novaCarga = 0;
            printf("Digite a nova carga horaria \n");
            scanf("%d", &novaCarga);
            p.horas = novaCarga;
        };

        int main (void){
            professor Professor;
            preencherDados(Professor);
            imprimiDados(Professor);
            alteraCargaHoraria(Professor);
            printf("A nova carga horaria e: %d", Professor.horas);

            return 0;
        }