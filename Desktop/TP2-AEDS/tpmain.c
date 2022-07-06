#include <stdio.h> 
#include "tp.h"

void main() {
    int op = 0, numbus = 0;
    while(op != 5){
        printf("\n=======Menu de Opções=======");
        printf("\n1 - Cadastrar número dos ônibus \n2 - Cadastrar número de lugares \n3 - Reservar Passagem \n4 - Consultar Ônibus \n5 - Consultar por passageiro \n6 - Finalizar");
        printf("\n============================\n");
        printf("Opção desejada: ");
        scanf("%d", &op);
        if(op == 1) {
            cadastrarbus();
        }
        if(op == 2) {
            cadastrarnum();
        }
        if(op == 3) {
            printf("Insira o número do ônibus desejado: ");
            scanf("%d", &numbus);
            reservar(numbus);
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
}