#ifndef TP
#define TP

struct Onibus{
    int numerobus;
    int lugares;
};

struct Pessoa{
    char nome[30];
    int bus;
    int assento;
};

void cadastrarbus(struct Onibus onb[]);
void cadastrarnum(struct Onibus onb[]);
void reservar(struct Onibus onb[], struct Pessoa p[], int a);
void consultarbus(struct Onibus onb[], int a);
void consultarpas();
 
#endif //TP