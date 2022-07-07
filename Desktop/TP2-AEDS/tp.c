#include <stdio.h>
#include "tp.h"

void cadastrarbus(struct Onibus onb[]) {
    printf("\nInsira os números dos ônibus:");
    for(int i = 0; i < 4; i++){
        scanf("%d", &onb[i].numerobus);
    }
    printf("\n");
    for(int i = 0; i < 4; i++){
        printf("%d ", onb[i].numerobus);
    }
}

void cadastrarnum(struct Onibus onb[]){
    printf("Insira o número de lugares disponíveis em cada ônibus: ");
    for(int i = 0; i < 4; i++){
        printf("Ônibus %d", onb[i].numerobus);
        scanf("%d", &onb[i].lugares);
    }
}

void reservar(struct Onibus onb[], struct Pessoa p[], int n){
    if(n != onb[0].numerobus && n != onb[1].numerobus && n != onb[2].numerobus && n != onb[3].numerobus) {
        printf("Opção inválida!");
    }
    else{
        printf("Insira seu nome: ");
        for(int i = 0; i < 4; i++){
            if(n == onb[i].numerobus){
                if(onb[i].lugares == 0){
                    onb[i].lugares -= 1;
                    printf("Reserva Confirmada");
                }
            }
        }
    }
}

void consultarbus(struct Onibus onb[], int n){
    for(int i = 0; i < 4; i++){
        if(n == onb[i].lugares){
            
        }
    }
}

void consultarpas(){
    printf("Hwei");
}