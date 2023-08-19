/*TAD: Ponto (x,y)*/

/*TAD: exportado*/

typedef struct ponto Ponto;

Ponto* ptoCria (float x, float y);

/*Funções exportadas*/

void ptoLibera (Ponto*p);

void ptoAcessa (Ponto*p, float* x, float* y);

void ptoAtribui (Ponto*p, float* x, float* y);

float ptoDistancia(Ponto* p1, Ponto* p2);
