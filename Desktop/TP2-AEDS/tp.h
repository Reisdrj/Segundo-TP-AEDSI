#ifndef TP
#define TP

#include <stdlib.h>

struct Onibus{
    int numerobus;
    int lugares;
};

struct Pessoa{
    char nome[20];
    int bus;
};

void cadastrarbus(struct Onibus onb[]);
void cadastrarnum(struct Onibus onb[]);
void reservar(struct Onibus onb[], int a);
void consultarbus();
void consultarpas();
 
#endif //TP