#include <stdio.h> 
#include "tp.h"

int main() {
    struct Onibus onb[4];
    int op = 0, numbus = 0;
    while(op != 5){
        printf("\n=======Menu de Opções=======");
        printf("\n1 - Cadastrar número dos ônibus \n2 - Cadastrar número de lugares \n3 - Reservar Passagem \n4 - Consultar Ônibus \n5 - Consultar por passageiro \n6 - Finalizar");
        printf("\n============================\n");
        printf("Opção desejada: ");
        scanf("%d", &op);
        if(op == 1) {
            cadastrarbus(onb);
        }
        if(op == 2) {
            cadastrarnum(onb);
        }
        if(op == 3) {
            printf("Insira o número do ônibus desejado: ");
            scanf("%d", &numbus);
            reservar(onb, numbus);
            numbus = 0;
        }
        if(op == 4) {
            consultarbus();
        }
        if(op == 5) {
            consultarpas();
        }
        if(op == 6) {
            break;;
        }
    }
    return 0;
}