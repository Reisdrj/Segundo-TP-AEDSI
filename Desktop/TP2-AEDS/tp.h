#ifndef TP
#define TP

struct Onibus{
    int numerobus;
    int lugares;
};

struct Onibus onb[4];

struct Pessoa{
    char nome[30];
    int bus;
    int assento;
};

void cadastrarbus();
void cadastrarnum();
void reservar();
void consultarbus();
void consultarpas();
 
#endif //TP