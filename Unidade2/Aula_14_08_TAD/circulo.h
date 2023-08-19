/*TAD: Ciruclo*/

/*Dependencias de modulos*/
#include "ponto.h"

/*Tipo exportado*/
typedef struct circulo Circulo;

Circulo* criaCirculo (float x, float y, float r);
void circuloLibera (Circulo* c);
float circuloArea (Circulo* c);
int circuloInterior (Circulo* c, Ponto* p);
