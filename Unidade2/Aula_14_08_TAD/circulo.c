#include <stdlib.h>
#include "circulo.h"

#define PI 3.14159

struct circulo
{
    Ponto* p;
    float r;
};

Circulo* criaCirculo (float x, float y, float r){
    Circulo * c = (Circulo*) malloc(sizeof(Circulo));
    c->p = ptoCria(x,y);
    c->r = r;

    return 0;
}

void circuloLibera(Circulo* c){
    ptoLibera(c->p);
    free(c);
}

float circuloArea(Circulo* c){
    return PI*(c->r)*(c->r);
}

int circuloInterior(Circulo* c, Ponto* p){
    float d = ptoDistancia(c->p, p);
    return (d< c->r);
}


