#ifndef TP
#define TP

struct Onibus{
    int numerobus;
    int lugares;
    char nome[45][30];
    int passageiro_bus;
    
};


void cadastrarbus(struct Onibus onb[]);
int cadastrarnum(struct Onibus onb[], int a);
void reservar(struct Onibus onb[], int a);
void consultarbus(struct Onibus onb[], int a, int b, int c);
void consultarpas(char *nome, struct Onibus onb[], int n);
 
#endif //TP