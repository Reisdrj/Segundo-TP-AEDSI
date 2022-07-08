#ifndef TP
#define TP

struct Onibus{
    int numerobus;
    int lugares;
    char nome[45][30];
    int passageiro_bus;
    
};


void cadastrarbus(struct Onibus onb[]);
void cadastrarnum(struct Onibus onb[]);
void reservar(struct Onibus onb[], int a);
void consultarbus(struct Onibus onb[], int a, int b, int c);
void consultarpas();
 
#endif //TP