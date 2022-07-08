#include <stdio.h> 
#include <string.h>
#include "tp.h"

void main() {
    struct Onibus onb[4];
    int op = 0, numbus = 0, cond1 = 0, cond2 = 0, cond3 = 0;
    char nome[30];
    while(op != 6){
        printf("\n=======Menu de Opções=======");
        printf("\n1 - Cadastrar número dos ônibus \n2 - Cadastrar número de lugares \n3 - Reservar Passagem \n4 - Consultar Ônibus \n5 - Consultar por passageiro \n6 - Finalizar");
        printf("\n============================\n");
        printf("Opção desejada: ");
        scanf("%d", &op);
        if(op == 1) {
            cadastrarbus(onb);
            cond1++;
        }
        if(op == 2) {
            cadastrarnum(onb);
            cond2++;
        }
        if(op == 3) {
            printf("Insira o número do ônibus desejado: ");
            scanf("%d", &numbus);
            reservar(onb,numbus);
            numbus = 0;
            cond3++;
        }
        if(op == 4) {
            printf("Insira o número do ônibus desejado: ");
            scanf("%d", &numbus);
            consultarbus(onb, numbus, cond1, cond2);
            numbus = 0;
        }
        if(op == 5) {
            printf("Digite o nome do passageiro:");
            setbuf(stdin,NULL);
            fgets(nome,30,stdin);
            setbuf(stdin,NULL);
            consultarpas(nome, onb, cond3);
        }
        if(op == 6) {
            break;
        }
    }
}