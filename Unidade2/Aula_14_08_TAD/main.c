#include <stdio.h>
#include "ponto.h"
#include "circulo.h"

int main (void){
    Ponto* p = ptoCria(2.0, 1.0);
    Ponto* q = ptoCria(3.4, 2.1);
    float d = ptoDistancia(p,q);

    printf("A distancia entre os pontos eh %f \n", d);

    Circulo* c = criaCirculo(3.5, 2.0, 1.5);
    float a = circuloArea(c);
    Ponto* P= ptoCria(2.2, 1.5);

    printf("a areá é: %f", a);

    if (circuloInterior(c, P)) {
        printf("Ponto no círculo\n");
    } else {
        printf("Ponto não está no círculo\n");
    }

    ptoLibera(q);
    ptoLibera(p);
    circuloLibera(c);
    
    return 0;
}