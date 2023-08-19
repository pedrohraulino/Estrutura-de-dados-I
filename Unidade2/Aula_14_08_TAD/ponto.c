#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto.h"

struct ponto
{
    float x;
    float y;
};
Ponto* ptoCria(float x, float y){
    Ponto* p = (Ponto*) malloc(sizeof(Ponto));
    if (p == NULL)
    {
        printf("Memoria insuficiente");
        exit(1);
    }
    p->x = x;
    p->y = y;

    return p;
}

void ptoLibera(Ponto*p){
    free(p);
}

void ptoAcessa(Ponto* p, float* x, float* y){
    *x = p-> x;
    *y = p-> y;
}

void ptoAtrubui(Ponto* p, float x, float y){
    p-> x = x;
    p-> y = y;
}

float ptoDistancia( Ponto* p1, Ponto* p2){
    float dx = p2->x - p1->x;
    float dy = p2->x - p1->x;

    return sqrt(dx*dx + dy*dy);
}
