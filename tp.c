#include <stdio.h>
#include <string.h>
#include "tp.h"

void cadastrarbus(struct Onibus onb[]) {
    for(int i = 0; i < 4; i++){
        printf("\nInsira o número do ônibus[%d]:",i+1);
        scanf("%d", &onb[i].numerobus);
        
    }
    printf("\n");
    printf("Ônibus  Numero\n");
    for(int i = 0; i < 4; i++){
        printf("[%d]  [%d]\n", i+1,onb[i].numerobus);
    }
}

void cadastrarnum(struct Onibus onb[]){
    for(int i = 0; i < 4; i++){
        printf("[Insira o número de lugares disponíveis em cada ônibus]\n ");
        printf("Ônibus [%d]:", onb[i].numerobus);
        scanf("%d", &onb[i].lugares);
        onb[i].passageiro_bus=0;
    }
}

void reservar(struct Onibus onb[], int n){
    int pos=0;
    if(n != onb[0].numerobus && n != onb[1].numerobus && n != onb[2].numerobus && n != onb[3].numerobus) {
        printf("Opção inválida!");
    }
    else{
        for(int i = 0;i<4;i++){
            if(n == onb[i].numerobus){
                pos=i;
            }
        }
            if(onb[pos].lugares != 0){
                printf("Insira seu nome: ");
                setbuf(stdin,NULL);
                fgets(onb[pos].nome[(onb[pos].passageiro_bus)], 30, stdin);
                setbuf(stdin,NULL);
                onb[pos].lugares -= 1;
                onb[pos].passageiro_bus++;
                printf("Reserva Confirmada");
                }
            else{
                printf("O ônibus está lotado!");
            }
        
        
    }
}

void consultarbus(struct Onibus onb[], int n, int b, int c){   
    if(b != 0){   
        for(int i = 0; i < 4; i++){
            if(n == onb[i].numerobus){
                printf("Quantidade de lugares disponiveis no onibus[%d]: [%d]\n",onb[i].numerobus,onb[i].lugares);
                printf("Passageiros\n");
                for(int j = 0;j<(onb[i].passageiro_bus);j++){
                    printf("%s",onb[i].nome[j]);
                }

            }
        }
    }
    else{
        printf("Cadastre algum ônibus e a quantidade de lugares antes para poder consultar!");
    }
}

void consultarpas(char *nomes,struct Onibus onb[], int a){
    if(a != 0){    
        for(int i = 0;i<4;i++){
            int qnt=0;
            for(int j = 0;j<onb[i].passageiro_bus;j++){
                if(strcmp(nomes,onb[i].nome[j])==0){
                    qnt++;
                }
            }
            printf("A quantidade de reservas do passageiro [%s] no onibus[%d] é [%d]\n",nomes,onb[i].numerobus,qnt);
        }
    }
    else{
        printf("É necessário reservar no mínimo um assento para poder consultar algum indivíduo!");
    }

}
